/*==========================================================================
 *
 *  Copyright (C) 1996,1997 Microsoft Corporation. All Rights Reserved.
 *
 *  File:  WinTrek.h
 *
 *  Purpose:Main header file
 *
 *  Author: J. Eugene Ball and Rick Rashid
 *
 *  Note:   This file derived in part on code from the game "Trek" written
 *        for the Xerox Alto by J. Eugene Ball and Rick Rashid, Copyright (c) 1978
 *        and used here by permission of the authors.
 *
 *
 ***************************************************************************/

#ifndef _WINTREK_
#define _WINTREK_

#include "treki.h"

const float s_fMaxFOV = RadiansFromDegrees(50.0f);
const float s_fDefaultFOV = RadiansFromDegrees(50.0f);
const float s_fMinFOV = RadiansFromDegrees(5.0f);

class TrekWindowImpl;
class AutoDownloadProgressDialogPopup;// MGC: move

/*!!!
class BillboardType {
public:
    TRef<AnimatedImage> m_pimage;
    float               m_lifespan;

    BillboardType() 
    {
    } 

    BillboardType(Modeler* pmodeler, const char* textureName, float lifespan, float sa, float ea) :
        m_lifespan(lifespan)
    {
        TRef<Surface> psurface = pmodeler->LoadSurface(textureName, true);

        if (psurface) {
            m_pimage = new AnimatedImage(new Number(0.0f), psurface);
        }
    }

    BillboardType(const BillboardType& type) :
        m_pimage(type.m_pimage),
        m_lifespan(type.m_lifespan)
    {
    }

    void Purge(void)
    {
        m_pimage = NULL;
    }
};
*/

//////////////////////////////////////////////////////////////////////////////
// WinTrek Client
constexpr int c_numGrooveLevels = 3;

class WinTrekClient : public BaseClient, public IIntegerEventSink
{
  TRef<AnimatedImage> LoadExplosionImage(const ZString &str);
  bool OnEvent(IIntegerEventSource *pevent, int value) override;

public:
  WinTrekClient(void);
  ~WinTrekClient(void) override;

  void Initialize(Time timeNow) override;
  void Terminate() override;
  ImissionIGC *ResetStaticData(void);

  bool bInitTrekThrottle;
  //bool                    bInitTrekJoyStick; moved to baseclient
  bool joyThrottle;
  float trekThrottle;
  float trekJoyStick[3];
  float fOldJoyThrottle;
  virtual void OverrideThrottle(float fDesiredThrottle);

  // igc site implementation

protected:
  bool m_bDisconnected;
  TRef<TrekWindow> m_pwindow;
  TRef<Engine> m_pengine;
  TRef<Modeler> m_pmodeler;
  TRef<AnimatedImage> m_pimageFlare;
  float m_offset;
  TRef<Geo> m_pgeoFlares[3];
  SoundID m_idAmbient;
  TRef<ISoundInstance> m_psoundAmbient;
  TRef<ISoundInstance> m_psoundMissileWarning;

  int m_nGrooveLevel;
  Time m_vtimeGrooveDrops[c_numGrooveLevels];

  SideID m_sideidLastWinner;
  bool m_bWonLastGame;
  bool m_bLostLastGame;
  ZString m_strGameOverMessage;
  int m_nNumEndgamePlayers;
  PlayerEndgameInfo *m_vplayerEndgameInfo;
  int m_nNumEndgameSides;
  SideEndgameInfo m_vsideEndgameInfo[c_cSidesMax];
  bool m_bEndgameEjectPods;
  bool m_bGameCounted;
  bool m_bScoresCounted;

  ZString m_strDisconnectReason;

  bool m_bFilterChatsToAll;
  bool m_bFilterQuickComms;
  bool m_bFilterLobbyChats;

  //
  // Explosions
  //

  TVector<TRef<AnimatedImage>> m_vpimageExplosion[8];
  TRef<Image> m_pimageShockWave;

  TRef<AnimatedImage> LoadExplosion(const ZString &str);

public:
  void DevelopmentCompleted(IbucketIGC *b, IdevelopmentIGC *d, Time now) override;
  void StationTypeCompleted(IbucketIGC *b, IstationIGC *pstation, IstationTypeIGC *st, Time now) override;
  void DroneTypeCompleted(IbucketIGC *b, IstationIGC *pstation, IdroneTypeIGC *dt, Time now) override;
  void BuildStation(IasteroidIGC *pasteroid, IsideIGC *pside, IstationTypeIGC *pstationtype, Time now) override;
  void LayExpendable(Time now, IexpendableTypeIGC *pet, IshipIGC *pshipLayer) override;
  TRef<ThingSite> CreateThingSite(ImodelIGC *pModel) override;
  TRef<ClusterSite> CreateClusterSite(IclusterIGC *pCluster) override;
  void PlaySoundEffect(SoundID soundID, ImodelIGC *model = nullptr) override;
  void PlaySoundEffect(SoundID soundID, ImodelIGC *model, const Vector &vectOffset) override;
  void PlayNotificationSound(SoundID soundID, ImodelIGC *model) override;
  void PlayFFEffect(ForceEffectID effectID, ImodelIGC *model = nullptr, LONG lDirection = 0) override;
  void PlayVisualEffect(VisualEffectID effectID, ImodelIGC *model = nullptr, float fIntensity = 1.0f) override;
  void TerminateModelEvent(ImodelIGC *pmodel) override;
  bool DockWithStationEvent(IshipIGC *ship, IstationIGC *station) override;
  void KillShipEvent(Time now, IshipIGC *ship, ImodelIGC *launcher, float amount, const Vector &p1, const Vector &p2) override;
  void DamageShipEvent(Time now, IshipIGC *pShip, ImodelIGC *pLauncher, DamageTypeID type, float flAmount, float flLeakage, const Vector &p1, const Vector &p2) override;
  void TargetKilled(ImodelIGC *pmodel) override;
  void ShipWarped(IshipIGC *ship, SectorID sidOld, SectorID sidNew) override;
  void ActivateTeleportProbe(IprobeIGC *pprobe) override;
  void DestroyTeleportProbe(IprobeIGC *pprobe) override;
  void PostText(bool bCritical, const char *pszText, ...) override;
  void PostNotificationText(ImodelIGC *pmodel, bool bCritical, const char *pszText, ...) override;
  void OverrideCamera(ImodelIGC *pmodel) override;
  void EjectPlayer(ImodelIGC *pmodel) override;
  void HitWarpEvent(IshipIGC *ship, IwarpIGC *warp) override;
  bool HitTreasureEvent(Time now, IshipIGC *ship, ItreasureIGC *treasure) override;
  void PaydayEvent(IsideIGC *pside, float money) override;
  bool UseRipcord(IshipIGC *pship, ImodelIGC *pmodel) override;
  bool ContinueRipcord(IshipIGC *pship, ImodelIGC *pmodel) override;

  void SetViewCluster(IclusterIGC *pcluster, const Vector *pposition = nullptr) override;
  void RequestViewCluster(IclusterIGC *pcluster, ImodelIGC *pmodelTarget = nullptr) override;
  void ReceiveChat(IshipIGC *pshipSender, ChatTarget ctRecipient, ObjectID oidRecipient, SoundID voiceOver, const char *szText, CommandID cid, ObjectType otTarget, ObjectID oidTarget, ImodelIGC *pmodelTarget = nullptr, bool bObjectModel = false) override;

  void GetMoneyRequest(IshipIGC *pshipSender, Money amount, HullID hidFor) override;

  bool FilterChatsToAll() { return m_bFilterChatsToAll; };
  void FilterChatsToAll(bool bFilterChatsToAll) { m_bFilterChatsToAll = bFilterChatsToAll; };
  bool FilterQuickComms() { return m_bFilterQuickComms; };
  void FilterQuickComms(bool bFilterQuickComms) { m_bFilterQuickComms = bFilterQuickComms; };
  bool FilterLobbyChats() { return m_bFilterLobbyChats; };
  void FilterLobbyChats(bool bFilterLobbyChats) { m_bFilterLobbyChats = bFilterLobbyChats; };
  /*
          virtual void FireMissile(IshipIGC* pship, ImagazineIGC* pmagazine,
                          Time timeFired, ImodelIGC* pTarget, float lock);
  */
  HRESULT ConnectToServer(ConnectInfo &ci, DWORD dwCookie, Time now, const char *szPassword, bool bStandalonePrivate) override;
  HRESULT ConnectToLobby(ConnectInfo *pci) override;// pci is NULL if relogging in
  HRESULT ConnectToClub(ConnectInfo *pci) override;

  void JoinMission(MissionInfo *pMission, const char *szMissionPassword) override;
  void CreateMissionReq() override;

  // IFedMessagingSite
  HRESULT OnAppMessage(FedMessaging *pthis, CFMConnection &cnxnFrom, FEDMESSAGE *pfm) override;
#ifndef NO_MSG_CRC
  void OnBadCRC(FedMessaging *pthis, CFMConnection &cnxn, BYTE *pMsg, DWORD cbMsg) override;
#endif
  void OnLogonAck(bool fValidated, bool bRetry, LPCSTR szFailureReason) override;
  void OnLogonLobbyAck(bool fValidated, bool bRetry, LPCSTR szFailureReason) override;
  void OnLogonClubAck(bool fValidated, bool bRetry, LPCSTR szFailureReason) override;
  HRESULT OnSessionLost(char *szReason, FedMessaging *pthis) override;
  void FlushSessionLostMessage();
  void Disconnect() override;
  void OnQuitMission(QuitSideReason reason, const char *szMessageParam) override;
  void ChangeStation(IshipIGC *s, IstationIGC *pstationOld, IstationIGC *pstationNew) override;
  void ChangeCluster(IshipIGC *s, IclusterIGC *pclusterOld, IclusterIGC *pclusterNew) override;
  void LoadoutChangeEvent(IshipIGC *pship, IpartIGC *ppart, LoadoutChange lc) override;
  virtual IpartIGC *GetCargoPart(void);
  virtual void NextCargoPart(void);
  virtual bool SelectCargoPartOfType(EquipmentType et, PartMask maxPartMask, IpartTypeIGC *pptNotThis);
  virtual Mount GetSelectedCargoMount();

  void OnReload(IpartIGC *ppart, bool bConsumed) override;
  void Preload(const char *pszModelName, const char *pszTextureName) override;
  void SetCDKey(const ZString &strCDKey) override;
  void ChangeGameState(void) override { GetWindow()->UpdateGameStateContainer(); }

  IAutoUpdateSink *OnBeginAutoUpdate(IAutoUpdateSink *pSink, bool bConnectToLobby) override;
  bool ShouldCheckFiles() override;

  const char *GetArtPath() override { return GetModeler()->GetArtPath(); }

  const char *GetNameLogonClubServer() { return m_szClubCharName; };
  const char *GetNameLogonZoneServer() { return m_szLobbyCharName; };

  IObject *LoadRadarIcon(const char *szName) override;

  void UpdateAmbientSounds(DWORD dwElapsedTime);
  void ResetSound();

  Mount mountSelected;
  bool fGroupFire;

  WarningMask wmOld;

  TRef<ISoundInstance> StartSound(ISoundTemplate *ptemplate, ISoundPositionSource *psource = nullptr) { return GetWindow()->StartSound(ptemplate, psource); };
  TRef<ISoundInstance> StartSound(SoundID soundId, ISoundPositionSource *psource = nullptr) { return GetWindow()->StartSound(soundId, psource); };

  void ForwardSquadMessage(FEDMESSAGE *pSquadMessage) override;// forward message to squads screen
  void ForwardCharInfoMessage(FEDMESSAGE *pCharInfoMessage) override;// forward message to character info screen
  void ForwardLeaderBoardMessage(FEDMESSAGE *pCharInfoMessage) override;// forward message to character info screen
  SideID GetLastWinner() { return m_sideidLastWinner; };
  bool GetWonLastGame() { return m_bWonLastGame; };
  bool GetLostLastGame() { return m_bLostLastGame; };
  void SetGameoverInfo(FMD_S_GAME_OVER *pfmGameOver);
  void AddGameoverPlayers(PlayerEndgameInfo *vEndgamePlayerInfo, int nCount);
  ZString GetGameoverMessage();
  PlayerEndgameInfo *GetEndgamePlayerInfo(int nIndex);
  int GetNumEndgamePlayers();
  SideEndgameInfo *GetSideEndgameInfo(SideID sideId);
  int GetNumEndgameSides();
  Color GetEndgameSideColor(SideID id);
  CivID GetEndgameSideCiv(SideID id);
  bool GetGameoverEjectPods() { return m_bEndgameEjectPods; };
  bool GetGameCounted() { return m_bGameCounted; };
  bool GetScoresCounted() { return m_bScoresCounted; };

  void SaveSquadMemberships(const char *szCharacterName) override;
  void RestoreSquadMemberships(const char *szCharacterName) override;

  void StartLockDown(const ZString &strReason, LockdownCriteria criteria) override;
  void EndLockDown(LockdownCriteria criteria) override;

  int GetGrooveLevel();
  ZString GetSavedCharacterName();
  void SaveCharacterName(ZString strName);

private:
  friend class ClusterSiteImpl;
  friend class ThingSiteImpl;

  AutoDownloadProgressDialogPopup *m_pAutoDownloadProgressDialogPopup;
};

constexpr int c_PopupX = 150;
constexpr int c_PopupY = 580;// 0 == bottom of screen

extern WinTrekClient trekClient;

extern void debugClock(const char *file, long line = 0);
#define     debugClk()  debugClock(__FILE__, __LINE__)

extern TRef<ZWriteFile> g_pzfFrameDump;
using FrameDumpInfo = struct
{
  int objects_drawn[OT_modelEnd + 1];
  int objects_insector[OT_modelEnd + 1];
};
extern FrameDumpInfo g_fdInfo;

TRef<IMessageBox> CreateMessageBox(const ZString &str, ButtonPane *pbuttonIn = nullptr, bool fAddDefaultButton = true, bool fAddCancelButton = false, float paintDelay = 0.0f);
TRef<IPopup> CreateCDKeyPopup();

#endif