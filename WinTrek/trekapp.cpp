#include "pch.h"
#include <objbase.h>
#include <malloc.h>
#include "regkey.h"
#include "main.h"                    // DO NOT REMOVE--this is where global variables are defined

extern bool g_bEnableSound = true;
extern bool g_bCheckFiles;
extern bool g_fZoneAuth;
bool g_bSkipAutoUpdate = false;
bool g_bDownloadZoneMessage = true;
bool g_bDisableZoneClub = false;
bool g_bDisableNewCivs = true;
bool g_bQuickstart = false;
bool g_bReloaded = false;
int g_civStart = -1;
bool g_bDownloadNewConfig = true;

//
// Check to make sure that they are running DX 7 Dsound or better
//
bool CheckDSoundVersion()
{
  // Get version information from the application 

  HMODULE hmodDSound = GetModuleHandle("dsound");
  if (nullptr == hmodDSound)// why isn't the dll loaded???
    return false;

  char szDSoundPath[MAX_PATH];
  GetModuleFileName(hmodDSound, szDSoundPath, sizeof(szDSoundPath));

  DWORD dwTemp;
  DWORD dwVerInfoSize = GetFileVersionInfoSize(szDSoundPath, &dwTemp);
  if (0 == dwVerInfoSize) return false;

  void *pvVerInfo = _alloca(dwVerInfoSize);
  GetFileVersionInfo(szDSoundPath, NULL, dwVerInfoSize, pvVerInfo);

  VS_FIXEDFILEINFO *lpvsFixedFileInfo = nullptr;
  unsigned uTemp;
  if (!VerQueryValue(pvVerInfo, "\\", (LPVOID *) &lpvsFixedFileInfo, &uTemp)) return false;

  // check the version info

  WORD ver1 = HIWORD(lpvsFixedFileInfo->dwFileVersionMS);
  WORD ver2 = LOWORD(lpvsFixedFileInfo->dwFileVersionMS);
  WORD ver3 = HIWORD(lpvsFixedFileInfo->dwFileVersionLS);
  WORD ver4 = LOWORD(lpvsFixedFileInfo->dwFileVersionLS);

  if (ver1 > 5)// assume all major new versions work
    return true;

  if (ver1 == 5)// NT -- WARNING -- if future versions of DX go outside 4.??? and spill into NT versions, we're in trouble
    return ver2 > 0 || ver3 >= 2113;// ver3 == NT build #
  if (ver1 == 4)// Stand-alone DX runtimes
  {
    if (ver2 > 7)// new major dx versions (DX8+)
      return true;
    if (ver2 == 7)// DX7
      return ver3 > 0 || ver4 >= 700;
  }

  return false;
}

class TrekAppImpl : public EffectApp
{
public:
  TrekAppImpl() { AddRef(); }

  HRESULT Initialize(const ZString &strCommandLine) override
  {
    _controlfp(_PC_53, _MCW_PC);

    //
    // Make sure reloader finished correctly--this must be first before any other files are opened
    //
    //
    {
      // Make sure the current path is where Allegiance.exe is for the AutoUpdate: 
      // For Download -AND- for Reloader.exe -AND- Loading FileList which happens 
      // when client logs onto lobby
      //
      char path[MAX_PATH + 16];
      ::GetModuleFileName(nullptr, path, MAX_PATH);
      char *p = strrchr(path, '\\');
      if (!p) p = path;
      else p++;

      *p = 0;// erase filename
      ::SetCurrentDirectory(path);

      HKEY hKey;
      DWORD dwType;
      char szValue[MAX_PATH];
      DWORD cbValue = MAX_PATH;

      // NOTE: please keep reloader.cpp's GetArtPath() in sync with this!!!
      if (ERROR_SUCCESS == ::RegOpenKeyEx(HKEY_LOCAL_MACHINE, ALLEGIANCE_REGISTRY_KEY_ROOT, 0, KEY_READ, &hKey))
      {
        // Get MoveInProgress from registry
        if (ERROR_SUCCESS == ::RegQueryValueEx(hKey, "MoveInProgress", nullptr, &dwType, (unsigned char *) &szValue, &cbValue) && *((DWORD *) szValue) == 1)
        {
          if (::MessageBox(nullptr, "The AutoUpdate process failed to finish.  Try again to finish?  (YES is recommended)", "Error", MB_ICONERROR | MB_YESNO) == IDYES)
          {
            if (!LaunchReloaderAndExit(false))
            {
              ::MessageBox(nullptr, "Couldn't launch Reloader.exe", "Fatal Error", MB_ICONERROR);
              ExitProcess(0);
              return S_FALSE;
            }
          }
          else
          {
            ExitProcess(0);
            return S_FALSE;
          }
        }
        RegCloseKey(hKey);
      }
    }

    //
    // Check the DSound version
    //

    if (!CheckDSoundVersion())
    {
      MessageBox(nullptr, "Allegiance requires DirectX 7 or higher, which was not detected.  " "Please re-run setup and choose to install DirectX 7.", "Allegiance", MB_ICONERROR | MB_OK);

      return E_FAIL;
    }

    HRESULT hr = CoInitialize(nullptr);

    if (FAILED(hr)) return hr;

    // Fix success HRESULT
    hr = S_OK;

    EffectApp::Initialize(strCommandLine);

    //
    // get the artpath
    //

    PathString pathStr;

    char logFileName[MAX_PATH + 16];
    GetModuleFileName(nullptr, logFileName, MAX_PATH);
    char *p = strrchr(logFileName, '\\');
    if (!p) p = logFileName;
    else p++;
    strcpy(p, "artwork");
    pathStr = logFileName;

    GetModeler()->SetArtPath(pathStr);
    UTL::SetArtPath(pathStr);

    //
    // load the fonts
    //

    TrekResources::Initialize(GetModeler());

    //
    // Initialize the runtime
    //

    srand(static_cast<unsigned>(timeGetTime()));

    //
    // Parse the command line
    //

    bool bLogonDialog = true;
    bool bStartOffline = false;
    bool bStartTraining = false;
    bool bMovies = true;
    bool bSingleInstance = true;
    bool bSoftware = false;
    bool bHardware = false;
    bool bPrimary = false;
    bool bSecondary = false;
    ZString strMap;

    PCC pcc = strCommandLine;
    CommandLineToken token(pcc, strCommandLine.GetLength());

    while (token.MoreTokens())
    {
      ZString str;

      if (token.IsMinus(str))
      {
        if (str == "training")
        {
          bStartTraining = true;
          bLogonDialog = false;
          bMovies = false;
        }
        else if (str == "software") { bSoftware = true; }
        else if (str == "hardware") { bHardware = true; }
        else if (str == "primary") { bPrimary = true; }
        else if (str == "secondary") { bSecondary = true; }
        else if (str == "nooutput") { g_bOutput = false; }
        else if (str == "quickstart")
        {
          g_bQuickstart = true;
          float civStart;
          if (token.IsNumber(civStart)) g_civStart = static_cast<int>(civStart);
        }
        else if (str == "nocfgdl") { g_bDownloadNewConfig = false; }
        else if (str == "checkfiles") { g_bCheckFiles = true; }
        else if (str == "noautoupdate") { g_bSkipAutoUpdate = true; }
        else if (str == "nosound") { g_bEnableSound = false; }
        else if (str == "nomessage") { g_bDownloadZoneMessage = false; }
        else if (str == "nomovies") { bMovies = false; }
        else if (str == "zone") { g_bDisableZoneClub = false; }
        else if (str == "newcivs") { g_bDisableNewCivs = false; }
        else if (str == "map")
        {
          if (token.IsString(strMap))
          {
            bStartOffline = true;
            bLogonDialog = false;
          }
        }
        else if (str == "reloaded")
        {
          //
          // reloaded after an auto-update
          // 
          //g_bReloaded = true;

          // TODO: make two types of reloaded: one for internet, one for zone
          // that way we know how to log on.  Right now there it just relogs on
          // using internet connect
        }
        else if (str == "multi") { bSingleInstance = false; }
        else if (str == "noauth") { g_fZoneAuth = false; }
      }
      else if (token.IsString(str))
      {
        // do nothing if string (just skip it!)...this avoids infinite loops if given bad command-lines
      }
    }

    // 
    // Check for other running copies of the app
    //
    if (bSingleInstance)
    {
      HWND hOldInstance = FindWindow(TrekWindow::GetTopLevelWindowClassname(), TrekWindow::GetWindowTitle());

      // if we found another copy of the app
      if (hOldInstance)
      {
        // find out if it has any popups
        HWND hPopup = GetLastActivePopup(hOldInstance);

        // Bring the main window to the top.
        if (SetForegroundWindow(hOldInstance))
        {
          // If the old instance was minimized, restore it.
          if (IsIconic(hOldInstance)) { ShowWindow(hOldInstance, SW_RESTORE); }

          // If the old instance had a pop-up, bring that to the foreground
          if (hPopup != hOldInstance) { SetForegroundWindow(hPopup); }
        }

        return S_FALSE;
      }
    }

    //
    // Create the window
    //

    TRef<TrekWindow> pwindow = TrekWindow::Create(this, strCommandLine, bMovies, bSoftware, bHardware, bPrimary, bSecondary);

    if (!pwindow->IsValid()) { return E_FAIL; }

    //
    // Handling command line options
    //

    if (bStartTraining) GetWindow()->screen(ScreenIDTrainScreen);

    return hr;
  }

  void Terminate() override
  {
    EffectApp::Terminate();
    CoUninitialize();
  }
} g_trekImpl;