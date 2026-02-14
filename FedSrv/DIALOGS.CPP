/****************************************************************************\
*  dialogs.c
*
*  Handles the dialog boxes (which are all gone now, except About
*
****************************************************************************/

#include <shlobj.h>
#include "Resource.h"
#include "fedsrv.h"

// Art path globals (originally from non-standalone server)
const char * c_szBadArtPath = "Bad path to art files.";
const char * c_szBadArtPathTitle = "Error";
char         g_szFileSpecArt[MAX_PATH] = "";
char         g_szFilePathArt[MAX_PATH] = "";
char         g_szHTTPArt[MAX_PATH] = "";
const char * c_szIniSection = "AllSrv";
const char * c_szIniFile = "AllSrv.ini";
const char * c_szIniKeyHTTPArt = "HTTPArt";
const char * c_szIniKeyFileArt = "FileArt";

/****************************************************************************
*
*    FUNCTION: DlgProcAbout
*
*    PURPOSE: dialog callback procedure for "about" box.
*
*\***************************************************************************/

BOOL CALLBACK DlgProcAbout(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
  switch (message) 
  {
    case WM_COMMAND:                         // message: received a command
      if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL) 
	  { // System menu close command?
        EndDialog(hDlg, TRUE);
        return (TRUE);
	  }
      break;
  } 
  return (FALSE);
}


/****************************************************************************\
*
*    FUNCTION: DlgProcSettings
*
*    PURPOSE:  Handles Settings dialog box
*
*\***************************************************************************/
BOOL CALLBACK DlgProcSettings(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
  switch (message) 
  {
    case WM_INITDIALOG:
    {
      SetDlgItemText(hDlg, IDC_EDIT_ARTPATH, g_szFilePathArt);
      SetDlgItemText(hDlg, IDC_EDIT_HTTPART, g_szHTTPArt);
      return 0; // set focus on first control
    }

    case WM_COMMAND:                         // message: received a command
    {
      switch (LOWORD(wParam))
      {
        case IDOK:
        {
          GetDlgItemText(hDlg, IDC_EDIT_HTTPART, g_szHTTPArt,     c_cbArtFilePath);
          GetDlgItemText(hDlg, IDC_EDIT_ARTPATH, g_szFilePathArt, c_cbArtFilePath);
          // save preferences
          WritePrivateProfileString(c_szIniSection, c_szIniKeyHTTPArt, g_szHTTPArt,     c_szIniFile);
          WritePrivateProfileString(c_szIniSection, c_szIniKeyFileArt, g_szFilePathArt, c_szIniFile);

          EndDialog(hDlg, TRUE);
          break;
        }

        case IDCANCEL:
        {
          EndDialog(hDlg, FALSE);
          break;
	      }

        case IDC_BTN_BROWSE:
        {
          LPMALLOC pMalloc;    /* Gets the Shell's default allocator */
          if (::SHGetMalloc(&pMalloc) == NOERROR)    
          {        
            BROWSEINFO bi;
            char szBuffer[MAX_PATH];        
            LPITEMIDLIST pidl;
            bi.hwndOwner = hDlg;        
            bi.pidlRoot = NULL;
            bi.pszDisplayName = szBuffer;
            bi.lpszTitle = ("Select drirectory where artwork is to be monitored");
            bi.ulFlags = BIF_EDITBOX | BIF_RETURNFSANCESTORS | BIF_RETURNONLYFSDIRS;
            bi.lpfn = NULL;        
            bi.lParam = 0;
            // This next call issues the dialog box.
            if ((pidl = ::SHBrowseForFolder(&bi)) != NULL)        
            {
              if (::SHGetPathFromIDList(pidl, szBuffer))            
              { 
                // At this point pszBuffer contains the selected path */.
                SetDlgItemText(hDlg, IDC_EDIT_ARTPATH, szBuffer);
              }
            // Free the PIDL allocated by SHBrowseForFolder.
            pMalloc->Free(pidl);        
            }
            // Release the shell's allocator.        
            pMalloc->Release();    
          }
          break;
        }
      }
      return TRUE;
    }
    break;
  } 
  return FALSE;
}

