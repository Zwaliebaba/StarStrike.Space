

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for AGCIDL.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __AGCIDL_h__
#define __AGCIDL_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IAGCEventSink_FWD_DEFINED__
#define __IAGCEventSink_FWD_DEFINED__
typedef interface IAGCEventSink IAGCEventSink;

#endif 	/* __IAGCEventSink_FWD_DEFINED__ */


#ifndef __IAGCEventSinkSynchronous_FWD_DEFINED__
#define __IAGCEventSinkSynchronous_FWD_DEFINED__
typedef interface IAGCEventSinkSynchronous IAGCEventSinkSynchronous;

#endif 	/* __IAGCEventSinkSynchronous_FWD_DEFINED__ */


#ifndef __IAGCDebugHook_FWD_DEFINED__
#define __IAGCDebugHook_FWD_DEFINED__
typedef interface IAGCDebugHook IAGCDebugHook;

#endif 	/* __IAGCDebugHook_FWD_DEFINED__ */


#ifndef __IAGCGlobal_FWD_DEFINED__
#define __IAGCGlobal_FWD_DEFINED__
typedef interface IAGCGlobal IAGCGlobal;

#endif 	/* __IAGCGlobal_FWD_DEFINED__ */


#ifndef __IAGCVector_FWD_DEFINED__
#define __IAGCVector_FWD_DEFINED__
typedef interface IAGCVector IAGCVector;

#endif 	/* __IAGCVector_FWD_DEFINED__ */


#ifndef __IAGCVectorPrivate_FWD_DEFINED__
#define __IAGCVectorPrivate_FWD_DEFINED__
typedef interface IAGCVectorPrivate IAGCVectorPrivate;

#endif 	/* __IAGCVectorPrivate_FWD_DEFINED__ */


#ifndef __IAGCOrientation_FWD_DEFINED__
#define __IAGCOrientation_FWD_DEFINED__
typedef interface IAGCOrientation IAGCOrientation;

#endif 	/* __IAGCOrientation_FWD_DEFINED__ */


#ifndef __IAGCOrientationPrivate_FWD_DEFINED__
#define __IAGCOrientationPrivate_FWD_DEFINED__
typedef interface IAGCOrientationPrivate IAGCOrientationPrivate;

#endif 	/* __IAGCOrientationPrivate_FWD_DEFINED__ */


#ifndef __IAGCEventType_FWD_DEFINED__
#define __IAGCEventType_FWD_DEFINED__
typedef interface IAGCEventType IAGCEventType;

#endif 	/* __IAGCEventType_FWD_DEFINED__ */


#ifndef __IAGCEvent_FWD_DEFINED__
#define __IAGCEvent_FWD_DEFINED__
typedef interface IAGCEvent IAGCEvent;

#endif 	/* __IAGCEvent_FWD_DEFINED__ */


#ifndef __IAGCEventCreate_FWD_DEFINED__
#define __IAGCEventCreate_FWD_DEFINED__
typedef interface IAGCEventCreate IAGCEventCreate;

#endif 	/* __IAGCEventCreate_FWD_DEFINED__ */


#ifndef __IAGCGameParameters_FWD_DEFINED__
#define __IAGCGameParameters_FWD_DEFINED__
typedef interface IAGCGameParameters IAGCGameParameters;

#endif 	/* __IAGCGameParameters_FWD_DEFINED__ */


#ifndef __IAGCCommand_FWD_DEFINED__
#define __IAGCCommand_FWD_DEFINED__
typedef interface IAGCCommand IAGCCommand;

#endif 	/* __IAGCCommand_FWD_DEFINED__ */


#ifndef __IAGCCommandPrivate_FWD_DEFINED__
#define __IAGCCommandPrivate_FWD_DEFINED__
typedef interface IAGCCommandPrivate IAGCCommandPrivate;

#endif 	/* __IAGCCommandPrivate_FWD_DEFINED__ */


#ifndef __IAGCVersionInfo_FWD_DEFINED__
#define __IAGCVersionInfo_FWD_DEFINED__
typedef interface IAGCVersionInfo IAGCVersionInfo;

#endif 	/* __IAGCVersionInfo_FWD_DEFINED__ */


#ifndef __IAGCDBParams_FWD_DEFINED__
#define __IAGCDBParams_FWD_DEFINED__
typedef interface IAGCDBParams IAGCDBParams;

#endif 	/* __IAGCDBParams_FWD_DEFINED__ */


#ifndef __IAGCEventLogger_FWD_DEFINED__
#define __IAGCEventLogger_FWD_DEFINED__
typedef interface IAGCEventLogger IAGCEventLogger;

#endif 	/* __IAGCEventLogger_FWD_DEFINED__ */


#ifndef __IAGCEventLoggerHook_FWD_DEFINED__
#define __IAGCEventLoggerHook_FWD_DEFINED__
typedef interface IAGCEventLoggerHook IAGCEventLoggerHook;

#endif 	/* __IAGCEventLoggerHook_FWD_DEFINED__ */


#ifndef __IAGCEventLoggerPrivate_FWD_DEFINED__
#define __IAGCEventLoggerPrivate_FWD_DEFINED__
typedef interface IAGCEventLoggerPrivate IAGCEventLoggerPrivate;

#endif 	/* __IAGCEventLoggerPrivate_FWD_DEFINED__ */


#ifndef __IAGCRangePrivate_FWD_DEFINED__
#define __IAGCRangePrivate_FWD_DEFINED__
typedef interface IAGCRangePrivate IAGCRangePrivate;

#endif 	/* __IAGCRangePrivate_FWD_DEFINED__ */


#ifndef __IAGCRangesPrivate_FWD_DEFINED__
#define __IAGCRangesPrivate_FWD_DEFINED__
typedef interface IAGCRangesPrivate IAGCRangesPrivate;

#endif 	/* __IAGCRangesPrivate_FWD_DEFINED__ */


#ifndef __IAGCEventIDRange_FWD_DEFINED__
#define __IAGCEventIDRange_FWD_DEFINED__
typedef interface IAGCEventIDRange IAGCEventIDRange;

#endif 	/* __IAGCEventIDRange_FWD_DEFINED__ */


#ifndef __IAGCEventIDRanges_FWD_DEFINED__
#define __IAGCEventIDRanges_FWD_DEFINED__
typedef interface IAGCEventIDRanges IAGCEventIDRanges;

#endif 	/* __IAGCEventIDRanges_FWD_DEFINED__ */


#ifndef __ITCCollection_FWD_DEFINED__
#define __ITCCollection_FWD_DEFINED__
typedef interface ITCCollection ITCCollection;

#endif 	/* __ITCCollection_FWD_DEFINED__ */


#ifndef __ITCStrings_FWD_DEFINED__
#define __ITCStrings_FWD_DEFINED__
typedef interface ITCStrings ITCStrings;

#endif 	/* __ITCStrings_FWD_DEFINED__ */


#ifndef __ITCPropBagOnRegKey_FWD_DEFINED__
#define __ITCPropBagOnRegKey_FWD_DEFINED__
typedef interface ITCPropBagOnRegKey ITCPropBagOnRegKey;

#endif 	/* __ITCPropBagOnRegKey_FWD_DEFINED__ */


#ifndef __ITCSessionInfo_FWD_DEFINED__
#define __ITCSessionInfo_FWD_DEFINED__
typedef interface ITCSessionInfo ITCSessionInfo;

#endif 	/* __ITCSessionInfo_FWD_DEFINED__ */


#ifndef __ITCSessionInfos_FWD_DEFINED__
#define __ITCSessionInfos_FWD_DEFINED__
typedef interface ITCSessionInfos ITCSessionInfos;

#endif 	/* __ITCSessionInfos_FWD_DEFINED__ */


#ifndef __ITCCollectionPersistHelper_FWD_DEFINED__
#define __ITCCollectionPersistHelper_FWD_DEFINED__
typedef interface ITCCollectionPersistHelper ITCCollectionPersistHelper;

#endif 	/* __ITCCollectionPersistHelper_FWD_DEFINED__ */


#ifndef __ITCUtility_FWD_DEFINED__
#define __ITCUtility_FWD_DEFINED__
typedef interface ITCUtility ITCUtility;

#endif 	/* __ITCUtility_FWD_DEFINED__ */


#ifndef __IAdminSessionHelper_FWD_DEFINED__
#define __IAdminSessionHelper_FWD_DEFINED__
typedef interface IAdminSessionHelper IAdminSessionHelper;

#endif 	/* __IAdminSessionHelper_FWD_DEFINED__ */


#ifndef __IAGCPrivate_FWD_DEFINED__
#define __IAGCPrivate_FWD_DEFINED__
typedef interface IAGCPrivate IAGCPrivate;

#endif 	/* __IAGCPrivate_FWD_DEFINED__ */


#ifndef __IAGCCommon_FWD_DEFINED__
#define __IAGCCommon_FWD_DEFINED__
typedef interface IAGCCommon IAGCCommon;

#endif 	/* __IAGCCommon_FWD_DEFINED__ */


#ifndef __IAGCCollection_FWD_DEFINED__
#define __IAGCCollection_FWD_DEFINED__
typedef interface IAGCCollection IAGCCollection;

#endif 	/* __IAGCCollection_FWD_DEFINED__ */


#ifndef __IAGCBase_FWD_DEFINED__
#define __IAGCBase_FWD_DEFINED__
typedef interface IAGCBase IAGCBase;

#endif 	/* __IAGCBase_FWD_DEFINED__ */


#ifndef __IAGCModel_FWD_DEFINED__
#define __IAGCModel_FWD_DEFINED__
typedef interface IAGCModel IAGCModel;

#endif 	/* __IAGCModel_FWD_DEFINED__ */


#ifndef __IAGCModels_FWD_DEFINED__
#define __IAGCModels_FWD_DEFINED__
typedef interface IAGCModels IAGCModels;

#endif 	/* __IAGCModels_FWD_DEFINED__ */


#ifndef __IAGCBuyable_FWD_DEFINED__
#define __IAGCBuyable_FWD_DEFINED__
typedef interface IAGCBuyable IAGCBuyable;

#endif 	/* __IAGCBuyable_FWD_DEFINED__ */


#ifndef __IAGCHullType_FWD_DEFINED__
#define __IAGCHullType_FWD_DEFINED__
typedef interface IAGCHullType IAGCHullType;

#endif 	/* __IAGCHullType_FWD_DEFINED__ */


#ifndef __IAGCTreasure_FWD_DEFINED__
#define __IAGCTreasure_FWD_DEFINED__
typedef interface IAGCTreasure IAGCTreasure;

#endif 	/* __IAGCTreasure_FWD_DEFINED__ */


#ifndef __IAGCTreasures_FWD_DEFINED__
#define __IAGCTreasures_FWD_DEFINED__
typedef interface IAGCTreasures IAGCTreasures;

#endif 	/* __IAGCTreasures_FWD_DEFINED__ */


#ifndef __IAGCDamage_FWD_DEFINED__
#define __IAGCDamage_FWD_DEFINED__
typedef interface IAGCDamage IAGCDamage;

#endif 	/* __IAGCDamage_FWD_DEFINED__ */


#ifndef __IAGCScanner_FWD_DEFINED__
#define __IAGCScanner_FWD_DEFINED__
typedef interface IAGCScanner IAGCScanner;

#endif 	/* __IAGCScanner_FWD_DEFINED__ */


#ifndef __IAGCProbe_FWD_DEFINED__
#define __IAGCProbe_FWD_DEFINED__
typedef interface IAGCProbe IAGCProbe;

#endif 	/* __IAGCProbe_FWD_DEFINED__ */


#ifndef __IAGCProbes_FWD_DEFINED__
#define __IAGCProbes_FWD_DEFINED__
typedef interface IAGCProbes IAGCProbes;

#endif 	/* __IAGCProbes_FWD_DEFINED__ */


#ifndef __IAGCGame_FWD_DEFINED__
#define __IAGCGame_FWD_DEFINED__
typedef interface IAGCGame IAGCGame;

#endif 	/* __IAGCGame_FWD_DEFINED__ */


#ifndef __IAGCShip_FWD_DEFINED__
#define __IAGCShip_FWD_DEFINED__
typedef interface IAGCShip IAGCShip;

#endif 	/* __IAGCShip_FWD_DEFINED__ */


#ifndef __IAGCShips_FWD_DEFINED__
#define __IAGCShips_FWD_DEFINED__
typedef interface IAGCShips IAGCShips;

#endif 	/* __IAGCShips_FWD_DEFINED__ */


#ifndef __IAGCStation_FWD_DEFINED__
#define __IAGCStation_FWD_DEFINED__
typedef interface IAGCStation IAGCStation;

#endif 	/* __IAGCStation_FWD_DEFINED__ */


#ifndef __IAGCStations_FWD_DEFINED__
#define __IAGCStations_FWD_DEFINED__
typedef interface IAGCStations IAGCStations;

#endif 	/* __IAGCStations_FWD_DEFINED__ */


#ifndef __IAGCAleph_FWD_DEFINED__
#define __IAGCAleph_FWD_DEFINED__
typedef interface IAGCAleph IAGCAleph;

#endif 	/* __IAGCAleph_FWD_DEFINED__ */


#ifndef __IAGCAlephs_FWD_DEFINED__
#define __IAGCAlephs_FWD_DEFINED__
typedef interface IAGCAlephs IAGCAlephs;

#endif 	/* __IAGCAlephs_FWD_DEFINED__ */


#ifndef __IAGCSector_FWD_DEFINED__
#define __IAGCSector_FWD_DEFINED__
typedef interface IAGCSector IAGCSector;

#endif 	/* __IAGCSector_FWD_DEFINED__ */


#ifndef __IAGCSectors_FWD_DEFINED__
#define __IAGCSectors_FWD_DEFINED__
typedef interface IAGCSectors IAGCSectors;

#endif 	/* __IAGCSectors_FWD_DEFINED__ */


#ifndef __IAGCTeam_FWD_DEFINED__
#define __IAGCTeam_FWD_DEFINED__
typedef interface IAGCTeam IAGCTeam;

#endif 	/* __IAGCTeam_FWD_DEFINED__ */


#ifndef __IAGCTeams_FWD_DEFINED__
#define __IAGCTeams_FWD_DEFINED__
typedef interface IAGCTeams IAGCTeams;

#endif 	/* __IAGCTeams_FWD_DEFINED__ */


#ifndef __IAGCAsteroid_FWD_DEFINED__
#define __IAGCAsteroid_FWD_DEFINED__
typedef interface IAGCAsteroid IAGCAsteroid;

#endif 	/* __IAGCAsteroid_FWD_DEFINED__ */


#ifndef __IAGCAsteroids_FWD_DEFINED__
#define __IAGCAsteroids_FWD_DEFINED__
typedef interface IAGCAsteroids IAGCAsteroids;

#endif 	/* __IAGCAsteroids_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_AGCIDL_0000_0000 */
/* [local] */ 




































































enum dispid_AGCIDL
    {
        dispid_AGCIDL_Begin	= 100,
        dispid_Description	= dispid_AGCIDL_Begin,
        dispid_ObjectType	= ( dispid_Description + 1 ) ,
        dispid_ObjectID	= ( dispid_ObjectType + 1 ) ,
        dispid_UniqueID	= 9999,
        dispid_GetMission	= ( dispid_ObjectID + 1 ) ,
        dispid_BaseUniqueID	= ( dispid_GetMission + 1 ) ,
        dispid_Price	= ( dispid_BaseUniqueID + 1 ) ,
        dispid_TimeToBuild	= ( dispid_Price + 1 ) ,
        dispid_Type	= ( dispid_TimeToBuild + 1 ) ,
        dispid_Amount	= ( dispid_Type + 1 ) ,
        dispid_Buyable	= ( dispid_Amount + 1 ) ,
        dispid_Orientation	= ( dispid_Buyable + 1 ) ,
        dispid_Rotation	= ( dispid_Orientation + 1 ) ,
        dispid_Radius	= ( dispid_Rotation + 1 ) ,
        dispid_Team	= ( dispid_Radius + 1 ) ,
        dispid_Mass	= ( dispid_Team + 1 ) ,
        dispid_Sector	= ( dispid_Mass + 1 ) ,
        dispid_Signature	= ( dispid_Sector + 1 ) ,
        dispid_ModelName	= ( dispid_Signature + 1 ) ,
        dispid_IsSelectable	= ( dispid_ModelName + 1 ) ,
        dispid_IsScanner	= ( dispid_IsSelectable + 1 ) ,
        dispid_IsPredictable	= ( dispid_IsScanner + 1 ) ,
        dispid_IsScanRequired	= ( dispid_IsPredictable + 1 ) ,
        dispid_IsStatic	= ( dispid_IsScanRequired + 1 ) ,
        dispid_IsDamagable	= ( dispid_IsStatic + 1 ) ,
        dispid_IsHitable	= ( dispid_IsDamagable + 1 ) ,
        dispid_IsVisible	= ( dispid_IsHitable + 1 ) ,
        dispid_IsSeenBySide	= ( dispid_IsVisible + 1 ) ,
        dispid_Position	= ( dispid_IsSeenBySide + 1 ) ,
        dispid_Velocity	= ( dispid_Position + 1 ) ,
        dispid_Fraction	= ( dispid_Velocity + 1 ) ,
        dispid_InScannerRange	= ( dispid_Fraction + 1 ) ,
        dispid_CanSee	= ( dispid_InScannerRange + 1 ) ,
        dispid_VectorX	= ( dispid_CanSee + 1 ) ,
        dispid_VectorY	= ( dispid_VectorX + 1 ) ,
        dispid_VectorZ	= ( dispid_VectorY + 1 ) ,
        dispid_VectorDisplayString	= ( dispid_VectorZ + 1 ) ,
        dispid_Target	= ( dispid_VectorDisplayString + 1 ) ,
        dispid_Verb	= ( dispid_Target + 1 ) ,
        dispid_Length	= ( dispid_Verb + 1 ) ,
        dispid_MaxSpeed	= ( dispid_Length + 1 ) ,
        dispid_MaxTurnRate	= ( dispid_MaxSpeed + 1 ) ,
        dispid_TurnTorque	= ( dispid_MaxTurnRate + 1 ) ,
        dispid_Thrust	= ( dispid_TurnTorque + 1 ) ,
        dispid_SideMultiplier	= ( dispid_Thrust + 1 ) ,
        dispid_BackMultiplier	= ( dispid_SideMultiplier + 1 ) ,
        dispid_ScannerRange	= ( dispid_BackMultiplier + 1 ) ,
        dispid_MaxEnergy	= ( dispid_ScannerRange + 1 ) ,
        dispid_RechargeRate	= ( dispid_MaxEnergy + 1 ) ,
        dispid_HitPoints	= ( dispid_RechargeRate + 1 ) ,
        dispid_PartMask	= ( dispid_HitPoints + 1 ) ,
        dispid_MaxWeapons	= ( dispid_PartMask + 1 ) ,
        dispid_MaxFixedWeapons	= ( dispid_MaxWeapons + 1 ) ,
        dispid_CanMount	= ( dispid_MaxFixedWeapons + 1 ) ,
        dispid_Capabilities	= ( dispid_CanMount + 1 ) ,
        dispid_HasCapability	= ( dispid_Capabilities + 1 ) ,
        dispid_MaxAmmo	= ( dispid_HasCapability + 1 ) ,
        dispid_MaxFuel	= ( dispid_MaxAmmo + 1 ) ,
        dispid_AutoDonate	= ( dispid_MaxFuel + 1 ) ,
        dispid_ShieldFraction	= ( dispid_AutoDonate + 1 ) ,
        dispid_UserName	= ( dispid_ShieldFraction + 1 ) ,
        dispid_ComputerName	= ( dispid_UserName + 1 ) ,
        dispid_ApplicationName	= ( dispid_ComputerName + 1 ) ,
        dispid_TimeCreated	= ( dispid_ApplicationName + 1 ) ,
        dispid_Duration	= ( dispid_TimeCreated + 1 ) ,
        dispid_Cookie	= ( dispid_Duration + 1 ) ,
        dispid_Collection1	= ( dispid_Cookie + 1 ) ,
        dispid_Collection2	= ( dispid_Collection1 + 1 ) ,
        dispid_Collection3	= ( dispid_Collection2 + 1 ) ,
        dispid_Collection4	= ( dispid_Collection3 + 1 ) ,
        dispid_Collection5	= ( dispid_Collection4 + 1 ) ,
        dispid_Collection6	= ( dispid_Collection5 + 1 ) ,
        dispid_Collection7	= ( dispid_Collection6 + 1 ) ,
        dispid_Collection8	= ( dispid_Collection7 + 1 ) ,
        dispid_Ammo	= ( dispid_Collection8 + 1 ) ,
        dispid_Fuel	= ( dispid_Ammo + 1 ) ,
        dispid_Energy	= ( dispid_Fuel + 1 ) ,
        dispid_WingID	= ( dispid_Energy + 1 ) ,
        dispid_HullType	= ( dispid_WingID + 1 ) ,
        dispid_BaseHullType	= ( dispid_HullType + 1 ) ,
        dispid_ProjectileType	= ( dispid_BaseHullType + 1 ) ,
        dispid_EmissionPoint	= ( dispid_ProjectileType + 1 ) ,
        dispid_Lifespan	= ( dispid_EmissionPoint + 1 ) ,
        dispid_DtBurst	= ( dispid_Lifespan + 1 ) ,
        dispid_Accuracy	= ( dispid_DtBurst + 1 ) ,
        dispid_IsRipcord	= ( dispid_Accuracy + 1 ) ,
        dispid_Stations	= ( dispid_IsRipcord + 1 ) ,
        dispid_Ships	= ( dispid_Stations + 1 ) ,
        dispid_Alephs	= ( dispid_Ships + 1 ) ,
        dispid_Asteroids	= ( dispid_Alephs + 1 ) ,
        dispid_ScreenX	= ( dispid_Asteroids + 1 ) ,
        dispid_ScreenY	= ( dispid_ScreenX + 1 ) ,
        dispid_Probes	= ( dispid_ScreenY + 1 ) ,
        dispid_Sectors	= ( dispid_Probes + 1 ) ,
        dispid_Teams	= ( dispid_Sectors + 1 ) ,
        dispid_LookupShip	= ( dispid_Teams + 1 ) ,
        dispid_GameParameters	= ( dispid_LookupShip + 1 ) ,
        dispid_GameID	= ( dispid_GameParameters + 1 ) ,
        dispid_LookupTeam	= ( dispid_GameID + 1 ) ,
        dispid_GameStage	= ( dispid_LookupTeam + 1 ) ,
        dispid_Civ	= ( dispid_GameStage + 1 ) ,
        dispid_Buoys	= ( dispid_Civ + 1 ) ,
        dispid_Models	= ( dispid_Buoys + 1 ) ,
        dispid_SelectableModels	= ( dispid_Models + 1 ) ,
        dispid_Treasures	= ( dispid_SelectableModels + 1 ) ,
        dispid_Mines	= ( dispid_Treasures + 1 ) ,
        dispid_Missiles	= ( dispid_Mines + 1 ) ,
        dispid_ReplayCount	= ( dispid_Missiles + 1 ) ,
        dispid_ContextName	= ( dispid_ReplayCount + 1 ) ,
        dispid_AGCIDL_End	= ( dispid_AGCIDL_Begin + 0x1000 ) 
    } ;
typedef /* [helpstring][uuid] */  DECLSPEC_UUID("15F770CE-1553-11d3-8B60-00C04F681633") long AGCUniqueID;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("3CF30DBA-F949-11d2-A50F-00C04F68DEB0") short AGCObjectID;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("2F1CF66E-2A97-11d3-8B66-00C04F681633") long AGCGameID;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("E4A8B1CA-F8FB-11d2-A50F-00C04F68DEB0") long AGCMoney;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("2F31471C-F8E4-11d2-A50F-00C04F68DEB0") short AGCHitPoints;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("3581C176-F8E4-11d2-A50F-00C04F68DEB0") unsigned char AGCPartMask;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("3581C177-F8E4-11d2-A50F-00C04F68DEB0") unsigned char AGCMount;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("267D0FE4-F8E6-11d2-A50F-00C04F68DEB0") short AGCHullAbilityBitMask;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("BA3A5628-38B6-11d3-A51D-00C04F68DEB0") short AGCAsteroidAbilityBitMask;

typedef /* [helpstring][uuid] */  DECLSPEC_UUID("CF19DD9A-33D9-11d3-A51C-00C04F68DEB0") short AGCSoundID;

typedef /* [helpstring][uuid][v1_enum] */  DECLSPEC_UUID("7E81D620-F94A-11d2-A50F-00C04F68DEB0") 
enum AGCObjectType
    {
        AGCObjectType_Invalid	= -1,
        AGC_ModelBegin	= 0,
        AGC_Ship	= 0,
        AGC_Station	= 1,
        AGC_Missile	= 2,
        AGC_Mine	= 3,
        AGC_Probe	= 4,
        AGC_Asteroid	= 5,
        AGC_Projectile	= 6,
        AGC_Warp	= 7,
        AGC_Treasure	= 8,
        AGC_Buoy	= 9,
        AGC_Chaff	= 10,
        AGC_BuildingEffect	= 11,
        AGC_ModelEnd	= 11,
        AGC_Side	= 12,
        AGC_Cluster	= 13,
        AGC_Bucket	= 14,
        AGC_PartBegin	= 15,
        AGC_Weapon	= 15,
        AGC_Shield	= 16,
        AGC_Cloak	= 17,
        AGC_Pack	= 18,
        AGC_Afterburner	= 19,
        AGC_LauncherBegin	= 20,
        AGC_Magazine	= 20,
        AGC_Dispenser	= 21,
        AGC_LauncherEnd	= 21,
        AGC_PartEnd	= 21,
        AGC_StaticBegin	= 22,
        AGC_ProjectileType	= 22,
        AGC_MissileType	= 23,
        AGC_MineType	= 24,
        AGC_ProbeType	= 25,
        AGC_ChaffType	= 36,
        AGC_Civilization	= 27,
        AGC_TreasureSet	= 28,
        AGC_BucketStart	= 29,
        AGC_HullType	= 29,
        AGC_PartType	= 30,
        AGC_StationType	= 31,
        AGC_Development	= 32,
        AGC_DroneType	= 33,
        AGC_BucketEnd	= 33,
        AGC_StaticEnd	= 33,
        AGC_Constants	= 34,
        AGC_AdminUser	= 35,
        AGCObjectType_Max	= 36,
        AGC_Any_Objects	= 36
    } 	AGCObjectType;

typedef /* [helpstring][uuid][v1_enum] */  DECLSPEC_UUID("5C756B32-F8E6-11d2-A50F-00C04F68DEB0") 
enum AGCHullAbility
    {
        AGCHullAbility_Board	= 0x1,
        AGCHullAbility_Rescue	= 0x2,
        AGCHullAbility_Lifepod	= 0x4,
        AGCHullAbility_NoPickup	= 0x8,
        AGCHullAbility_NoEjection	= 0x10,
        AGCHullAbility_NoRipcord	= 0x20,
        AGCHullAbility_CheatToDock	= 0x40,
        AGCHullAbility_Fighter	= 0x80,
        AGCHullAbility_Captital	= 0x100
    } 	AGCHullAbility;

typedef /* [helpstring][uuid][v1_enum] */  DECLSPEC_UUID("349CEC0A-38B7-11d3-A51D-00C04F68DEB0") 
enum AGCAsteroidAbility
    {
        AGCAsteroidAbility_MineHe3	= 0x1,
        AGCAsteroidAbility_MineIce	= 0x2,
        AGCAsteroidAbility_MineGold	= 0x4,
        AGCAsteroidAbility_Buildable	= 0x8,
        AGCAsteroidAbility_Special	= 0x10
    } 	AGCAsteroidAbility;

typedef /* [helpstring][uuid][v1_enum] */  DECLSPEC_UUID("30B2A0F4-F8E7-11d2-A50F-00C04F68DEB0") 
enum AGCAxis
    {
        AGCAxis_Yaw	= 0,
        AGCAxis_Pitch	= 1,
        AGCAxis_Roll	= 2,
        AGCAxis_Throttle	= 3,
        AGCAxis_Max	= 4
    } 	AGCAxis;

typedef /* [helpstring][uuid][v1_enum] */  DECLSPEC_UUID("DFB0FB10-F8E6-11d2-A50F-00C04F68DEB0") 
enum AGCEquipmentType
    {
        AGCEquipmentType_ChaffLauncher	= 0,
        AGCEquipmentType_Weapon	= 1,
        AGCEquipmentType_Magazine	= 2,
        AGCEquipmentType_Dispenser	= 3,
        AGCEquipmentType_Shield	= 4,
        AGCEquipmentType_Cloak	= 5,
        AGCEquipmentType_Pack	= 6,
        AGCEquipmentType_Afterburner	= 7,
        AGCEquipmentType_MAX	= 8
    } 	AGCEquipmentType;

typedef /* [helpstring][uuid][v1_enum] */  DECLSPEC_UUID("33505004-0E49-11d3-8B59-00C04F681633") 
enum AGCTreasureType
    {
        AGCTreasureType_Part	= 0,
        AGCTreasureType_Development	= 1
    } 	AGCTreasureType;

typedef /* [helpstring][uuid][v1_enum] */  DECLSPEC_UUID("3AF8F031-08B2-44af-B12E-F7DBA94B800D") 
enum AGCChatTarget
    {
        AGCChat_Everyone	= 0,
        AGCChat_Leaders	= ( AGCChat_Everyone + 1 ) ,
        AGCChat_Admin	= ( AGCChat_Leaders + 1 ) ,
        AGCChat_Ship	= ( AGCChat_Admin + 1 ) ,
        AGCChat_Team	= ( AGCChat_Ship + 1 ) ,
        AGCChat_Individual	= ( AGCChat_Team + 1 ) ,
        AGCChat_Individual_NoFilter	= ( AGCChat_Individual + 1 ) ,
        AGCChat_Wing	= ( AGCChat_Individual_NoFilter + 1 ) ,
        AGCChat_Echo	= ( AGCChat_Wing + 1 ) ,
        AGCChat_AllSector	= ( AGCChat_Echo + 1 ) ,
        AGCChat_FriendlySector	= ( AGCChat_AllSector + 1 ) ,
        AGCChat_Group	= ( AGCChat_FriendlySector + 1 ) ,
        AGCChat_GroupNoEcho	= ( AGCChat_Group + 1 ) ,
        AGCChat_NoSelection	= ( AGCChat_GroupNoEcho + 1 ) ,
        AGCChat_Max	= ( AGCChat_NoSelection + 1 ) 
    } 	AGCChatTarget;

typedef /* [helpstring][uuid][v1_enum] */  DECLSPEC_UUID("98C30026-8936-492d-9CAD-BEC2D046B9ED") 
enum AGCGameStage
    {
        AGCGameStage_NotStarted	= 0,
        AGCGameStage_Starting	= 1,
        AGCGameStage_Started	= 2,
        AGCGameStage_Over	= 3,
        AGCGameStage_Terminate	= 4
    } 	AGCGameStage;

typedef /* [helpstring][uuid][v1_enum] */  DECLSPEC_UUID("2942EC80-D0DC-11d2-9646-00C04F68DEB0") 
enum FileAttributes
    {
        FileAttribute_None	= 0,
        FileAttribute_ReadOnly	= 0x1,
        FileAttribute_Hidden	= 0x2,
        FileAttribute_System	= 0x4,
        FileAttribute_Directory	= 0x10,
        FileAttribute_Archive	= 0x20,
        FileAttribute_Encrypted	= 0x40,
        FileAttribute_Normal	= 0x80,
        FileAttribute_Temporary	= 0x100,
        FileAttribute_SparseFile	= 0x200,
        FileAttribute_ReparsePoint	= 0x400,
        FileAttribute_Compressed	= 0x800,
        FileAttribute_Offline	= 0x1000,
        FileAttribute_NotContentIndexed	= 0x2000
    } 	FileAttributes;

typedef /* [helpstring][uuid][v1_enum] */  DECLSPEC_UUID("014CE25C-1482-11d3-8B5F-00C04F681633") 
enum AGCEventID
    {
        EventID_Unknown	= 0,
        EventID_AGC_LowerBound	= 1,
        EventID_EventLogging_LowerBound	= 100,
        EventID_DBEventLogStarted	= 101,
        EventID_DBEventLogStopped	= 102,
        EventID_NTEventLogStarted	= 103,
        EventID_NTEventLogStopped	= 104,
        EventID_AGCNotInitialized	= 105,
        EventID_AGCAssert	= 106,
        EventID_EventLogging_UpperBound	= 199,
        EventID_Station_LowerBound	= 200,
        EventID_StationCreated	= 201,
        EventID_StationDeleted	= 202,
        EventID_StationChangesSides	= 203,
        EventID_Station_UpperBound	= 299,
        EventID_Ship_LowerBound	= 300,
        EventID_ShipChangesSectors	= 301,
        EventID_ShipKilled	= 302,
        EventID_ShipUsesRipcord	= 303,
        EventID_Ship_UpperBound	= 399,
        EventID_AGC_UpperBound	= 1999,
        AllsrvEventID_Allsrv_LowerBound	= 2000,
        AllsrvEventID_Initialize	= 2001,
        AllsrvEventID_Terminate	= 2002,
        AllsrvEventID_BadFtpPath	= 2003,
        AllsrvEventID_PlayerDropped	= 2004,
        AllsrvEventID_SessionLost	= 2005,
        AllsrvEventID_MsgFromUnknownPlayer	= 2006,
        AllsrvEventID_IncreaseTokensMax	= 2007,
        AllsrvEventID_InvalidZoneTicket	= 2008,
        AllsrvEventID_DecryptTicketFailed	= 2009,
        AllsrvEventID_NoTicket	= 2010,
        AllsrvEventID_LoginFailed	= 2011,
        AllsrvEventID_CreateCharFailed	= 2012,
        AllsrvEventID_BadClientVersion	= 2013,
        AllsrvEventID_MessageBox	= 2014,
        AllsrvEventID_MoneyError	= 2015,
        AllsrvEventID_Connecting	= 2016,
        AllsrvEventID_ConnectError	= 2017,
        AllsrvEventID_NoLobby	= 2018,
        AllsrvEventID_HostSession	= 2019,
        AllsrvEventID_CantHostSession	= 2020,
        AllsrvEventID_CantWatchArt	= 2021,
        AllsrvEventID_StartingService	= 2022,
        AllsrvEventID_ZoneAuthServer	= 2023,
        AllsrvEventID_Assert	= 2024,
        AllsrvEventID_ArtChangedInInit	= 2025,
        AllsrvEventID_SystemError	= 2027,
        AllsrvEventID_LostLobby	= 2028,
        AllsrvEventID_GameStarted	= 2029,
        AllsrvEventID_GameEnded	= 2030,
        AllsrvEventID_GameOver	= 2031,
        AllsrvEventID_LatencyExceeded	= 2032,
        AllsrvEventID_ConnectedLobby	= 2033,
        AllsrvEventID_DisconnectingLobby	= 2034,
        AllsrvEventID_DisconnectedLobby	= 2035,
        AllsrvEventID_DatabaseErrorSQL	= 2036,
        AllsrvEventID_Pause	= 2037,
        AllsrvEventID_Continue	= 2038,
        AllsrvEventID_DatabaseErrorOLEDB	= 2039,
        AllsrvEventID_Allsrv_UpperBound	= 3999,
        EventID_Admin_LowerBound	= 4000,
        EventID_ServerShutdown	= 4001,
        EventID_NewSession	= 4010,
        EventID_LoginServer	= 4020,
        EventID_LogoutServer	= 4021,
        EventID_ChatMessage	= 4030,
        EventID_AdminPage	= 4031,
        EventID_AdminChat	= 4032,
        EventID_GameCreated	= 4040,
        EventID_GameDestroyed	= 4041,
        EventID_GameStateChange	= 4042,
        EventID_LoginGame	= 4050,
        EventID_LogoutGame	= 4051,
        EventID_JoinTeam	= 4060,
        EventID_LeaveTeam	= 4061,
        EventID_TeamInfoChange	= 4062,
        EventID_HackLog	= 4070,
        EventID_HackBoot	= 4071,
        EventID_HackBootNoPlayer	= 4072,
        EventID_Admin_UpperBound	= 5999,
        PigEventID_Pigs_LowerBound	= 6000,
        PigEventID_PigObject_LowerBound	= 6020,
        PigEventID_ConnectFailed	= 6021,
        PigEventID_LogonDenied	= 6022,
        PigEventID_ZoneAuthFailed	= 6023,
        PigEventID_Performance_LowerBound	= 6060,
        PigEventID_ShipAngleThreshold	= 6061,
        PigEventID_ShipDistanceThreshold	= 6062,
        PigEventID_ShipsUpdateLatencyThreshold	= 6063,
        PigEventID_Performance_UpperBound	= 6079,
        PigEventID_AutoUpdate_LowerBound	= 6080,
        PigEventID_AutoUpdateSucceeded	= 6081,
        PigEventID_AutoUpdateRestart	= 6082,
        PigEventID_AutoUpdateError	= 6083,
        PigEventID_AutoUpdate_UpperBound	= 6099,
        PigEventID_StateChange_LowerBound	= 6100,
        PigEventID_StateChange_NonExistant	= 6101,
        PigEventID_StateChange_LoggingOn	= 6102,
        PigEventID_StateChange_LoggingOff	= 6103,
        PigEventID_StateChange_MissionList	= 6104,
        PigEventID_StateChange_CreatingMission	= 6105,
        PigEventID_StateChange_JoiningMission	= 6106,
        PigEventID_StateChange_QuittingMission	= 6107,
        PigEventID_StateChange_TeamList	= 6108,
        PigEventID_StateChange_JoiningTeam	= 6109,
        PigEventID_StateChange_WaitingForMission	= 6110,
        PigEventID_StateChange_Docked	= 6111,
        PigEventID_StateChange_Launching	= 6112,
        PigEventID_StateChange_Flying	= 6113,
        PigEventID_StateChange_Terminated	= 6114,
        PigEventID_StateChange_UpperBound	= 6129,
        PigEventID_PigObject_UpperBound	= 6199,
        PigEventID_PigScript_LowerBound	= 6200,
        PigEventID_ScriptError	= 6201,
        PigEventID_Trace	= 6202,
        PigEventID_ScriptsLoaded	= 6203,
        PigEventID_ScriptBaseRecursive	= 6204,
        PigEventID_ScriptBaseError	= 6205,
        PigEventID_ScriptBaseNonExistant	= 6206,
        PigEventID_PigScript_UpperBound	= 6399,
        PigEventID_Pigs_UpperBound	= 7999
    } 	AGCEventID;



extern RPC_IF_HANDLE __MIDL_itf_AGCIDL_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AGCIDL_0000_0000_v0_0_s_ifspec;

#ifndef __IAGCEventSink_INTERFACE_DEFINED__
#define __IAGCEventSink_INTERFACE_DEFINED__

/* interface IAGCEventSink */
/* [helpstring][uuid][oleautomation][nonextensible][unique][restricted][hidden][object] */ 


EXTERN_C const IID IID_IAGCEventSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4CFC5FEC-243A-11d3-AF03-0000F810C3F4")
    IAGCEventSink : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnEventTriggered( 
            /* [in] */ IAGCEvent *pEvent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCEventSinkVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCEventSink * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCEventSink * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCEventSink * This);
        
        DECLSPEC_XFGVIRT(IAGCEventSink, OnEventTriggered)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnEventTriggered )( 
            IAGCEventSink * This,
            /* [in] */ IAGCEvent *pEvent);
        
        END_INTERFACE
    } IAGCEventSinkVtbl;

    interface IAGCEventSink
    {
        CONST_VTBL struct IAGCEventSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCEventSink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCEventSink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCEventSink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCEventSink_OnEventTriggered(This,pEvent)	\
    ( (This)->lpVtbl -> OnEventTriggered(This,pEvent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCEventSink_INTERFACE_DEFINED__ */


#ifndef __IAGCEventSinkSynchronous_INTERFACE_DEFINED__
#define __IAGCEventSinkSynchronous_INTERFACE_DEFINED__

/* interface IAGCEventSinkSynchronous */
/* [helpstring][uuid][oleautomation][nonextensible][unique][restricted][hidden][object] */ 


EXTERN_C const IID IID_IAGCEventSinkSynchronous;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4852B61D-0D40-428b-A6C2-9276700F0FCD")
    IAGCEventSinkSynchronous : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnEventTriggeredSynchronous( 
            /* [in] */ IAGCEvent *pEvent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCEventSinkSynchronousVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCEventSinkSynchronous * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCEventSinkSynchronous * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCEventSinkSynchronous * This);
        
        DECLSPEC_XFGVIRT(IAGCEventSinkSynchronous, OnEventTriggeredSynchronous)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnEventTriggeredSynchronous )( 
            IAGCEventSinkSynchronous * This,
            /* [in] */ IAGCEvent *pEvent);
        
        END_INTERFACE
    } IAGCEventSinkSynchronousVtbl;

    interface IAGCEventSinkSynchronous
    {
        CONST_VTBL struct IAGCEventSinkSynchronousVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCEventSinkSynchronous_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCEventSinkSynchronous_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCEventSinkSynchronous_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCEventSinkSynchronous_OnEventTriggeredSynchronous(This,pEvent)	\
    ( (This)->lpVtbl -> OnEventTriggeredSynchronous(This,pEvent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCEventSinkSynchronous_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_AGCIDL_0000_0002 */
/* [local] */ 

typedef HRESULT ( __stdcall *PFNAGCCreator )( 
    void *__MIDL____MIDL_itf_AGCIDL_0000_00020000,
    REFIID __MIDL____MIDL_itf_AGCIDL_0000_00020001,
    void **__MIDL____MIDL_itf_AGCIDL_0000_00020002);

typedef void *HAGCLISTENERS;



extern RPC_IF_HANDLE __MIDL_itf_AGCIDL_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AGCIDL_0000_0002_v0_0_s_ifspec;

#ifndef __IAGCDebugHook_INTERFACE_DEFINED__
#define __IAGCDebugHook_INTERFACE_DEFINED__

/* interface IAGCDebugHook */
/* [helpstring][uuid][nonextensible][unique][restricted][hidden][local][object] */ 


EXTERN_C const IID IID_IAGCDebugHook;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9A153413-CC15-4ea1-A9BB-E0854726CAED")
    IAGCDebugHook : public IUnknown
    {
    public:
        virtual /* [helpstring] */ void STDMETHODCALLTYPE DebugOutput( 
            /* [in] */ LPCSTR psz) = 0;
        
        virtual /* [helpstring] */ boolean STDMETHODCALLTYPE OnAssert( 
            /* [in] */ LPCSTR psz,
            /* [in] */ LPCSTR pszFile,
            /* [in] */ int line,
            /* [in] */ LPCSTR pszModule) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE OnAssertBreak( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCDebugHookVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCDebugHook * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCDebugHook * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCDebugHook * This);
        
        DECLSPEC_XFGVIRT(IAGCDebugHook, DebugOutput)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *DebugOutput )( 
            IAGCDebugHook * This,
            /* [in] */ LPCSTR psz);
        
        DECLSPEC_XFGVIRT(IAGCDebugHook, OnAssert)
        /* [helpstring] */ boolean ( STDMETHODCALLTYPE *OnAssert )( 
            IAGCDebugHook * This,
            /* [in] */ LPCSTR psz,
            /* [in] */ LPCSTR pszFile,
            /* [in] */ int line,
            /* [in] */ LPCSTR pszModule);
        
        DECLSPEC_XFGVIRT(IAGCDebugHook, OnAssertBreak)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *OnAssertBreak )( 
            IAGCDebugHook * This);
        
        END_INTERFACE
    } IAGCDebugHookVtbl;

    interface IAGCDebugHook
    {
        CONST_VTBL struct IAGCDebugHookVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCDebugHook_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCDebugHook_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCDebugHook_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCDebugHook_DebugOutput(This,psz)	\
    ( (This)->lpVtbl -> DebugOutput(This,psz) ) 

#define IAGCDebugHook_OnAssert(This,psz,pszFile,line,pszModule)	\
    ( (This)->lpVtbl -> OnAssert(This,psz,pszFile,line,pszModule) ) 

#define IAGCDebugHook_OnAssertBreak(This)	\
    ( (This)->lpVtbl -> OnAssertBreak(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCDebugHook_INTERFACE_DEFINED__ */


#ifndef __IAGCGlobal_INTERFACE_DEFINED__
#define __IAGCGlobal_INTERFACE_DEFINED__

/* interface IAGCGlobal */
/* [object][helpstring][uuid][nonextensible][unique][restricted][hidden][local] */ 


EXTERN_C const IID IID_IAGCGlobal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F4385BC0-1FCC-11d3-AF03-0000F810C3F4")
    IAGCGlobal : public IUnknown
    {
    public:
        virtual /* [helpstring] */ void STDMETHODCALLTYPE RegisterObjectCreator( 
            /* [in] */ REFIID riid,
            /* [in] */ PFNAGCCreator pfnCreator) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE RevokeObjectCreator( 
            /* [in] */ REFIID riid) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAGCObject( 
            /* [in] */ const void *pvIgc,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppUnk) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE AddAGCObject( 
            /* [in] */ const void *pvIgc,
            /* [in] */ IUnknown *pUnkAGC) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE RemoveAGCObject( 
            /* [in] */ const void *pvIgc,
            /* [in] */ boolean bForceDestruct) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetEventSinksAreGITCookies( 
            /* [in] */ boolean bEventSinksAreGITCookies) = 0;
        
        virtual /* [helpstring] */ boolean STDMETHODCALLTYPE GetEventSinksAreGITCookies( void) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE RegisterEvent( 
            /* [in] */ AGCEventID eventID,
            /* [in] */ AGCUniqueID uniqueID,
            /* [in] */ IAGCEventSink *pEventSink) = 0;
        
        virtual /* [helpstring] */ boolean STDMETHODCALLTYPE RevokeEvent( 
            /* [in] */ AGCEventID eventID,
            /* [in] */ AGCUniqueID uniqueID,
            /* [in] */ IAGCEventSink *pEventSink) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE RegisterEventRanges( 
            /* [in] */ IAGCEventIDRanges *pRanges,
            /* [in] */ AGCUniqueID uniqueID,
            /* [in] */ IAGCEventSink *pEventSink) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE RevokeEventRanges( 
            /* [in] */ IAGCEventIDRanges *pRanges,
            /* [in] */ AGCUniqueID uniqueID,
            /* [in] */ IAGCEventSink *pEventSink) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE RevokeAllEvents( 
            /* [in] */ IAGCEventSink *pEventSink) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE RegisterAllEvents( 
            /* [in] */ IAGCEventSink *pEventSink) = 0;
        
        virtual /* [helpstring] */ HAGCLISTENERS STDMETHODCALLTYPE EventListeners( 
            /* [in] */ AGCEventID idEvent,
            /* [in] */ AGCUniqueID idSubject,
            /* [in] */ AGCUniqueID idObject1,
            /* [in] */ AGCUniqueID idObject2) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE TriggerEvent( 
            /* [in] */ HAGCLISTENERS hListeners,
            /* [in] */ AGCEventID idEvent,
            /* [in] */ LPCSTR pszContext,
            /* [in] */ LPCOLESTR pszSubject,
            /* [in] */ AGCUniqueID idSubject,
            /* [in] */ AGCUniqueID idObject1,
            /* [in] */ AGCUniqueID idObject2,
            /* [in] */ long cArgTriplets,
            /* [in] */ void *pvArgs) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE TriggerEventSynchronous( 
            /* [in] */ HAGCLISTENERS hListeners,
            /* [in] */ AGCEventID idEvent,
            /* [in] */ LPCSTR pszContext,
            /* [in] */ LPCOLESTR pszSubject,
            /* [in] */ AGCUniqueID idSubject,
            /* [in] */ AGCUniqueID idObject1,
            /* [in] */ AGCUniqueID idObject2,
            /* [in] */ long cArgTriplets,
            /* [in] */ void *pvArgs) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE FreeListeners( 
            /* [in] */ HAGCLISTENERS hListeners) = 0;
        
        virtual /* [helpstring] */ boolean STDMETHODCALLTYPE IsRegistered( 
            /* [in] */ AGCEventID eventID,
            /* [in] */ AGCUniqueID uniqueID,
            /* [in] */ IAGCEventSink *pEventSink) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MakeAGCEvent( 
            /* [in] */ AGCEventID idEvent,
            /* [in] */ LPCSTR pszContext,
            /* [in] */ LPCOLESTR pszSubject,
            /* [in] */ AGCUniqueID idSubject,
            /* [in] */ long cArgTriplets,
            /* [in] */ void *pvArgs,
            /* [retval][out] */ IAGCEvent **ppEvent) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetAvailableEventIDRanges( 
            /* [in] */ IAGCEventIDRanges *pRanges) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE GetAvailableEventIDRanges( 
            /* [retval][out] */ IAGCEventIDRanges **ppRanges) = 0;
        
        virtual /* [helpstring] */ WORD STDMETHODCALLTYPE GetEventSeverity( 
            /* [in] */ AGCEventID idEvent) = 0;
        
        virtual /* [helpstring] */ HINSTANCE STDMETHODCALLTYPE GetResourceInstance( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MakeAGCVector( 
            /* [in] */ const void *pVectorRaw,
            /* [retval][out] */ IAGCVector **ppVector) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MakeAGCOrientation( 
            /* [in] */ const void *pOrientationRaw,
            /* [retval][out] */ IAGCOrientation **ppOrientation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MakeAGCEventIDRange( 
            /* [in] */ AGCEventID lower,
            /* [in] */ AGCEventID upper,
            /* [retval][out] */ IAGCEventIDRange **ppRange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterInterfaceInGlobal( 
            /* [in] */ IUnknown *pUnk,
            /* [in] */ REFIID riid,
            /* [out] */ DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RevokeInterfaceFromGlobal( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInterfaceFromGlobal( 
            /* [in] */ DWORD dwCookie,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppv) = 0;
        
        virtual void STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual void STDMETHODCALLTYPE Terminate( void) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetDebugHook( 
            /* [in] */ IAGCDebugHook *pdh) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCGlobalVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCGlobal * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCGlobal * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCGlobal * This);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, RegisterObjectCreator)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *RegisterObjectCreator )( 
            IAGCGlobal * This,
            /* [in] */ REFIID riid,
            /* [in] */ PFNAGCCreator pfnCreator);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, RevokeObjectCreator)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *RevokeObjectCreator )( 
            IAGCGlobal * This,
            /* [in] */ REFIID riid);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, GetAGCObject)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAGCObject )( 
            IAGCGlobal * This,
            /* [in] */ const void *pvIgc,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppUnk);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, AddAGCObject)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *AddAGCObject )( 
            IAGCGlobal * This,
            /* [in] */ const void *pvIgc,
            /* [in] */ IUnknown *pUnkAGC);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, RemoveAGCObject)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *RemoveAGCObject )( 
            IAGCGlobal * This,
            /* [in] */ const void *pvIgc,
            /* [in] */ boolean bForceDestruct);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, SetEventSinksAreGITCookies)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetEventSinksAreGITCookies )( 
            IAGCGlobal * This,
            /* [in] */ boolean bEventSinksAreGITCookies);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, GetEventSinksAreGITCookies)
        /* [helpstring] */ boolean ( STDMETHODCALLTYPE *GetEventSinksAreGITCookies )( 
            IAGCGlobal * This);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, RegisterEvent)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *RegisterEvent )( 
            IAGCGlobal * This,
            /* [in] */ AGCEventID eventID,
            /* [in] */ AGCUniqueID uniqueID,
            /* [in] */ IAGCEventSink *pEventSink);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, RevokeEvent)
        /* [helpstring] */ boolean ( STDMETHODCALLTYPE *RevokeEvent )( 
            IAGCGlobal * This,
            /* [in] */ AGCEventID eventID,
            /* [in] */ AGCUniqueID uniqueID,
            /* [in] */ IAGCEventSink *pEventSink);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, RegisterEventRanges)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *RegisterEventRanges )( 
            IAGCGlobal * This,
            /* [in] */ IAGCEventIDRanges *pRanges,
            /* [in] */ AGCUniqueID uniqueID,
            /* [in] */ IAGCEventSink *pEventSink);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, RevokeEventRanges)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *RevokeEventRanges )( 
            IAGCGlobal * This,
            /* [in] */ IAGCEventIDRanges *pRanges,
            /* [in] */ AGCUniqueID uniqueID,
            /* [in] */ IAGCEventSink *pEventSink);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, RevokeAllEvents)
        /* [helpstring] */ int ( STDMETHODCALLTYPE *RevokeAllEvents )( 
            IAGCGlobal * This,
            /* [in] */ IAGCEventSink *pEventSink);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, RegisterAllEvents)
        /* [helpstring] */ int ( STDMETHODCALLTYPE *RegisterAllEvents )( 
            IAGCGlobal * This,
            /* [in] */ IAGCEventSink *pEventSink);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, EventListeners)
        /* [helpstring] */ HAGCLISTENERS ( STDMETHODCALLTYPE *EventListeners )( 
            IAGCGlobal * This,
            /* [in] */ AGCEventID idEvent,
            /* [in] */ AGCUniqueID idSubject,
            /* [in] */ AGCUniqueID idObject1,
            /* [in] */ AGCUniqueID idObject2);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, TriggerEvent)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *TriggerEvent )( 
            IAGCGlobal * This,
            /* [in] */ HAGCLISTENERS hListeners,
            /* [in] */ AGCEventID idEvent,
            /* [in] */ LPCSTR pszContext,
            /* [in] */ LPCOLESTR pszSubject,
            /* [in] */ AGCUniqueID idSubject,
            /* [in] */ AGCUniqueID idObject1,
            /* [in] */ AGCUniqueID idObject2,
            /* [in] */ long cArgTriplets,
            /* [in] */ void *pvArgs);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, TriggerEventSynchronous)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *TriggerEventSynchronous )( 
            IAGCGlobal * This,
            /* [in] */ HAGCLISTENERS hListeners,
            /* [in] */ AGCEventID idEvent,
            /* [in] */ LPCSTR pszContext,
            /* [in] */ LPCOLESTR pszSubject,
            /* [in] */ AGCUniqueID idSubject,
            /* [in] */ AGCUniqueID idObject1,
            /* [in] */ AGCUniqueID idObject2,
            /* [in] */ long cArgTriplets,
            /* [in] */ void *pvArgs);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, FreeListeners)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *FreeListeners )( 
            IAGCGlobal * This,
            /* [in] */ HAGCLISTENERS hListeners);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, IsRegistered)
        /* [helpstring] */ boolean ( STDMETHODCALLTYPE *IsRegistered )( 
            IAGCGlobal * This,
            /* [in] */ AGCEventID eventID,
            /* [in] */ AGCUniqueID uniqueID,
            /* [in] */ IAGCEventSink *pEventSink);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, MakeAGCEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MakeAGCEvent )( 
            IAGCGlobal * This,
            /* [in] */ AGCEventID idEvent,
            /* [in] */ LPCSTR pszContext,
            /* [in] */ LPCOLESTR pszSubject,
            /* [in] */ AGCUniqueID idSubject,
            /* [in] */ long cArgTriplets,
            /* [in] */ void *pvArgs,
            /* [retval][out] */ IAGCEvent **ppEvent);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, SetAvailableEventIDRanges)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetAvailableEventIDRanges )( 
            IAGCGlobal * This,
            /* [in] */ IAGCEventIDRanges *pRanges);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, GetAvailableEventIDRanges)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *GetAvailableEventIDRanges )( 
            IAGCGlobal * This,
            /* [retval][out] */ IAGCEventIDRanges **ppRanges);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, GetEventSeverity)
        /* [helpstring] */ WORD ( STDMETHODCALLTYPE *GetEventSeverity )( 
            IAGCGlobal * This,
            /* [in] */ AGCEventID idEvent);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, GetResourceInstance)
        /* [helpstring] */ HINSTANCE ( STDMETHODCALLTYPE *GetResourceInstance )( 
            IAGCGlobal * This);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, MakeAGCVector)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MakeAGCVector )( 
            IAGCGlobal * This,
            /* [in] */ const void *pVectorRaw,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, MakeAGCOrientation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MakeAGCOrientation )( 
            IAGCGlobal * This,
            /* [in] */ const void *pOrientationRaw,
            /* [retval][out] */ IAGCOrientation **ppOrientation);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, MakeAGCEventIDRange)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MakeAGCEventIDRange )( 
            IAGCGlobal * This,
            /* [in] */ AGCEventID lower,
            /* [in] */ AGCEventID upper,
            /* [retval][out] */ IAGCEventIDRange **ppRange);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, RegisterInterfaceInGlobal)
        HRESULT ( STDMETHODCALLTYPE *RegisterInterfaceInGlobal )( 
            IAGCGlobal * This,
            /* [in] */ IUnknown *pUnk,
            /* [in] */ REFIID riid,
            /* [out] */ DWORD *pdwCookie);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, RevokeInterfaceFromGlobal)
        HRESULT ( STDMETHODCALLTYPE *RevokeInterfaceFromGlobal )( 
            IAGCGlobal * This,
            /* [in] */ DWORD dwCookie);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, GetInterfaceFromGlobal)
        HRESULT ( STDMETHODCALLTYPE *GetInterfaceFromGlobal )( 
            IAGCGlobal * This,
            /* [in] */ DWORD dwCookie,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppv);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, Initialize)
        void ( STDMETHODCALLTYPE *Initialize )( 
            IAGCGlobal * This);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, Terminate)
        void ( STDMETHODCALLTYPE *Terminate )( 
            IAGCGlobal * This);
        
        DECLSPEC_XFGVIRT(IAGCGlobal, SetDebugHook)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetDebugHook )( 
            IAGCGlobal * This,
            /* [in] */ IAGCDebugHook *pdh);
        
        END_INTERFACE
    } IAGCGlobalVtbl;

    interface IAGCGlobal
    {
        CONST_VTBL struct IAGCGlobalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCGlobal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCGlobal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCGlobal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCGlobal_RegisterObjectCreator(This,riid,pfnCreator)	\
    ( (This)->lpVtbl -> RegisterObjectCreator(This,riid,pfnCreator) ) 

#define IAGCGlobal_RevokeObjectCreator(This,riid)	\
    ( (This)->lpVtbl -> RevokeObjectCreator(This,riid) ) 

#define IAGCGlobal_GetAGCObject(This,pvIgc,riid,ppUnk)	\
    ( (This)->lpVtbl -> GetAGCObject(This,pvIgc,riid,ppUnk) ) 

#define IAGCGlobal_AddAGCObject(This,pvIgc,pUnkAGC)	\
    ( (This)->lpVtbl -> AddAGCObject(This,pvIgc,pUnkAGC) ) 

#define IAGCGlobal_RemoveAGCObject(This,pvIgc,bForceDestruct)	\
    ( (This)->lpVtbl -> RemoveAGCObject(This,pvIgc,bForceDestruct) ) 

#define IAGCGlobal_SetEventSinksAreGITCookies(This,bEventSinksAreGITCookies)	\
    ( (This)->lpVtbl -> SetEventSinksAreGITCookies(This,bEventSinksAreGITCookies) ) 

#define IAGCGlobal_GetEventSinksAreGITCookies(This)	\
    ( (This)->lpVtbl -> GetEventSinksAreGITCookies(This) ) 

#define IAGCGlobal_RegisterEvent(This,eventID,uniqueID,pEventSink)	\
    ( (This)->lpVtbl -> RegisterEvent(This,eventID,uniqueID,pEventSink) ) 

#define IAGCGlobal_RevokeEvent(This,eventID,uniqueID,pEventSink)	\
    ( (This)->lpVtbl -> RevokeEvent(This,eventID,uniqueID,pEventSink) ) 

#define IAGCGlobal_RegisterEventRanges(This,pRanges,uniqueID,pEventSink)	\
    ( (This)->lpVtbl -> RegisterEventRanges(This,pRanges,uniqueID,pEventSink) ) 

#define IAGCGlobal_RevokeEventRanges(This,pRanges,uniqueID,pEventSink)	\
    ( (This)->lpVtbl -> RevokeEventRanges(This,pRanges,uniqueID,pEventSink) ) 

#define IAGCGlobal_RevokeAllEvents(This,pEventSink)	\
    ( (This)->lpVtbl -> RevokeAllEvents(This,pEventSink) ) 

#define IAGCGlobal_RegisterAllEvents(This,pEventSink)	\
    ( (This)->lpVtbl -> RegisterAllEvents(This,pEventSink) ) 

#define IAGCGlobal_EventListeners(This,idEvent,idSubject,idObject1,idObject2)	\
    ( (This)->lpVtbl -> EventListeners(This,idEvent,idSubject,idObject1,idObject2) ) 

#define IAGCGlobal_TriggerEvent(This,hListeners,idEvent,pszContext,pszSubject,idSubject,idObject1,idObject2,cArgTriplets,pvArgs)	\
    ( (This)->lpVtbl -> TriggerEvent(This,hListeners,idEvent,pszContext,pszSubject,idSubject,idObject1,idObject2,cArgTriplets,pvArgs) ) 

#define IAGCGlobal_TriggerEventSynchronous(This,hListeners,idEvent,pszContext,pszSubject,idSubject,idObject1,idObject2,cArgTriplets,pvArgs)	\
    ( (This)->lpVtbl -> TriggerEventSynchronous(This,hListeners,idEvent,pszContext,pszSubject,idSubject,idObject1,idObject2,cArgTriplets,pvArgs) ) 

#define IAGCGlobal_FreeListeners(This,hListeners)	\
    ( (This)->lpVtbl -> FreeListeners(This,hListeners) ) 

#define IAGCGlobal_IsRegistered(This,eventID,uniqueID,pEventSink)	\
    ( (This)->lpVtbl -> IsRegistered(This,eventID,uniqueID,pEventSink) ) 

#define IAGCGlobal_MakeAGCEvent(This,idEvent,pszContext,pszSubject,idSubject,cArgTriplets,pvArgs,ppEvent)	\
    ( (This)->lpVtbl -> MakeAGCEvent(This,idEvent,pszContext,pszSubject,idSubject,cArgTriplets,pvArgs,ppEvent) ) 

#define IAGCGlobal_SetAvailableEventIDRanges(This,pRanges)	\
    ( (This)->lpVtbl -> SetAvailableEventIDRanges(This,pRanges) ) 

#define IAGCGlobal_GetAvailableEventIDRanges(This,ppRanges)	\
    ( (This)->lpVtbl -> GetAvailableEventIDRanges(This,ppRanges) ) 

#define IAGCGlobal_GetEventSeverity(This,idEvent)	\
    ( (This)->lpVtbl -> GetEventSeverity(This,idEvent) ) 

#define IAGCGlobal_GetResourceInstance(This)	\
    ( (This)->lpVtbl -> GetResourceInstance(This) ) 

#define IAGCGlobal_MakeAGCVector(This,pVectorRaw,ppVector)	\
    ( (This)->lpVtbl -> MakeAGCVector(This,pVectorRaw,ppVector) ) 

#define IAGCGlobal_MakeAGCOrientation(This,pOrientationRaw,ppOrientation)	\
    ( (This)->lpVtbl -> MakeAGCOrientation(This,pOrientationRaw,ppOrientation) ) 

#define IAGCGlobal_MakeAGCEventIDRange(This,lower,upper,ppRange)	\
    ( (This)->lpVtbl -> MakeAGCEventIDRange(This,lower,upper,ppRange) ) 

#define IAGCGlobal_RegisterInterfaceInGlobal(This,pUnk,riid,pdwCookie)	\
    ( (This)->lpVtbl -> RegisterInterfaceInGlobal(This,pUnk,riid,pdwCookie) ) 

#define IAGCGlobal_RevokeInterfaceFromGlobal(This,dwCookie)	\
    ( (This)->lpVtbl -> RevokeInterfaceFromGlobal(This,dwCookie) ) 

#define IAGCGlobal_GetInterfaceFromGlobal(This,dwCookie,riid,ppv)	\
    ( (This)->lpVtbl -> GetInterfaceFromGlobal(This,dwCookie,riid,ppv) ) 

#define IAGCGlobal_Initialize(This)	\
    ( (This)->lpVtbl -> Initialize(This) ) 

#define IAGCGlobal_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IAGCGlobal_SetDebugHook(This,pdh)	\
    ( (This)->lpVtbl -> SetDebugHook(This,pdh) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCGlobal_INTERFACE_DEFINED__ */


#ifndef __IAGCVector_INTERFACE_DEFINED__
#define __IAGCVector_INTERFACE_DEFINED__

/* interface IAGCVector */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCVector;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EFC30B36-13B1-11d3-8B5E-00C04F681633")
    IAGCVector : public IDispatch
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_X( 
            /* [in] */ float xArg) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_X( 
            /* [retval][out] */ float *pxArg) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Y( 
            /* [in] */ float yArg) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Y( 
            /* [retval][out] */ float *pyArg) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Z( 
            /* [in] */ float zArg) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Z( 
            /* [retval][out] */ float *pzArg) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayString( 
            /* [in] */ BSTR bstrDisplayString) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayString( 
            /* [retval][out] */ BSTR *pbstrDisplayString) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitXYZ( 
            /* [in] */ float xArg,
            /* [in] */ float yArg,
            /* [in] */ float zArg) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitCopy( 
            /* [in] */ IAGCVector *pVector) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitRandomDirection( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitRandomPosition( 
            /* [in] */ float fRadius) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsZero( 
            /* [retval][out] */ VARIANT_BOOL *pbIsZero) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsEqual( 
            /* [in] */ IAGCVector *pVector,
            /* [retval][out] */ VARIANT_BOOL *pbIsEqual) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ float *pfLength) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LengthSquared( 
            /* [retval][out] */ float *pfLengthSquared) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OrthogonalVector( 
            /* [retval][out] */ IAGCVector **ppResult) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IAGCVector *pVector,
            /* [retval][out] */ IAGCVector **ppResult) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Subtract( 
            /* [in] */ IAGCVector *pVector,
            /* [retval][out] */ IAGCVector **ppResult) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Multiply( 
            /* [in] */ float f,
            /* [retval][out] */ IAGCVector **ppResult) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Divide( 
            /* [in] */ float f,
            /* [retval][out] */ IAGCVector **ppResult) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Normalize( 
            /* [retval][out] */ IAGCVector **ppResult) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CrossProduct( 
            /* [in] */ IAGCVector *pVector,
            /* [retval][out] */ IAGCVector **ppResult) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Interpolate( 
            /* [in] */ IAGCVector *pVector,
            /* [in] */ float fValue,
            /* [retval][out] */ IAGCVector **ppResult) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddInPlace( 
            /* [in] */ IAGCVector *pVector) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SubtractInPlace( 
            /* [in] */ IAGCVector *pVector) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MultiplyInPlace( 
            /* [in] */ float f) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE DivideInPlace( 
            /* [in] */ float f) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NormalizeInPlace( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CrossProductInPlace( 
            /* [in] */ IAGCVector *pVector) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InterpolateInPlace( 
            /* [in] */ IAGCVector *pVector,
            /* [in] */ float fValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCVectorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCVector * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCVector * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCVector * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCVector * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCVector * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCVector * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCVector * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCVector, put_X)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_X )( 
            IAGCVector * This,
            /* [in] */ float xArg);
        
        DECLSPEC_XFGVIRT(IAGCVector, get_X)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_X )( 
            IAGCVector * This,
            /* [retval][out] */ float *pxArg);
        
        DECLSPEC_XFGVIRT(IAGCVector, put_Y)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Y )( 
            IAGCVector * This,
            /* [in] */ float yArg);
        
        DECLSPEC_XFGVIRT(IAGCVector, get_Y)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Y )( 
            IAGCVector * This,
            /* [retval][out] */ float *pyArg);
        
        DECLSPEC_XFGVIRT(IAGCVector, put_Z)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Z )( 
            IAGCVector * This,
            /* [in] */ float zArg);
        
        DECLSPEC_XFGVIRT(IAGCVector, get_Z)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Z )( 
            IAGCVector * This,
            /* [retval][out] */ float *pzArg);
        
        DECLSPEC_XFGVIRT(IAGCVector, put_DisplayString)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayString )( 
            IAGCVector * This,
            /* [in] */ BSTR bstrDisplayString);
        
        DECLSPEC_XFGVIRT(IAGCVector, get_DisplayString)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayString )( 
            IAGCVector * This,
            /* [retval][out] */ BSTR *pbstrDisplayString);
        
        DECLSPEC_XFGVIRT(IAGCVector, InitXYZ)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitXYZ )( 
            IAGCVector * This,
            /* [in] */ float xArg,
            /* [in] */ float yArg,
            /* [in] */ float zArg);
        
        DECLSPEC_XFGVIRT(IAGCVector, InitCopy)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitCopy )( 
            IAGCVector * This,
            /* [in] */ IAGCVector *pVector);
        
        DECLSPEC_XFGVIRT(IAGCVector, InitRandomDirection)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitRandomDirection )( 
            IAGCVector * This);
        
        DECLSPEC_XFGVIRT(IAGCVector, InitRandomPosition)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitRandomPosition )( 
            IAGCVector * This,
            /* [in] */ float fRadius);
        
        DECLSPEC_XFGVIRT(IAGCVector, get_IsZero)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsZero )( 
            IAGCVector * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsZero);
        
        DECLSPEC_XFGVIRT(IAGCVector, get_IsEqual)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEqual )( 
            IAGCVector * This,
            /* [in] */ IAGCVector *pVector,
            /* [retval][out] */ VARIANT_BOOL *pbIsEqual);
        
        DECLSPEC_XFGVIRT(IAGCVector, get_Length)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IAGCVector * This,
            /* [retval][out] */ float *pfLength);
        
        DECLSPEC_XFGVIRT(IAGCVector, get_LengthSquared)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LengthSquared )( 
            IAGCVector * This,
            /* [retval][out] */ float *pfLengthSquared);
        
        DECLSPEC_XFGVIRT(IAGCVector, get_OrthogonalVector)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OrthogonalVector )( 
            IAGCVector * This,
            /* [retval][out] */ IAGCVector **ppResult);
        
        DECLSPEC_XFGVIRT(IAGCVector, Add)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IAGCVector * This,
            /* [in] */ IAGCVector *pVector,
            /* [retval][out] */ IAGCVector **ppResult);
        
        DECLSPEC_XFGVIRT(IAGCVector, Subtract)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Subtract )( 
            IAGCVector * This,
            /* [in] */ IAGCVector *pVector,
            /* [retval][out] */ IAGCVector **ppResult);
        
        DECLSPEC_XFGVIRT(IAGCVector, Multiply)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Multiply )( 
            IAGCVector * This,
            /* [in] */ float f,
            /* [retval][out] */ IAGCVector **ppResult);
        
        DECLSPEC_XFGVIRT(IAGCVector, Divide)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Divide )( 
            IAGCVector * This,
            /* [in] */ float f,
            /* [retval][out] */ IAGCVector **ppResult);
        
        DECLSPEC_XFGVIRT(IAGCVector, Normalize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Normalize )( 
            IAGCVector * This,
            /* [retval][out] */ IAGCVector **ppResult);
        
        DECLSPEC_XFGVIRT(IAGCVector, CrossProduct)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CrossProduct )( 
            IAGCVector * This,
            /* [in] */ IAGCVector *pVector,
            /* [retval][out] */ IAGCVector **ppResult);
        
        DECLSPEC_XFGVIRT(IAGCVector, Interpolate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Interpolate )( 
            IAGCVector * This,
            /* [in] */ IAGCVector *pVector,
            /* [in] */ float fValue,
            /* [retval][out] */ IAGCVector **ppResult);
        
        DECLSPEC_XFGVIRT(IAGCVector, AddInPlace)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddInPlace )( 
            IAGCVector * This,
            /* [in] */ IAGCVector *pVector);
        
        DECLSPEC_XFGVIRT(IAGCVector, SubtractInPlace)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SubtractInPlace )( 
            IAGCVector * This,
            /* [in] */ IAGCVector *pVector);
        
        DECLSPEC_XFGVIRT(IAGCVector, MultiplyInPlace)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MultiplyInPlace )( 
            IAGCVector * This,
            /* [in] */ float f);
        
        DECLSPEC_XFGVIRT(IAGCVector, DivideInPlace)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *DivideInPlace )( 
            IAGCVector * This,
            /* [in] */ float f);
        
        DECLSPEC_XFGVIRT(IAGCVector, NormalizeInPlace)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NormalizeInPlace )( 
            IAGCVector * This);
        
        DECLSPEC_XFGVIRT(IAGCVector, CrossProductInPlace)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CrossProductInPlace )( 
            IAGCVector * This,
            /* [in] */ IAGCVector *pVector);
        
        DECLSPEC_XFGVIRT(IAGCVector, InterpolateInPlace)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InterpolateInPlace )( 
            IAGCVector * This,
            /* [in] */ IAGCVector *pVector,
            /* [in] */ float fValue);
        
        END_INTERFACE
    } IAGCVectorVtbl;

    interface IAGCVector
    {
        CONST_VTBL struct IAGCVectorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCVector_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCVector_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCVector_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCVector_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCVector_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCVector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCVector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCVector_put_X(This,xArg)	\
    ( (This)->lpVtbl -> put_X(This,xArg) ) 

#define IAGCVector_get_X(This,pxArg)	\
    ( (This)->lpVtbl -> get_X(This,pxArg) ) 

#define IAGCVector_put_Y(This,yArg)	\
    ( (This)->lpVtbl -> put_Y(This,yArg) ) 

#define IAGCVector_get_Y(This,pyArg)	\
    ( (This)->lpVtbl -> get_Y(This,pyArg) ) 

#define IAGCVector_put_Z(This,zArg)	\
    ( (This)->lpVtbl -> put_Z(This,zArg) ) 

#define IAGCVector_get_Z(This,pzArg)	\
    ( (This)->lpVtbl -> get_Z(This,pzArg) ) 

#define IAGCVector_put_DisplayString(This,bstrDisplayString)	\
    ( (This)->lpVtbl -> put_DisplayString(This,bstrDisplayString) ) 

#define IAGCVector_get_DisplayString(This,pbstrDisplayString)	\
    ( (This)->lpVtbl -> get_DisplayString(This,pbstrDisplayString) ) 

#define IAGCVector_InitXYZ(This,xArg,yArg,zArg)	\
    ( (This)->lpVtbl -> InitXYZ(This,xArg,yArg,zArg) ) 

#define IAGCVector_InitCopy(This,pVector)	\
    ( (This)->lpVtbl -> InitCopy(This,pVector) ) 

#define IAGCVector_InitRandomDirection(This)	\
    ( (This)->lpVtbl -> InitRandomDirection(This) ) 

#define IAGCVector_InitRandomPosition(This,fRadius)	\
    ( (This)->lpVtbl -> InitRandomPosition(This,fRadius) ) 

#define IAGCVector_get_IsZero(This,pbIsZero)	\
    ( (This)->lpVtbl -> get_IsZero(This,pbIsZero) ) 

#define IAGCVector_get_IsEqual(This,pVector,pbIsEqual)	\
    ( (This)->lpVtbl -> get_IsEqual(This,pVector,pbIsEqual) ) 

#define IAGCVector_get_Length(This,pfLength)	\
    ( (This)->lpVtbl -> get_Length(This,pfLength) ) 

#define IAGCVector_get_LengthSquared(This,pfLengthSquared)	\
    ( (This)->lpVtbl -> get_LengthSquared(This,pfLengthSquared) ) 

#define IAGCVector_get_OrthogonalVector(This,ppResult)	\
    ( (This)->lpVtbl -> get_OrthogonalVector(This,ppResult) ) 

#define IAGCVector_Add(This,pVector,ppResult)	\
    ( (This)->lpVtbl -> Add(This,pVector,ppResult) ) 

#define IAGCVector_Subtract(This,pVector,ppResult)	\
    ( (This)->lpVtbl -> Subtract(This,pVector,ppResult) ) 

#define IAGCVector_Multiply(This,f,ppResult)	\
    ( (This)->lpVtbl -> Multiply(This,f,ppResult) ) 

#define IAGCVector_Divide(This,f,ppResult)	\
    ( (This)->lpVtbl -> Divide(This,f,ppResult) ) 

#define IAGCVector_Normalize(This,ppResult)	\
    ( (This)->lpVtbl -> Normalize(This,ppResult) ) 

#define IAGCVector_CrossProduct(This,pVector,ppResult)	\
    ( (This)->lpVtbl -> CrossProduct(This,pVector,ppResult) ) 

#define IAGCVector_Interpolate(This,pVector,fValue,ppResult)	\
    ( (This)->lpVtbl -> Interpolate(This,pVector,fValue,ppResult) ) 

#define IAGCVector_AddInPlace(This,pVector)	\
    ( (This)->lpVtbl -> AddInPlace(This,pVector) ) 

#define IAGCVector_SubtractInPlace(This,pVector)	\
    ( (This)->lpVtbl -> SubtractInPlace(This,pVector) ) 

#define IAGCVector_MultiplyInPlace(This,f)	\
    ( (This)->lpVtbl -> MultiplyInPlace(This,f) ) 

#define IAGCVector_DivideInPlace(This,f)	\
    ( (This)->lpVtbl -> DivideInPlace(This,f) ) 

#define IAGCVector_NormalizeInPlace(This)	\
    ( (This)->lpVtbl -> NormalizeInPlace(This) ) 

#define IAGCVector_CrossProductInPlace(This,pVector)	\
    ( (This)->lpVtbl -> CrossProductInPlace(This,pVector) ) 

#define IAGCVector_InterpolateInPlace(This,pVector,fValue)	\
    ( (This)->lpVtbl -> InterpolateInPlace(This,pVector,fValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCVector_INTERFACE_DEFINED__ */


#ifndef __IAGCVectorPrivate_INTERFACE_DEFINED__
#define __IAGCVectorPrivate_INTERFACE_DEFINED__

/* interface IAGCVectorPrivate */
/* [helpstring][uuid][nonextensible][unique][local][object][restricted][hidden] */ 


EXTERN_C const IID IID_IAGCVectorPrivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9DAF96AE-2F5A-11d3-A51C-00C04F68DEB0")
    IAGCVectorPrivate : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitFromVector( 
            /* [in] */ const void *pvVector) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CopyVectorTo( 
            /* [out][in] */ void *pvVector) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCVectorPrivateVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCVectorPrivate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCVectorPrivate * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCVectorPrivate * This);
        
        DECLSPEC_XFGVIRT(IAGCVectorPrivate, InitFromVector)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitFromVector )( 
            IAGCVectorPrivate * This,
            /* [in] */ const void *pvVector);
        
        DECLSPEC_XFGVIRT(IAGCVectorPrivate, CopyVectorTo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CopyVectorTo )( 
            IAGCVectorPrivate * This,
            /* [out][in] */ void *pvVector);
        
        END_INTERFACE
    } IAGCVectorPrivateVtbl;

    interface IAGCVectorPrivate
    {
        CONST_VTBL struct IAGCVectorPrivateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCVectorPrivate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCVectorPrivate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCVectorPrivate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCVectorPrivate_InitFromVector(This,pvVector)	\
    ( (This)->lpVtbl -> InitFromVector(This,pvVector) ) 

#define IAGCVectorPrivate_CopyVectorTo(This,pvVector)	\
    ( (This)->lpVtbl -> CopyVectorTo(This,pvVector) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCVectorPrivate_INTERFACE_DEFINED__ */


#ifndef __IAGCOrientation_INTERFACE_DEFINED__
#define __IAGCOrientation_INTERFACE_DEFINED__

/* interface IAGCOrientation */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCOrientation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C6D92776-3998-11d3-A51D-00C04F68DEB0")
    IAGCOrientation : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitCopy( 
            IAGCOrientation *pOrientation) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Forward( 
            /* [retval][out] */ IAGCVector **ppVector) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Backward( 
            /* [retval][out] */ IAGCVector **ppVector) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Up( 
            /* [retval][out] */ IAGCVector **ppVector) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Right( 
            /* [retval][out] */ IAGCVector **ppVector) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsEqual( 
            /* [in] */ IAGCOrientation *pOrientation,
            /* [retval][out] */ VARIANT_BOOL *pbIsEqual) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsRoughlyEqual( 
            /* [in] */ IAGCOrientation *pOrientation,
            /* [retval][out] */ VARIANT_BOOL *pbIsEqual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCOrientationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCOrientation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCOrientation * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCOrientation * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCOrientation * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCOrientation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCOrientation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCOrientation * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCOrientation, InitCopy)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitCopy )( 
            IAGCOrientation * This,
            IAGCOrientation *pOrientation);
        
        DECLSPEC_XFGVIRT(IAGCOrientation, get_Forward)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Forward )( 
            IAGCOrientation * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCOrientation, get_Backward)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Backward )( 
            IAGCOrientation * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCOrientation, get_Up)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Up )( 
            IAGCOrientation * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCOrientation, get_Right)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Right )( 
            IAGCOrientation * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCOrientation, get_IsEqual)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEqual )( 
            IAGCOrientation * This,
            /* [in] */ IAGCOrientation *pOrientation,
            /* [retval][out] */ VARIANT_BOOL *pbIsEqual);
        
        DECLSPEC_XFGVIRT(IAGCOrientation, get_IsRoughlyEqual)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsRoughlyEqual )( 
            IAGCOrientation * This,
            /* [in] */ IAGCOrientation *pOrientation,
            /* [retval][out] */ VARIANT_BOOL *pbIsEqual);
        
        END_INTERFACE
    } IAGCOrientationVtbl;

    interface IAGCOrientation
    {
        CONST_VTBL struct IAGCOrientationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCOrientation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCOrientation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCOrientation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCOrientation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCOrientation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCOrientation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCOrientation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCOrientation_InitCopy(This,pOrientation)	\
    ( (This)->lpVtbl -> InitCopy(This,pOrientation) ) 

#define IAGCOrientation_get_Forward(This,ppVector)	\
    ( (This)->lpVtbl -> get_Forward(This,ppVector) ) 

#define IAGCOrientation_get_Backward(This,ppVector)	\
    ( (This)->lpVtbl -> get_Backward(This,ppVector) ) 

#define IAGCOrientation_get_Up(This,ppVector)	\
    ( (This)->lpVtbl -> get_Up(This,ppVector) ) 

#define IAGCOrientation_get_Right(This,ppVector)	\
    ( (This)->lpVtbl -> get_Right(This,ppVector) ) 

#define IAGCOrientation_get_IsEqual(This,pOrientation,pbIsEqual)	\
    ( (This)->lpVtbl -> get_IsEqual(This,pOrientation,pbIsEqual) ) 

#define IAGCOrientation_get_IsRoughlyEqual(This,pOrientation,pbIsEqual)	\
    ( (This)->lpVtbl -> get_IsRoughlyEqual(This,pOrientation,pbIsEqual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCOrientation_INTERFACE_DEFINED__ */


#ifndef __IAGCOrientationPrivate_INTERFACE_DEFINED__
#define __IAGCOrientationPrivate_INTERFACE_DEFINED__

/* interface IAGCOrientationPrivate */
/* [helpstring][uuid][nonextensible][unique][local][object][restricted][hidden] */ 


EXTERN_C const IID IID_IAGCOrientationPrivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C6D92777-3998-11d3-A51D-00C04F68DEB0")
    IAGCOrientationPrivate : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitFromOrientation( 
            /* [in] */ const void *pvOrientation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CopyOrientationTo( 
            /* [out][in] */ void *pvOrientation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCOrientationPrivateVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCOrientationPrivate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCOrientationPrivate * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCOrientationPrivate * This);
        
        DECLSPEC_XFGVIRT(IAGCOrientationPrivate, InitFromOrientation)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitFromOrientation )( 
            IAGCOrientationPrivate * This,
            /* [in] */ const void *pvOrientation);
        
        DECLSPEC_XFGVIRT(IAGCOrientationPrivate, CopyOrientationTo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CopyOrientationTo )( 
            IAGCOrientationPrivate * This,
            /* [out][in] */ void *pvOrientation);
        
        END_INTERFACE
    } IAGCOrientationPrivateVtbl;

    interface IAGCOrientationPrivate
    {
        CONST_VTBL struct IAGCOrientationPrivateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCOrientationPrivate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCOrientationPrivate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCOrientationPrivate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCOrientationPrivate_InitFromOrientation(This,pvOrientation)	\
    ( (This)->lpVtbl -> InitFromOrientation(This,pvOrientation) ) 

#define IAGCOrientationPrivate_CopyOrientationTo(This,pvOrientation)	\
    ( (This)->lpVtbl -> CopyOrientationTo(This,pvOrientation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCOrientationPrivate_INTERFACE_DEFINED__ */


#ifndef __IAGCEventType_INTERFACE_DEFINED__
#define __IAGCEventType_INTERFACE_DEFINED__

/* interface IAGCEventType */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCEventType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07000E96-F4F6-4b49-9680-77B770B83905")
    IAGCEventType : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCEventTypeVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCEventType * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCEventType * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCEventType * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCEventType * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCEventType * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCEventType * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCEventType * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IAGCEventTypeVtbl;

    interface IAGCEventType
    {
        CONST_VTBL struct IAGCEventTypeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCEventType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCEventType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCEventType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCEventType_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCEventType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCEventType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCEventType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCEventType_INTERFACE_DEFINED__ */


#ifndef __IAGCEvent_INTERFACE_DEFINED__
#define __IAGCEvent_INTERFACE_DEFINED__

/* interface IAGCEvent */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D2EFE888-1480-11d3-8B5F-00C04F681633")
    IAGCEvent : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ID( 
            /* [retval][out] */ AGCEventID *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Time( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *bstr) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PropertyCount( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PropertyExists( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ VARIANT_BOOL *pbExists) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Property( 
            /* [defaultvalue][in] */ VARIANT *pvKey,
            /* [retval][out] */ VARIANT *pvValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ComputerName( 
            /* [retval][out] */ BSTR *pbstrComputerName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SubjectID( 
            /* [retval][out] */ long *pidSubject) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SubjectName( 
            /* [retval][out] */ BSTR *pbstrSubject) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveToString( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadFromString( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Context( 
            /* [retval][out] */ BSTR *pbstrContext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCEventVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCEvent * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCEvent * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCEvent * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCEvent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCEvent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCEvent * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCEvent, get_ID)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ID )( 
            IAGCEvent * This,
            /* [retval][out] */ AGCEventID *pVal);
        
        DECLSPEC_XFGVIRT(IAGCEvent, get_Time)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Time )( 
            IAGCEvent * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(IAGCEvent, get_Description)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IAGCEvent * This,
            /* [retval][out] */ BSTR *bstr);
        
        DECLSPEC_XFGVIRT(IAGCEvent, get_PropertyCount)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyCount )( 
            IAGCEvent * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(IAGCEvent, get_PropertyExists)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyExists )( 
            IAGCEvent * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ VARIANT_BOOL *pbExists);
        
        DECLSPEC_XFGVIRT(IAGCEvent, get_Property)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Property )( 
            IAGCEvent * This,
            /* [defaultvalue][in] */ VARIANT *pvKey,
            /* [retval][out] */ VARIANT *pvValue);
        
        DECLSPEC_XFGVIRT(IAGCEvent, get_ComputerName)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComputerName )( 
            IAGCEvent * This,
            /* [retval][out] */ BSTR *pbstrComputerName);
        
        DECLSPEC_XFGVIRT(IAGCEvent, get_SubjectID)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubjectID )( 
            IAGCEvent * This,
            /* [retval][out] */ long *pidSubject);
        
        DECLSPEC_XFGVIRT(IAGCEvent, get_SubjectName)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubjectName )( 
            IAGCEvent * This,
            /* [retval][out] */ BSTR *pbstrSubject);
        
        DECLSPEC_XFGVIRT(IAGCEvent, SaveToString)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveToString )( 
            IAGCEvent * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCEvent, LoadFromString)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadFromString )( 
            IAGCEvent * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IAGCEvent, get_Context)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Context )( 
            IAGCEvent * This,
            /* [retval][out] */ BSTR *pbstrContext);
        
        END_INTERFACE
    } IAGCEventVtbl;

    interface IAGCEvent
    {
        CONST_VTBL struct IAGCEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCEvent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCEvent_get_ID(This,pVal)	\
    ( (This)->lpVtbl -> get_ID(This,pVal) ) 

#define IAGCEvent_get_Time(This,pVal)	\
    ( (This)->lpVtbl -> get_Time(This,pVal) ) 

#define IAGCEvent_get_Description(This,bstr)	\
    ( (This)->lpVtbl -> get_Description(This,bstr) ) 

#define IAGCEvent_get_PropertyCount(This,pnCount)	\
    ( (This)->lpVtbl -> get_PropertyCount(This,pnCount) ) 

#define IAGCEvent_get_PropertyExists(This,bstrKey,pbExists)	\
    ( (This)->lpVtbl -> get_PropertyExists(This,bstrKey,pbExists) ) 

#define IAGCEvent_get_Property(This,pvKey,pvValue)	\
    ( (This)->lpVtbl -> get_Property(This,pvKey,pvValue) ) 

#define IAGCEvent_get_ComputerName(This,pbstrComputerName)	\
    ( (This)->lpVtbl -> get_ComputerName(This,pbstrComputerName) ) 

#define IAGCEvent_get_SubjectID(This,pidSubject)	\
    ( (This)->lpVtbl -> get_SubjectID(This,pidSubject) ) 

#define IAGCEvent_get_SubjectName(This,pbstrSubject)	\
    ( (This)->lpVtbl -> get_SubjectName(This,pbstrSubject) ) 

#define IAGCEvent_SaveToString(This,pbstr)	\
    ( (This)->lpVtbl -> SaveToString(This,pbstr) ) 

#define IAGCEvent_LoadFromString(This,bstr)	\
    ( (This)->lpVtbl -> LoadFromString(This,bstr) ) 

#define IAGCEvent_get_Context(This,pbstrContext)	\
    ( (This)->lpVtbl -> get_Context(This,pbstrContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCEvent_INTERFACE_DEFINED__ */


#ifndef __IAGCEventCreate_INTERFACE_DEFINED__
#define __IAGCEventCreate_INTERFACE_DEFINED__

/* interface IAGCEventCreate */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCEventCreate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9D43ACA9-98A3-45ba-BFAA-340D451FCD98")
    IAGCEventCreate : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( void) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ID( 
            /* [in] */ AGCEventID Val) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Time( 
            /* [in] */ DATE Val) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetTimeNow( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddProperty( 
            /* [in] */ BSTR pbstrKey,
            /* [in] */ VARIANT *pvValue) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveProperty( 
            /* [in] */ BSTR pbstrKey,
            /* [in] */ VARIANT *pvValue) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SubjectID( 
            /* [in] */ long idSubject) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SubjectName( 
            /* [in] */ BSTR bstrSubject) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Context( 
            /* [in] */ BSTR bstrContext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCEventCreateVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCEventCreate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCEventCreate * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCEventCreate * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCEventCreate * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCEventCreate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCEventCreate * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCEventCreate * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCEventCreate, Init)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IAGCEventCreate * This);
        
        DECLSPEC_XFGVIRT(IAGCEventCreate, put_ID)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ID )( 
            IAGCEventCreate * This,
            /* [in] */ AGCEventID Val);
        
        DECLSPEC_XFGVIRT(IAGCEventCreate, put_Time)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Time )( 
            IAGCEventCreate * This,
            /* [in] */ DATE Val);
        
        DECLSPEC_XFGVIRT(IAGCEventCreate, SetTimeNow)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetTimeNow )( 
            IAGCEventCreate * This);
        
        DECLSPEC_XFGVIRT(IAGCEventCreate, AddProperty)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddProperty )( 
            IAGCEventCreate * This,
            /* [in] */ BSTR pbstrKey,
            /* [in] */ VARIANT *pvValue);
        
        DECLSPEC_XFGVIRT(IAGCEventCreate, RemoveProperty)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveProperty )( 
            IAGCEventCreate * This,
            /* [in] */ BSTR pbstrKey,
            /* [in] */ VARIANT *pvValue);
        
        DECLSPEC_XFGVIRT(IAGCEventCreate, put_SubjectID)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubjectID )( 
            IAGCEventCreate * This,
            /* [in] */ long idSubject);
        
        DECLSPEC_XFGVIRT(IAGCEventCreate, put_SubjectName)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubjectName )( 
            IAGCEventCreate * This,
            /* [in] */ BSTR bstrSubject);
        
        DECLSPEC_XFGVIRT(IAGCEventCreate, put_Context)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Context )( 
            IAGCEventCreate * This,
            /* [in] */ BSTR bstrContext);
        
        END_INTERFACE
    } IAGCEventCreateVtbl;

    interface IAGCEventCreate
    {
        CONST_VTBL struct IAGCEventCreateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCEventCreate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCEventCreate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCEventCreate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCEventCreate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCEventCreate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCEventCreate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCEventCreate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCEventCreate_Init(This)	\
    ( (This)->lpVtbl -> Init(This) ) 

#define IAGCEventCreate_put_ID(This,Val)	\
    ( (This)->lpVtbl -> put_ID(This,Val) ) 

#define IAGCEventCreate_put_Time(This,Val)	\
    ( (This)->lpVtbl -> put_Time(This,Val) ) 

#define IAGCEventCreate_SetTimeNow(This)	\
    ( (This)->lpVtbl -> SetTimeNow(This) ) 

#define IAGCEventCreate_AddProperty(This,pbstrKey,pvValue)	\
    ( (This)->lpVtbl -> AddProperty(This,pbstrKey,pvValue) ) 

#define IAGCEventCreate_RemoveProperty(This,pbstrKey,pvValue)	\
    ( (This)->lpVtbl -> RemoveProperty(This,pbstrKey,pvValue) ) 

#define IAGCEventCreate_put_SubjectID(This,idSubject)	\
    ( (This)->lpVtbl -> put_SubjectID(This,idSubject) ) 

#define IAGCEventCreate_put_SubjectName(This,bstrSubject)	\
    ( (This)->lpVtbl -> put_SubjectName(This,bstrSubject) ) 

#define IAGCEventCreate_put_Context(This,bstrContext)	\
    ( (This)->lpVtbl -> put_Context(This,bstrContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCEventCreate_INTERFACE_DEFINED__ */


#ifndef __IAGCGameParameters_INTERFACE_DEFINED__
#define __IAGCGameParameters_INTERFACE_DEFINED__

/* interface IAGCGameParameters */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCGameParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E71EA5B9-EBA4-11D2-8B4B-00C04F681633")
    IAGCGameParameters : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Validate( void) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MinPlayers( 
            /* [in] */ BYTE Val) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MinPlayers( 
            /* [retval][out] */ BYTE *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MaxPlayers( 
            /* [in] */ BYTE Val) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MaxPlayers( 
            /* [retval][out] */ BYTE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GameName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_GameName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EjectPods( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_EjectPods( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllowPrivateTeams( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllowPrivateTeams( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PowerUps( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PowerUps( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllowJoiners( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllowJoiners( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Stations( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Stations( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ScoresCount( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ScoresCount( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Drones( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Drones( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsGoalConquest( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsGoalConquest( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsGoalArtifacts( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsGoalArtifacts( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsGoalTeamMoney( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsGoalTeamMoney( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsGoalTeamKills( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsGoalTeamKills( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Resources( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Resources( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ResourceAmountsVisible( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ResourceAmountsVisible( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RandomWormholes( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RandomWormholes( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NoTeams( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NoTeams( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ShowHomeSector( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ShowHomeSector( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CivIDs( 
            short element,
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CivIDs( 
            short element,
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GoalTeamMoney( 
            /* [retval][out] */ AGCMoney *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_GoalTeamMoney( 
            /* [in] */ AGCMoney newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TsiPlayerStart( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TsiPlayerStart( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TsiNeutralStart( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TsiNeutralStart( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TsiPlayerRegenerate( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TsiPlayerRegenerate( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TsiNeutralRegenerate( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TsiNeutralRegenerate( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StartingMoney( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_StartingMoney( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Lives( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Lives( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GoalTeamKills( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_GoalTeamKills( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MapType( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MapType( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MapSize( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MapSize( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RandomEncounters( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RandomEncounters( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NeutralSectors( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NeutralSectors( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AlephPositioning( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AlephPositioning( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AlephsPerSector( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AlephsPerSector( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Teams( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Teams( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MinRank( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MinRank( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MaxRank( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MaxRank( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlayerSectorAsteroids( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PlayerSectorAsteroids( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NeutralSectorAsteroids( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NeutralSectorAsteroids( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlayerSectorTreasures( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PlayerSectorTreasures( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NeutralSectorTreasures( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NeutralSectorTreasures( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlayerSectorTreasureRate( 
            /* [retval][out] */ FLOAT *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PlayerSectorTreasureRate( 
            /* [in] */ FLOAT newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NeutralSectorTreasureRate( 
            /* [retval][out] */ FLOAT *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NeutralSectorTreasureRate( 
            /* [in] */ FLOAT newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlayerSectorMineableAsteroids( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PlayerSectorMineableAsteroids( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NeutralSectorMineableAsteroids( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NeutralSectorMineableAsteroids( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_PlayerSectorSpecialAsteroids( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_PlayerSectorSpecialAsteroids( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_NeutralSectorSpecialAsteroids( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NeutralSectorSpecialAsteroids( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IGCStaticFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IGCStaticFile( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GamePassword( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_GamePassword( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InvulnerableStations( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InvulnerableStations( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ShowMap( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ShowMap( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllowDevelopments( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllowDevelopments( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllowDefections( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllowDefections( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SquadGame( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SquadGame( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllowFriendlyFire( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllowFriendlyFire( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IGCcoreVersion( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GameLength( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_GameLength( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_He3Density( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_He3Density( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_KillPenalty( 
            /* [retval][out] */ AGCMoney *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_KillPenalty( 
            /* [in] */ AGCMoney newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_KillReward( 
            /* [retval][out] */ AGCMoney *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_KillReward( 
            /* [in] */ AGCMoney newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EjectPenalty( 
            /* [retval][out] */ AGCMoney *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_EjectPenalty( 
            /* [in] */ AGCMoney newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EjectReward( 
            /* [retval][out] */ AGCMoney *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_EjectReward( 
            /* [in] */ AGCMoney newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TimeStart( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TimeStartClock( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GoalArtifactsCount( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_GoalArtifactsCount( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AutoRestart( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AutoRestart( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultCountdown( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DefaultCountdown( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InitialMinersPerTeam( 
            /* [retval][out] */ BYTE *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InitialMinersPerTeam( 
            /* [in] */ BYTE newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MaxMinersPerTeam( 
            /* [retval][out] */ BYTE *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_MaxMinersPerTeam( 
            /* [in] */ BYTE newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CustomMap( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CustomMap( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_RestartCountdown( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_RestartCountdown( 
            /* [in] */ float newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TotalMaxPlayers( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TotalMaxPlayers( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LockTeamSettings( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LockTeamSettings( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InvitationListID( 
            /* [retval][out] */ int *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_InvitationListID( 
            /* [in] */ int newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsSquadGame( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsSquadGame( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LockGameOpen( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LockGameOpen( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_TeamName( 
            /* [in] */ short iTeam,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TeamName( 
            /* [in] */ short iTeam,
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTechBitOverridden( 
            /* [in] */ short iTeam,
            /* [in] */ short iBitID,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OverriddenTechBit( 
            /* [in] */ short iTeam,
            /* [in] */ short iBitID,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_OverriddenTechBit( 
            /* [in] */ short iTeam,
            /* [in] */ short iBitID,
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_SetOverriddenTechBitRange( 
            /* [in] */ short iTeam,
            /* [in] */ short iBitID_First,
            /* [in] */ short iBitID_Last,
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsGoalFlags( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_IsGoalFlags( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_GoalFlagsCount( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_GoalFlagsCount( 
            /* [in] */ short newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_StoryText( 
            /* [retval][out] */ BSTR *pbstrStory) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_StoryText( 
            /* [in] */ BSTR bstrStory) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllowEmptyTeams( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllowEmptyTeams( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AutoStart( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AutoStart( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllowRestart( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllowRestart( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllowShipyardPath( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllowShipyardPath( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllowSupremacyPath( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllowSupremacyPath( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllowTacticalPath( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllowTacticalPath( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_AllowExpansionPath( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AllowExpansionPath( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_MaxImbalance( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MaxImbalance( 
            /* [in] */ short Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCGameParametersVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCGameParameters * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCGameParameters * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCGameParameters * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCGameParameters * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCGameParameters * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCGameParameters * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCGameParameters * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, Validate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Validate )( 
            IAGCGameParameters * This);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_MinPlayers)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinPlayers )( 
            IAGCGameParameters * This,
            /* [in] */ BYTE Val);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_MinPlayers)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinPlayers )( 
            IAGCGameParameters * This,
            /* [retval][out] */ BYTE *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_MaxPlayers)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxPlayers )( 
            IAGCGameParameters * This,
            /* [in] */ BYTE Val);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_MaxPlayers)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxPlayers )( 
            IAGCGameParameters * This,
            /* [retval][out] */ BYTE *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_GameName)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GameName )( 
            IAGCGameParameters * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_GameName)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GameName )( 
            IAGCGameParameters * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_EjectPods)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EjectPods )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_EjectPods)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EjectPods )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AllowPrivateTeams)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowPrivateTeams )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AllowPrivateTeams)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowPrivateTeams )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_PowerUps)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PowerUps )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_PowerUps)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PowerUps )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AllowJoiners)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowJoiners )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AllowJoiners)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowJoiners )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_Stations)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stations )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_Stations)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Stations )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_ScoresCount)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScoresCount )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_ScoresCount)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScoresCount )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_Drones)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Drones )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_Drones)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Drones )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_IsGoalConquest)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsGoalConquest )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_IsGoalConquest)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsGoalConquest )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_IsGoalArtifacts)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsGoalArtifacts )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_IsGoalArtifacts)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsGoalArtifacts )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_IsGoalTeamMoney)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsGoalTeamMoney )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_IsGoalTeamMoney)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsGoalTeamMoney )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_IsGoalTeamKills)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsGoalTeamKills )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_IsGoalTeamKills)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsGoalTeamKills )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_Resources)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resources )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_Resources)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Resources )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_ResourceAmountsVisible)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResourceAmountsVisible )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_ResourceAmountsVisible)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResourceAmountsVisible )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_RandomWormholes)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RandomWormholes )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_RandomWormholes)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RandomWormholes )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_NoTeams)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NoTeams )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_NoTeams)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NoTeams )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_ShowHomeSector)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowHomeSector )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_ShowHomeSector)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowHomeSector )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_CivIDs)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CivIDs )( 
            IAGCGameParameters * This,
            short element,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_CivIDs)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CivIDs )( 
            IAGCGameParameters * This,
            short element,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_GoalTeamMoney)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GoalTeamMoney )( 
            IAGCGameParameters * This,
            /* [retval][out] */ AGCMoney *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_GoalTeamMoney)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GoalTeamMoney )( 
            IAGCGameParameters * This,
            /* [in] */ AGCMoney newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_TsiPlayerStart)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TsiPlayerStart )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_TsiPlayerStart)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TsiPlayerStart )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_TsiNeutralStart)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TsiNeutralStart )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_TsiNeutralStart)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TsiNeutralStart )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_TsiPlayerRegenerate)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TsiPlayerRegenerate )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_TsiPlayerRegenerate)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TsiPlayerRegenerate )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_TsiNeutralRegenerate)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TsiNeutralRegenerate )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_TsiNeutralRegenerate)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TsiNeutralRegenerate )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_StartingMoney)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartingMoney )( 
            IAGCGameParameters * This,
            /* [retval][out] */ float *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_StartingMoney)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartingMoney )( 
            IAGCGameParameters * This,
            /* [in] */ float newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_Lives)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Lives )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_Lives)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Lives )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_GoalTeamKills)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GoalTeamKills )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_GoalTeamKills)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GoalTeamKills )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_MapType)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MapType )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_MapType)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MapType )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_MapSize)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MapSize )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_MapSize)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MapSize )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_RandomEncounters)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RandomEncounters )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_RandomEncounters)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RandomEncounters )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_NeutralSectors)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NeutralSectors )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_NeutralSectors)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NeutralSectors )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AlephPositioning)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlephPositioning )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AlephPositioning)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AlephPositioning )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AlephsPerSector)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlephsPerSector )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AlephsPerSector)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AlephsPerSector )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_Teams)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Teams )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_Teams)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Teams )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_MinRank)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinRank )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_MinRank)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinRank )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_MaxRank)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxRank )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_MaxRank)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxRank )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_PlayerSectorAsteroids)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlayerSectorAsteroids )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_PlayerSectorAsteroids)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlayerSectorAsteroids )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_NeutralSectorAsteroids)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NeutralSectorAsteroids )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_NeutralSectorAsteroids)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NeutralSectorAsteroids )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_PlayerSectorTreasures)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlayerSectorTreasures )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_PlayerSectorTreasures)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlayerSectorTreasures )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_NeutralSectorTreasures)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NeutralSectorTreasures )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_NeutralSectorTreasures)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NeutralSectorTreasures )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_PlayerSectorTreasureRate)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlayerSectorTreasureRate )( 
            IAGCGameParameters * This,
            /* [retval][out] */ FLOAT *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_PlayerSectorTreasureRate)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlayerSectorTreasureRate )( 
            IAGCGameParameters * This,
            /* [in] */ FLOAT newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_NeutralSectorTreasureRate)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NeutralSectorTreasureRate )( 
            IAGCGameParameters * This,
            /* [retval][out] */ FLOAT *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_NeutralSectorTreasureRate)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NeutralSectorTreasureRate )( 
            IAGCGameParameters * This,
            /* [in] */ FLOAT newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_PlayerSectorMineableAsteroids)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlayerSectorMineableAsteroids )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_PlayerSectorMineableAsteroids)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlayerSectorMineableAsteroids )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_NeutralSectorMineableAsteroids)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NeutralSectorMineableAsteroids )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_NeutralSectorMineableAsteroids)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NeutralSectorMineableAsteroids )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_PlayerSectorSpecialAsteroids)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlayerSectorSpecialAsteroids )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_PlayerSectorSpecialAsteroids)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlayerSectorSpecialAsteroids )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_NeutralSectorSpecialAsteroids)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NeutralSectorSpecialAsteroids )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_NeutralSectorSpecialAsteroids)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NeutralSectorSpecialAsteroids )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_IGCStaticFile)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IGCStaticFile )( 
            IAGCGameParameters * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_IGCStaticFile)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IGCStaticFile )( 
            IAGCGameParameters * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_GamePassword)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GamePassword )( 
            IAGCGameParameters * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_GamePassword)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GamePassword )( 
            IAGCGameParameters * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_InvulnerableStations)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InvulnerableStations )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_InvulnerableStations)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InvulnerableStations )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_ShowMap)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowMap )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_ShowMap)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowMap )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AllowDevelopments)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowDevelopments )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AllowDevelopments)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowDevelopments )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AllowDefections)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowDefections )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AllowDefections)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowDefections )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_SquadGame)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SquadGame )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_SquadGame)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SquadGame )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AllowFriendlyFire)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowFriendlyFire )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AllowFriendlyFire)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowFriendlyFire )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_IGCcoreVersion)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IGCcoreVersion )( 
            IAGCGameParameters * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_GameLength)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GameLength )( 
            IAGCGameParameters * This,
            /* [retval][out] */ float *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_GameLength)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GameLength )( 
            IAGCGameParameters * This,
            /* [in] */ float newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_He3Density)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_He3Density )( 
            IAGCGameParameters * This,
            /* [retval][out] */ float *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_He3Density)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_He3Density )( 
            IAGCGameParameters * This,
            /* [in] */ float newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_KillPenalty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KillPenalty )( 
            IAGCGameParameters * This,
            /* [retval][out] */ AGCMoney *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_KillPenalty)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KillPenalty )( 
            IAGCGameParameters * This,
            /* [in] */ AGCMoney newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_KillReward)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KillReward )( 
            IAGCGameParameters * This,
            /* [retval][out] */ AGCMoney *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_KillReward)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KillReward )( 
            IAGCGameParameters * This,
            /* [in] */ AGCMoney newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_EjectPenalty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EjectPenalty )( 
            IAGCGameParameters * This,
            /* [retval][out] */ AGCMoney *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_EjectPenalty)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EjectPenalty )( 
            IAGCGameParameters * This,
            /* [in] */ AGCMoney newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_EjectReward)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EjectReward )( 
            IAGCGameParameters * This,
            /* [retval][out] */ AGCMoney *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_EjectReward)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EjectReward )( 
            IAGCGameParameters * This,
            /* [in] */ AGCMoney newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_TimeStart)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeStart )( 
            IAGCGameParameters * This,
            /* [retval][out] */ double *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_TimeStartClock)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeStartClock )( 
            IAGCGameParameters * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_GoalArtifactsCount)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GoalArtifactsCount )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_GoalArtifactsCount)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GoalArtifactsCount )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AutoRestart)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoRestart )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AutoRestart)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoRestart )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_DefaultCountdown)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultCountdown )( 
            IAGCGameParameters * This,
            /* [retval][out] */ float *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_DefaultCountdown)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultCountdown )( 
            IAGCGameParameters * This,
            /* [in] */ float newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_InitialMinersPerTeam)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InitialMinersPerTeam )( 
            IAGCGameParameters * This,
            /* [retval][out] */ BYTE *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_InitialMinersPerTeam)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InitialMinersPerTeam )( 
            IAGCGameParameters * This,
            /* [in] */ BYTE newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_MaxMinersPerTeam)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxMinersPerTeam )( 
            IAGCGameParameters * This,
            /* [retval][out] */ BYTE *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_MaxMinersPerTeam)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxMinersPerTeam )( 
            IAGCGameParameters * This,
            /* [in] */ BYTE newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_CustomMap)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomMap )( 
            IAGCGameParameters * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_CustomMap)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomMap )( 
            IAGCGameParameters * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_RestartCountdown)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RestartCountdown )( 
            IAGCGameParameters * This,
            /* [retval][out] */ float *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_RestartCountdown)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RestartCountdown )( 
            IAGCGameParameters * This,
            /* [in] */ float newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_TotalMaxPlayers)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TotalMaxPlayers )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_TotalMaxPlayers)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TotalMaxPlayers )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_LockTeamSettings)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LockTeamSettings )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_LockTeamSettings)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LockTeamSettings )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_InvitationListID)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InvitationListID )( 
            IAGCGameParameters * This,
            /* [retval][out] */ int *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_InvitationListID)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InvitationListID )( 
            IAGCGameParameters * This,
            /* [in] */ int newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_IsSquadGame)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSquadGame )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_IsSquadGame)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsSquadGame )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_LockGameOpen)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LockGameOpen )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_LockGameOpen)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LockGameOpen )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_TeamName)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TeamName )( 
            IAGCGameParameters * This,
            /* [in] */ short iTeam,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_TeamName)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TeamName )( 
            IAGCGameParameters * This,
            /* [in] */ short iTeam,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_IsTechBitOverridden)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTechBitOverridden )( 
            IAGCGameParameters * This,
            /* [in] */ short iTeam,
            /* [in] */ short iBitID,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_OverriddenTechBit)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OverriddenTechBit )( 
            IAGCGameParameters * This,
            /* [in] */ short iTeam,
            /* [in] */ short iBitID,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_OverriddenTechBit)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OverriddenTechBit )( 
            IAGCGameParameters * This,
            /* [in] */ short iTeam,
            /* [in] */ short iBitID,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_SetOverriddenTechBitRange)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SetOverriddenTechBitRange )( 
            IAGCGameParameters * This,
            /* [in] */ short iTeam,
            /* [in] */ short iBitID_First,
            /* [in] */ short iBitID_Last,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_IsGoalFlags)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsGoalFlags )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_IsGoalFlags)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsGoalFlags )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_GoalFlagsCount)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GoalFlagsCount )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_GoalFlagsCount)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GoalFlagsCount )( 
            IAGCGameParameters * This,
            /* [in] */ short newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_StoryText)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StoryText )( 
            IAGCGameParameters * This,
            /* [retval][out] */ BSTR *pbstrStory);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_StoryText)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_StoryText )( 
            IAGCGameParameters * This,
            /* [in] */ BSTR bstrStory);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AllowEmptyTeams)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowEmptyTeams )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AllowEmptyTeams)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowEmptyTeams )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AutoStart)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoStart )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AutoStart)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoStart )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AllowRestart)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowRestart )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AllowRestart)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowRestart )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AllowShipyardPath)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowShipyardPath )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AllowShipyardPath)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowShipyardPath )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AllowSupremacyPath)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowSupremacyPath )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AllowSupremacyPath)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowSupremacyPath )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AllowTacticalPath)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowTacticalPath )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AllowTacticalPath)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowTacticalPath )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_AllowExpansionPath)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowExpansionPath )( 
            IAGCGameParameters * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_AllowExpansionPath)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowExpansionPath )( 
            IAGCGameParameters * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, get_MaxImbalance)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxImbalance )( 
            IAGCGameParameters * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCGameParameters, put_MaxImbalance)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxImbalance )( 
            IAGCGameParameters * This,
            /* [in] */ short Val);
        
        END_INTERFACE
    } IAGCGameParametersVtbl;

    interface IAGCGameParameters
    {
        CONST_VTBL struct IAGCGameParametersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCGameParameters_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCGameParameters_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCGameParameters_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCGameParameters_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCGameParameters_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCGameParameters_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCGameParameters_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCGameParameters_Validate(This)	\
    ( (This)->lpVtbl -> Validate(This) ) 

#define IAGCGameParameters_put_MinPlayers(This,Val)	\
    ( (This)->lpVtbl -> put_MinPlayers(This,Val) ) 

#define IAGCGameParameters_get_MinPlayers(This,pVal)	\
    ( (This)->lpVtbl -> get_MinPlayers(This,pVal) ) 

#define IAGCGameParameters_put_MaxPlayers(This,Val)	\
    ( (This)->lpVtbl -> put_MaxPlayers(This,Val) ) 

#define IAGCGameParameters_get_MaxPlayers(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxPlayers(This,pVal) ) 

#define IAGCGameParameters_get_GameName(This,pVal)	\
    ( (This)->lpVtbl -> get_GameName(This,pVal) ) 

#define IAGCGameParameters_put_GameName(This,newVal)	\
    ( (This)->lpVtbl -> put_GameName(This,newVal) ) 

#define IAGCGameParameters_get_EjectPods(This,pVal)	\
    ( (This)->lpVtbl -> get_EjectPods(This,pVal) ) 

#define IAGCGameParameters_put_EjectPods(This,newVal)	\
    ( (This)->lpVtbl -> put_EjectPods(This,newVal) ) 

#define IAGCGameParameters_get_AllowPrivateTeams(This,pVal)	\
    ( (This)->lpVtbl -> get_AllowPrivateTeams(This,pVal) ) 

#define IAGCGameParameters_put_AllowPrivateTeams(This,newVal)	\
    ( (This)->lpVtbl -> put_AllowPrivateTeams(This,newVal) ) 

#define IAGCGameParameters_get_PowerUps(This,pVal)	\
    ( (This)->lpVtbl -> get_PowerUps(This,pVal) ) 

#define IAGCGameParameters_put_PowerUps(This,newVal)	\
    ( (This)->lpVtbl -> put_PowerUps(This,newVal) ) 

#define IAGCGameParameters_get_AllowJoiners(This,pVal)	\
    ( (This)->lpVtbl -> get_AllowJoiners(This,pVal) ) 

#define IAGCGameParameters_put_AllowJoiners(This,newVal)	\
    ( (This)->lpVtbl -> put_AllowJoiners(This,newVal) ) 

#define IAGCGameParameters_get_Stations(This,pVal)	\
    ( (This)->lpVtbl -> get_Stations(This,pVal) ) 

#define IAGCGameParameters_put_Stations(This,newVal)	\
    ( (This)->lpVtbl -> put_Stations(This,newVal) ) 

#define IAGCGameParameters_get_ScoresCount(This,pVal)	\
    ( (This)->lpVtbl -> get_ScoresCount(This,pVal) ) 

#define IAGCGameParameters_put_ScoresCount(This,newVal)	\
    ( (This)->lpVtbl -> put_ScoresCount(This,newVal) ) 

#define IAGCGameParameters_get_Drones(This,pVal)	\
    ( (This)->lpVtbl -> get_Drones(This,pVal) ) 

#define IAGCGameParameters_put_Drones(This,newVal)	\
    ( (This)->lpVtbl -> put_Drones(This,newVal) ) 

#define IAGCGameParameters_get_IsGoalConquest(This,pVal)	\
    ( (This)->lpVtbl -> get_IsGoalConquest(This,pVal) ) 

#define IAGCGameParameters_put_IsGoalConquest(This,newVal)	\
    ( (This)->lpVtbl -> put_IsGoalConquest(This,newVal) ) 

#define IAGCGameParameters_get_IsGoalArtifacts(This,pVal)	\
    ( (This)->lpVtbl -> get_IsGoalArtifacts(This,pVal) ) 

#define IAGCGameParameters_put_IsGoalArtifacts(This,newVal)	\
    ( (This)->lpVtbl -> put_IsGoalArtifacts(This,newVal) ) 

#define IAGCGameParameters_get_IsGoalTeamMoney(This,pVal)	\
    ( (This)->lpVtbl -> get_IsGoalTeamMoney(This,pVal) ) 

#define IAGCGameParameters_put_IsGoalTeamMoney(This,newVal)	\
    ( (This)->lpVtbl -> put_IsGoalTeamMoney(This,newVal) ) 

#define IAGCGameParameters_get_IsGoalTeamKills(This,pVal)	\
    ( (This)->lpVtbl -> get_IsGoalTeamKills(This,pVal) ) 

#define IAGCGameParameters_put_IsGoalTeamKills(This,newVal)	\
    ( (This)->lpVtbl -> put_IsGoalTeamKills(This,newVal) ) 

#define IAGCGameParameters_get_Resources(This,pVal)	\
    ( (This)->lpVtbl -> get_Resources(This,pVal) ) 

#define IAGCGameParameters_put_Resources(This,newVal)	\
    ( (This)->lpVtbl -> put_Resources(This,newVal) ) 

#define IAGCGameParameters_get_ResourceAmountsVisible(This,pVal)	\
    ( (This)->lpVtbl -> get_ResourceAmountsVisible(This,pVal) ) 

#define IAGCGameParameters_put_ResourceAmountsVisible(This,newVal)	\
    ( (This)->lpVtbl -> put_ResourceAmountsVisible(This,newVal) ) 

#define IAGCGameParameters_get_RandomWormholes(This,pVal)	\
    ( (This)->lpVtbl -> get_RandomWormholes(This,pVal) ) 

#define IAGCGameParameters_put_RandomWormholes(This,newVal)	\
    ( (This)->lpVtbl -> put_RandomWormholes(This,newVal) ) 

#define IAGCGameParameters_get_NoTeams(This,pVal)	\
    ( (This)->lpVtbl -> get_NoTeams(This,pVal) ) 

#define IAGCGameParameters_put_NoTeams(This,newVal)	\
    ( (This)->lpVtbl -> put_NoTeams(This,newVal) ) 

#define IAGCGameParameters_get_ShowHomeSector(This,pVal)	\
    ( (This)->lpVtbl -> get_ShowHomeSector(This,pVal) ) 

#define IAGCGameParameters_put_ShowHomeSector(This,newVal)	\
    ( (This)->lpVtbl -> put_ShowHomeSector(This,newVal) ) 

#define IAGCGameParameters_get_CivIDs(This,element,pVal)	\
    ( (This)->lpVtbl -> get_CivIDs(This,element,pVal) ) 

#define IAGCGameParameters_put_CivIDs(This,element,newVal)	\
    ( (This)->lpVtbl -> put_CivIDs(This,element,newVal) ) 

#define IAGCGameParameters_get_GoalTeamMoney(This,pVal)	\
    ( (This)->lpVtbl -> get_GoalTeamMoney(This,pVal) ) 

#define IAGCGameParameters_put_GoalTeamMoney(This,newVal)	\
    ( (This)->lpVtbl -> put_GoalTeamMoney(This,newVal) ) 

#define IAGCGameParameters_get_TsiPlayerStart(This,pVal)	\
    ( (This)->lpVtbl -> get_TsiPlayerStart(This,pVal) ) 

#define IAGCGameParameters_put_TsiPlayerStart(This,newVal)	\
    ( (This)->lpVtbl -> put_TsiPlayerStart(This,newVal) ) 

#define IAGCGameParameters_get_TsiNeutralStart(This,pVal)	\
    ( (This)->lpVtbl -> get_TsiNeutralStart(This,pVal) ) 

#define IAGCGameParameters_put_TsiNeutralStart(This,newVal)	\
    ( (This)->lpVtbl -> put_TsiNeutralStart(This,newVal) ) 

#define IAGCGameParameters_get_TsiPlayerRegenerate(This,pVal)	\
    ( (This)->lpVtbl -> get_TsiPlayerRegenerate(This,pVal) ) 

#define IAGCGameParameters_put_TsiPlayerRegenerate(This,newVal)	\
    ( (This)->lpVtbl -> put_TsiPlayerRegenerate(This,newVal) ) 

#define IAGCGameParameters_get_TsiNeutralRegenerate(This,pVal)	\
    ( (This)->lpVtbl -> get_TsiNeutralRegenerate(This,pVal) ) 

#define IAGCGameParameters_put_TsiNeutralRegenerate(This,newVal)	\
    ( (This)->lpVtbl -> put_TsiNeutralRegenerate(This,newVal) ) 

#define IAGCGameParameters_get_StartingMoney(This,pVal)	\
    ( (This)->lpVtbl -> get_StartingMoney(This,pVal) ) 

#define IAGCGameParameters_put_StartingMoney(This,newVal)	\
    ( (This)->lpVtbl -> put_StartingMoney(This,newVal) ) 

#define IAGCGameParameters_get_Lives(This,pVal)	\
    ( (This)->lpVtbl -> get_Lives(This,pVal) ) 

#define IAGCGameParameters_put_Lives(This,newVal)	\
    ( (This)->lpVtbl -> put_Lives(This,newVal) ) 

#define IAGCGameParameters_get_GoalTeamKills(This,pVal)	\
    ( (This)->lpVtbl -> get_GoalTeamKills(This,pVal) ) 

#define IAGCGameParameters_put_GoalTeamKills(This,newVal)	\
    ( (This)->lpVtbl -> put_GoalTeamKills(This,newVal) ) 

#define IAGCGameParameters_get_MapType(This,pVal)	\
    ( (This)->lpVtbl -> get_MapType(This,pVal) ) 

#define IAGCGameParameters_put_MapType(This,newVal)	\
    ( (This)->lpVtbl -> put_MapType(This,newVal) ) 

#define IAGCGameParameters_get_MapSize(This,pVal)	\
    ( (This)->lpVtbl -> get_MapSize(This,pVal) ) 

#define IAGCGameParameters_put_MapSize(This,newVal)	\
    ( (This)->lpVtbl -> put_MapSize(This,newVal) ) 

#define IAGCGameParameters_get_RandomEncounters(This,pVal)	\
    ( (This)->lpVtbl -> get_RandomEncounters(This,pVal) ) 

#define IAGCGameParameters_put_RandomEncounters(This,newVal)	\
    ( (This)->lpVtbl -> put_RandomEncounters(This,newVal) ) 

#define IAGCGameParameters_get_NeutralSectors(This,pVal)	\
    ( (This)->lpVtbl -> get_NeutralSectors(This,pVal) ) 

#define IAGCGameParameters_put_NeutralSectors(This,newVal)	\
    ( (This)->lpVtbl -> put_NeutralSectors(This,newVal) ) 

#define IAGCGameParameters_get_AlephPositioning(This,pVal)	\
    ( (This)->lpVtbl -> get_AlephPositioning(This,pVal) ) 

#define IAGCGameParameters_put_AlephPositioning(This,newVal)	\
    ( (This)->lpVtbl -> put_AlephPositioning(This,newVal) ) 

#define IAGCGameParameters_get_AlephsPerSector(This,pVal)	\
    ( (This)->lpVtbl -> get_AlephsPerSector(This,pVal) ) 

#define IAGCGameParameters_put_AlephsPerSector(This,newVal)	\
    ( (This)->lpVtbl -> put_AlephsPerSector(This,newVal) ) 

#define IAGCGameParameters_get_Teams(This,pVal)	\
    ( (This)->lpVtbl -> get_Teams(This,pVal) ) 

#define IAGCGameParameters_put_Teams(This,newVal)	\
    ( (This)->lpVtbl -> put_Teams(This,newVal) ) 

#define IAGCGameParameters_get_MinRank(This,pVal)	\
    ( (This)->lpVtbl -> get_MinRank(This,pVal) ) 

#define IAGCGameParameters_put_MinRank(This,newVal)	\
    ( (This)->lpVtbl -> put_MinRank(This,newVal) ) 

#define IAGCGameParameters_get_MaxRank(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxRank(This,pVal) ) 

#define IAGCGameParameters_put_MaxRank(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxRank(This,newVal) ) 

#define IAGCGameParameters_get_PlayerSectorAsteroids(This,pVal)	\
    ( (This)->lpVtbl -> get_PlayerSectorAsteroids(This,pVal) ) 

#define IAGCGameParameters_put_PlayerSectorAsteroids(This,newVal)	\
    ( (This)->lpVtbl -> put_PlayerSectorAsteroids(This,newVal) ) 

#define IAGCGameParameters_get_NeutralSectorAsteroids(This,pVal)	\
    ( (This)->lpVtbl -> get_NeutralSectorAsteroids(This,pVal) ) 

#define IAGCGameParameters_put_NeutralSectorAsteroids(This,newVal)	\
    ( (This)->lpVtbl -> put_NeutralSectorAsteroids(This,newVal) ) 

#define IAGCGameParameters_get_PlayerSectorTreasures(This,pVal)	\
    ( (This)->lpVtbl -> get_PlayerSectorTreasures(This,pVal) ) 

#define IAGCGameParameters_put_PlayerSectorTreasures(This,newVal)	\
    ( (This)->lpVtbl -> put_PlayerSectorTreasures(This,newVal) ) 

#define IAGCGameParameters_get_NeutralSectorTreasures(This,pVal)	\
    ( (This)->lpVtbl -> get_NeutralSectorTreasures(This,pVal) ) 

#define IAGCGameParameters_put_NeutralSectorTreasures(This,newVal)	\
    ( (This)->lpVtbl -> put_NeutralSectorTreasures(This,newVal) ) 

#define IAGCGameParameters_get_PlayerSectorTreasureRate(This,pVal)	\
    ( (This)->lpVtbl -> get_PlayerSectorTreasureRate(This,pVal) ) 

#define IAGCGameParameters_put_PlayerSectorTreasureRate(This,newVal)	\
    ( (This)->lpVtbl -> put_PlayerSectorTreasureRate(This,newVal) ) 

#define IAGCGameParameters_get_NeutralSectorTreasureRate(This,pVal)	\
    ( (This)->lpVtbl -> get_NeutralSectorTreasureRate(This,pVal) ) 

#define IAGCGameParameters_put_NeutralSectorTreasureRate(This,newVal)	\
    ( (This)->lpVtbl -> put_NeutralSectorTreasureRate(This,newVal) ) 

#define IAGCGameParameters_get_PlayerSectorMineableAsteroids(This,pVal)	\
    ( (This)->lpVtbl -> get_PlayerSectorMineableAsteroids(This,pVal) ) 

#define IAGCGameParameters_put_PlayerSectorMineableAsteroids(This,newVal)	\
    ( (This)->lpVtbl -> put_PlayerSectorMineableAsteroids(This,newVal) ) 

#define IAGCGameParameters_get_NeutralSectorMineableAsteroids(This,pVal)	\
    ( (This)->lpVtbl -> get_NeutralSectorMineableAsteroids(This,pVal) ) 

#define IAGCGameParameters_put_NeutralSectorMineableAsteroids(This,newVal)	\
    ( (This)->lpVtbl -> put_NeutralSectorMineableAsteroids(This,newVal) ) 

#define IAGCGameParameters_get_PlayerSectorSpecialAsteroids(This,pVal)	\
    ( (This)->lpVtbl -> get_PlayerSectorSpecialAsteroids(This,pVal) ) 

#define IAGCGameParameters_put_PlayerSectorSpecialAsteroids(This,newVal)	\
    ( (This)->lpVtbl -> put_PlayerSectorSpecialAsteroids(This,newVal) ) 

#define IAGCGameParameters_get_NeutralSectorSpecialAsteroids(This,pVal)	\
    ( (This)->lpVtbl -> get_NeutralSectorSpecialAsteroids(This,pVal) ) 

#define IAGCGameParameters_put_NeutralSectorSpecialAsteroids(This,newVal)	\
    ( (This)->lpVtbl -> put_NeutralSectorSpecialAsteroids(This,newVal) ) 

#define IAGCGameParameters_get_IGCStaticFile(This,pVal)	\
    ( (This)->lpVtbl -> get_IGCStaticFile(This,pVal) ) 

#define IAGCGameParameters_put_IGCStaticFile(This,newVal)	\
    ( (This)->lpVtbl -> put_IGCStaticFile(This,newVal) ) 

#define IAGCGameParameters_get_GamePassword(This,pVal)	\
    ( (This)->lpVtbl -> get_GamePassword(This,pVal) ) 

#define IAGCGameParameters_put_GamePassword(This,newVal)	\
    ( (This)->lpVtbl -> put_GamePassword(This,newVal) ) 

#define IAGCGameParameters_get_InvulnerableStations(This,pVal)	\
    ( (This)->lpVtbl -> get_InvulnerableStations(This,pVal) ) 

#define IAGCGameParameters_put_InvulnerableStations(This,newVal)	\
    ( (This)->lpVtbl -> put_InvulnerableStations(This,newVal) ) 

#define IAGCGameParameters_get_ShowMap(This,pVal)	\
    ( (This)->lpVtbl -> get_ShowMap(This,pVal) ) 

#define IAGCGameParameters_put_ShowMap(This,newVal)	\
    ( (This)->lpVtbl -> put_ShowMap(This,newVal) ) 

#define IAGCGameParameters_get_AllowDevelopments(This,pVal)	\
    ( (This)->lpVtbl -> get_AllowDevelopments(This,pVal) ) 

#define IAGCGameParameters_put_AllowDevelopments(This,newVal)	\
    ( (This)->lpVtbl -> put_AllowDevelopments(This,newVal) ) 

#define IAGCGameParameters_get_AllowDefections(This,pVal)	\
    ( (This)->lpVtbl -> get_AllowDefections(This,pVal) ) 

#define IAGCGameParameters_put_AllowDefections(This,newVal)	\
    ( (This)->lpVtbl -> put_AllowDefections(This,newVal) ) 

#define IAGCGameParameters_get_SquadGame(This,pVal)	\
    ( (This)->lpVtbl -> get_SquadGame(This,pVal) ) 

#define IAGCGameParameters_put_SquadGame(This,newVal)	\
    ( (This)->lpVtbl -> put_SquadGame(This,newVal) ) 

#define IAGCGameParameters_get_AllowFriendlyFire(This,pVal)	\
    ( (This)->lpVtbl -> get_AllowFriendlyFire(This,pVal) ) 

#define IAGCGameParameters_put_AllowFriendlyFire(This,newVal)	\
    ( (This)->lpVtbl -> put_AllowFriendlyFire(This,newVal) ) 

#define IAGCGameParameters_get_IGCcoreVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_IGCcoreVersion(This,pVal) ) 

#define IAGCGameParameters_get_GameLength(This,pVal)	\
    ( (This)->lpVtbl -> get_GameLength(This,pVal) ) 

#define IAGCGameParameters_put_GameLength(This,newVal)	\
    ( (This)->lpVtbl -> put_GameLength(This,newVal) ) 

#define IAGCGameParameters_get_He3Density(This,pVal)	\
    ( (This)->lpVtbl -> get_He3Density(This,pVal) ) 

#define IAGCGameParameters_put_He3Density(This,newVal)	\
    ( (This)->lpVtbl -> put_He3Density(This,newVal) ) 

#define IAGCGameParameters_get_KillPenalty(This,pVal)	\
    ( (This)->lpVtbl -> get_KillPenalty(This,pVal) ) 

#define IAGCGameParameters_put_KillPenalty(This,newVal)	\
    ( (This)->lpVtbl -> put_KillPenalty(This,newVal) ) 

#define IAGCGameParameters_get_KillReward(This,pVal)	\
    ( (This)->lpVtbl -> get_KillReward(This,pVal) ) 

#define IAGCGameParameters_put_KillReward(This,newVal)	\
    ( (This)->lpVtbl -> put_KillReward(This,newVal) ) 

#define IAGCGameParameters_get_EjectPenalty(This,pVal)	\
    ( (This)->lpVtbl -> get_EjectPenalty(This,pVal) ) 

#define IAGCGameParameters_put_EjectPenalty(This,newVal)	\
    ( (This)->lpVtbl -> put_EjectPenalty(This,newVal) ) 

#define IAGCGameParameters_get_EjectReward(This,pVal)	\
    ( (This)->lpVtbl -> get_EjectReward(This,pVal) ) 

#define IAGCGameParameters_put_EjectReward(This,newVal)	\
    ( (This)->lpVtbl -> put_EjectReward(This,newVal) ) 

#define IAGCGameParameters_get_TimeStart(This,pVal)	\
    ( (This)->lpVtbl -> get_TimeStart(This,pVal) ) 

#define IAGCGameParameters_get_TimeStartClock(This,pVal)	\
    ( (This)->lpVtbl -> get_TimeStartClock(This,pVal) ) 

#define IAGCGameParameters_get_GoalArtifactsCount(This,pVal)	\
    ( (This)->lpVtbl -> get_GoalArtifactsCount(This,pVal) ) 

#define IAGCGameParameters_put_GoalArtifactsCount(This,newVal)	\
    ( (This)->lpVtbl -> put_GoalArtifactsCount(This,newVal) ) 

#define IAGCGameParameters_get_AutoRestart(This,pVal)	\
    ( (This)->lpVtbl -> get_AutoRestart(This,pVal) ) 

#define IAGCGameParameters_put_AutoRestart(This,newVal)	\
    ( (This)->lpVtbl -> put_AutoRestart(This,newVal) ) 

#define IAGCGameParameters_get_DefaultCountdown(This,pVal)	\
    ( (This)->lpVtbl -> get_DefaultCountdown(This,pVal) ) 

#define IAGCGameParameters_put_DefaultCountdown(This,newVal)	\
    ( (This)->lpVtbl -> put_DefaultCountdown(This,newVal) ) 

#define IAGCGameParameters_get_InitialMinersPerTeam(This,pVal)	\
    ( (This)->lpVtbl -> get_InitialMinersPerTeam(This,pVal) ) 

#define IAGCGameParameters_put_InitialMinersPerTeam(This,newVal)	\
    ( (This)->lpVtbl -> put_InitialMinersPerTeam(This,newVal) ) 

#define IAGCGameParameters_get_MaxMinersPerTeam(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxMinersPerTeam(This,pVal) ) 

#define IAGCGameParameters_put_MaxMinersPerTeam(This,newVal)	\
    ( (This)->lpVtbl -> put_MaxMinersPerTeam(This,newVal) ) 

#define IAGCGameParameters_get_CustomMap(This,pVal)	\
    ( (This)->lpVtbl -> get_CustomMap(This,pVal) ) 

#define IAGCGameParameters_put_CustomMap(This,newVal)	\
    ( (This)->lpVtbl -> put_CustomMap(This,newVal) ) 

#define IAGCGameParameters_get_RestartCountdown(This,pVal)	\
    ( (This)->lpVtbl -> get_RestartCountdown(This,pVal) ) 

#define IAGCGameParameters_put_RestartCountdown(This,newVal)	\
    ( (This)->lpVtbl -> put_RestartCountdown(This,newVal) ) 

#define IAGCGameParameters_get_TotalMaxPlayers(This,pVal)	\
    ( (This)->lpVtbl -> get_TotalMaxPlayers(This,pVal) ) 

#define IAGCGameParameters_put_TotalMaxPlayers(This,newVal)	\
    ( (This)->lpVtbl -> put_TotalMaxPlayers(This,newVal) ) 

#define IAGCGameParameters_get_LockTeamSettings(This,pVal)	\
    ( (This)->lpVtbl -> get_LockTeamSettings(This,pVal) ) 

#define IAGCGameParameters_put_LockTeamSettings(This,newVal)	\
    ( (This)->lpVtbl -> put_LockTeamSettings(This,newVal) ) 

#define IAGCGameParameters_get_InvitationListID(This,pVal)	\
    ( (This)->lpVtbl -> get_InvitationListID(This,pVal) ) 

#define IAGCGameParameters_put_InvitationListID(This,newVal)	\
    ( (This)->lpVtbl -> put_InvitationListID(This,newVal) ) 

#define IAGCGameParameters_get_IsSquadGame(This,pVal)	\
    ( (This)->lpVtbl -> get_IsSquadGame(This,pVal) ) 

#define IAGCGameParameters_put_IsSquadGame(This,newVal)	\
    ( (This)->lpVtbl -> put_IsSquadGame(This,newVal) ) 

#define IAGCGameParameters_get_LockGameOpen(This,pVal)	\
    ( (This)->lpVtbl -> get_LockGameOpen(This,pVal) ) 

#define IAGCGameParameters_put_LockGameOpen(This,newVal)	\
    ( (This)->lpVtbl -> put_LockGameOpen(This,newVal) ) 

#define IAGCGameParameters_get_TeamName(This,iTeam,pVal)	\
    ( (This)->lpVtbl -> get_TeamName(This,iTeam,pVal) ) 

#define IAGCGameParameters_put_TeamName(This,iTeam,newVal)	\
    ( (This)->lpVtbl -> put_TeamName(This,iTeam,newVal) ) 

#define IAGCGameParameters_get_IsTechBitOverridden(This,iTeam,iBitID,pVal)	\
    ( (This)->lpVtbl -> get_IsTechBitOverridden(This,iTeam,iBitID,pVal) ) 

#define IAGCGameParameters_get_OverriddenTechBit(This,iTeam,iBitID,pVal)	\
    ( (This)->lpVtbl -> get_OverriddenTechBit(This,iTeam,iBitID,pVal) ) 

#define IAGCGameParameters_put_OverriddenTechBit(This,iTeam,iBitID,newVal)	\
    ( (This)->lpVtbl -> put_OverriddenTechBit(This,iTeam,iBitID,newVal) ) 

#define IAGCGameParameters_put_SetOverriddenTechBitRange(This,iTeam,iBitID_First,iBitID_Last,newVal)	\
    ( (This)->lpVtbl -> put_SetOverriddenTechBitRange(This,iTeam,iBitID_First,iBitID_Last,newVal) ) 

#define IAGCGameParameters_get_IsGoalFlags(This,pVal)	\
    ( (This)->lpVtbl -> get_IsGoalFlags(This,pVal) ) 

#define IAGCGameParameters_put_IsGoalFlags(This,newVal)	\
    ( (This)->lpVtbl -> put_IsGoalFlags(This,newVal) ) 

#define IAGCGameParameters_get_GoalFlagsCount(This,pVal)	\
    ( (This)->lpVtbl -> get_GoalFlagsCount(This,pVal) ) 

#define IAGCGameParameters_put_GoalFlagsCount(This,newVal)	\
    ( (This)->lpVtbl -> put_GoalFlagsCount(This,newVal) ) 

#define IAGCGameParameters_get_StoryText(This,pbstrStory)	\
    ( (This)->lpVtbl -> get_StoryText(This,pbstrStory) ) 

#define IAGCGameParameters_put_StoryText(This,bstrStory)	\
    ( (This)->lpVtbl -> put_StoryText(This,bstrStory) ) 

#define IAGCGameParameters_get_AllowEmptyTeams(This,pVal)	\
    ( (This)->lpVtbl -> get_AllowEmptyTeams(This,pVal) ) 

#define IAGCGameParameters_put_AllowEmptyTeams(This,newVal)	\
    ( (This)->lpVtbl -> put_AllowEmptyTeams(This,newVal) ) 

#define IAGCGameParameters_get_AutoStart(This,pVal)	\
    ( (This)->lpVtbl -> get_AutoStart(This,pVal) ) 

#define IAGCGameParameters_put_AutoStart(This,newVal)	\
    ( (This)->lpVtbl -> put_AutoStart(This,newVal) ) 

#define IAGCGameParameters_get_AllowRestart(This,pVal)	\
    ( (This)->lpVtbl -> get_AllowRestart(This,pVal) ) 

#define IAGCGameParameters_put_AllowRestart(This,newVal)	\
    ( (This)->lpVtbl -> put_AllowRestart(This,newVal) ) 

#define IAGCGameParameters_get_AllowShipyardPath(This,pVal)	\
    ( (This)->lpVtbl -> get_AllowShipyardPath(This,pVal) ) 

#define IAGCGameParameters_put_AllowShipyardPath(This,newVal)	\
    ( (This)->lpVtbl -> put_AllowShipyardPath(This,newVal) ) 

#define IAGCGameParameters_get_AllowSupremacyPath(This,pVal)	\
    ( (This)->lpVtbl -> get_AllowSupremacyPath(This,pVal) ) 

#define IAGCGameParameters_put_AllowSupremacyPath(This,newVal)	\
    ( (This)->lpVtbl -> put_AllowSupremacyPath(This,newVal) ) 

#define IAGCGameParameters_get_AllowTacticalPath(This,pVal)	\
    ( (This)->lpVtbl -> get_AllowTacticalPath(This,pVal) ) 

#define IAGCGameParameters_put_AllowTacticalPath(This,newVal)	\
    ( (This)->lpVtbl -> put_AllowTacticalPath(This,newVal) ) 

#define IAGCGameParameters_get_AllowExpansionPath(This,pVal)	\
    ( (This)->lpVtbl -> get_AllowExpansionPath(This,pVal) ) 

#define IAGCGameParameters_put_AllowExpansionPath(This,newVal)	\
    ( (This)->lpVtbl -> put_AllowExpansionPath(This,newVal) ) 

#define IAGCGameParameters_get_MaxImbalance(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxImbalance(This,pVal) ) 

#define IAGCGameParameters_put_MaxImbalance(This,Val)	\
    ( (This)->lpVtbl -> put_MaxImbalance(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_EjectPenalty_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ AGCMoney newVal);


void __RPC_STUB IAGCGameParameters_put_EjectPenalty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_EjectReward_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ AGCMoney *pVal);


void __RPC_STUB IAGCGameParameters_get_EjectReward_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_EjectReward_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ AGCMoney newVal);


void __RPC_STUB IAGCGameParameters_put_EjectReward_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_TimeStart_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IAGCGameParameters_get_TimeStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_TimeStartClock_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IAGCGameParameters_get_TimeStartClock_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_GoalArtifactsCount_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ short *pVal);


void __RPC_STUB IAGCGameParameters_get_GoalArtifactsCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_GoalArtifactsCount_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ short newVal);


void __RPC_STUB IAGCGameParameters_put_GoalArtifactsCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_AutoRestart_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAGCGameParameters_get_AutoRestart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_AutoRestart_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAGCGameParameters_put_AutoRestart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_DefaultCountdown_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAGCGameParameters_get_DefaultCountdown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_DefaultCountdown_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ float newVal);


void __RPC_STUB IAGCGameParameters_put_DefaultCountdown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_InitialMinersPerTeam_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ BYTE *pVal);


void __RPC_STUB IAGCGameParameters_get_InitialMinersPerTeam_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_InitialMinersPerTeam_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ BYTE newVal);


void __RPC_STUB IAGCGameParameters_put_InitialMinersPerTeam_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_MaxMinersPerTeam_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ BYTE *pVal);


void __RPC_STUB IAGCGameParameters_get_MaxMinersPerTeam_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_MaxMinersPerTeam_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ BYTE newVal);


void __RPC_STUB IAGCGameParameters_put_MaxMinersPerTeam_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_CustomMap_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAGCGameParameters_get_CustomMap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_CustomMap_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAGCGameParameters_put_CustomMap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_RestartCountdown_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ float *pVal);


void __RPC_STUB IAGCGameParameters_get_RestartCountdown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_RestartCountdown_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ float newVal);


void __RPC_STUB IAGCGameParameters_put_RestartCountdown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_TotalMaxPlayers_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ short *pVal);


void __RPC_STUB IAGCGameParameters_get_TotalMaxPlayers_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_TotalMaxPlayers_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ short newVal);


void __RPC_STUB IAGCGameParameters_put_TotalMaxPlayers_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_LockTeamSettings_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAGCGameParameters_get_LockTeamSettings_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_LockTeamSettings_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAGCGameParameters_put_LockTeamSettings_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_InvitationListID_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ int *pVal);


void __RPC_STUB IAGCGameParameters_get_InvitationListID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_InvitationListID_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ int newVal);


void __RPC_STUB IAGCGameParameters_put_InvitationListID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_IsSquadGame_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAGCGameParameters_get_IsSquadGame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_IsSquadGame_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAGCGameParameters_put_IsSquadGame_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_LockGameOpen_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAGCGameParameters_get_LockGameOpen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_LockGameOpen_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAGCGameParameters_put_LockGameOpen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_TeamName_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ short iTeam,
    /* [retval][out] */ BSTR *pVal);


void __RPC_STUB IAGCGameParameters_get_TeamName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_TeamName_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ short iTeam,
    /* [in] */ BSTR newVal);


void __RPC_STUB IAGCGameParameters_put_TeamName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_IsTechBitOverridden_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ short iTeam,
    /* [in] */ short iBitID,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAGCGameParameters_get_IsTechBitOverridden_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_OverriddenTechBit_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ short iTeam,
    /* [in] */ short iBitID,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAGCGameParameters_get_OverriddenTechBit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_OverriddenTechBit_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ short iTeam,
    /* [in] */ short iBitID,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAGCGameParameters_put_OverriddenTechBit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_SetOverriddenTechBitRange_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ short iTeam,
    /* [in] */ short iBitID_First,
    /* [in] */ short iBitID_Last,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAGCGameParameters_put_SetOverriddenTechBitRange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_IsGoalFlags_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAGCGameParameters_get_IsGoalFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_IsGoalFlags_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAGCGameParameters_put_IsGoalFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_GoalFlagsCount_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ short *pVal);


void __RPC_STUB IAGCGameParameters_get_GoalFlagsCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_GoalFlagsCount_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ short newVal);


void __RPC_STUB IAGCGameParameters_put_GoalFlagsCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_StoryText_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ BSTR *pbstrStory);


void __RPC_STUB IAGCGameParameters_get_StoryText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_StoryText_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ BSTR bstrStory);


void __RPC_STUB IAGCGameParameters_put_StoryText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_AllowEmptyTeams_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAGCGameParameters_get_AllowEmptyTeams_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_AllowEmptyTeams_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAGCGameParameters_put_AllowEmptyTeams_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_AutoStart_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAGCGameParameters_get_AutoStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_AutoStart_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAGCGameParameters_put_AutoStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_AllowRestart_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAGCGameParameters_get_AllowRestart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_AllowRestart_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAGCGameParameters_put_AllowRestart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_AllowShipyardPath_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAGCGameParameters_get_AllowShipyardPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_AllowShipyardPath_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAGCGameParameters_put_AllowShipyardPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_AllowSupremacyPath_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAGCGameParameters_get_AllowSupremacyPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_AllowSupremacyPath_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAGCGameParameters_put_AllowSupremacyPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_AllowTacticalPath_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAGCGameParameters_get_AllowTacticalPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_AllowTacticalPath_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAGCGameParameters_put_AllowTacticalPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_AllowExpansionPath_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IAGCGameParameters_get_AllowExpansionPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_AllowExpansionPath_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ VARIANT_BOOL newVal);


void __RPC_STUB IAGCGameParameters_put_AllowExpansionPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_get_MaxImbalance_Proxy( 
    IAGCGameParameters * This,
    /* [retval][out] */ short *pVal);


void __RPC_STUB IAGCGameParameters_get_MaxImbalance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput] */ HRESULT STDMETHODCALLTYPE IAGCGameParameters_put_MaxImbalance_Proxy( 
    IAGCGameParameters * This,
    /* [in] */ short Val);


void __RPC_STUB IAGCGameParameters_put_MaxImbalance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAGCGameParameters_INTERFACE_DEFINED__ */


#ifndef __IAGCCommand_INTERFACE_DEFINED__
#define __IAGCCommand_INTERFACE_DEFINED__

/* interface IAGCCommand */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7CDC82F6-FE9D-11d2-A50F-00C04F68DEB0")
    IAGCCommand : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Target( 
            /* [retval][out] */ BSTR *pbstrTarget) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Verb( 
            /* [retval][out] */ BSTR *pbstrVerb) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pbstrText) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCCommandVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCCommand * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCCommand * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCCommand * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCCommand * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCCommand * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCCommand * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCCommand * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommand, get_Target)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Target )( 
            IAGCCommand * This,
            /* [retval][out] */ BSTR *pbstrTarget);
        
        DECLSPEC_XFGVIRT(IAGCCommand, get_Verb)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Verb )( 
            IAGCCommand * This,
            /* [retval][out] */ BSTR *pbstrVerb);
        
        DECLSPEC_XFGVIRT(IAGCCommand, get_Text)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IAGCCommand * This,
            /* [retval][out] */ BSTR *pbstrText);
        
        END_INTERFACE
    } IAGCCommandVtbl;

    interface IAGCCommand
    {
        CONST_VTBL struct IAGCCommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCCommand_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCCommand_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCCommand_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCCommand_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCCommand_get_Target(This,pbstrTarget)	\
    ( (This)->lpVtbl -> get_Target(This,pbstrTarget) ) 

#define IAGCCommand_get_Verb(This,pbstrVerb)	\
    ( (This)->lpVtbl -> get_Verb(This,pbstrVerb) ) 

#define IAGCCommand_get_Text(This,pbstrText)	\
    ( (This)->lpVtbl -> get_Text(This,pbstrText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCCommand_INTERFACE_DEFINED__ */


#ifndef __IAGCCommandPrivate_INTERFACE_DEFINED__
#define __IAGCCommandPrivate_INTERFACE_DEFINED__

/* interface IAGCCommandPrivate */
/* [helpstring][uuid][nonextensible][unique][local][object][restricted][hidden] */ 


EXTERN_C const IID IID_IAGCCommandPrivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FD8B15CA-FF40-11d2-A50F-00C04F68DEB0")
    IAGCCommandPrivate : public IUnknown
    {
    public:
        virtual /* [helpstring] */ void STDMETHODCALLTYPE Init( 
            /* [in] */ LPCSTR pszTarget,
            /* [in] */ LPCSTR pszVerb) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCCommandPrivateVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCCommandPrivate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCCommandPrivate * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCCommandPrivate * This);
        
        DECLSPEC_XFGVIRT(IAGCCommandPrivate, Init)
        /* [helpstring] */ void ( STDMETHODCALLTYPE *Init )( 
            IAGCCommandPrivate * This,
            /* [in] */ LPCSTR pszTarget,
            /* [in] */ LPCSTR pszVerb);
        
        END_INTERFACE
    } IAGCCommandPrivateVtbl;

    interface IAGCCommandPrivate
    {
        CONST_VTBL struct IAGCCommandPrivateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCCommandPrivate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCCommandPrivate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCCommandPrivate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCCommandPrivate_Init(This,pszTarget,pszVerb)	\
    ( (This)->lpVtbl -> Init(This,pszTarget,pszVerb) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCCommandPrivate_INTERFACE_DEFINED__ */


#ifndef __IAGCVersionInfo_INTERFACE_DEFINED__
#define __IAGCVersionInfo_INTERFACE_DEFINED__

/* interface IAGCVersionInfo */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCVersionInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("160DA17D-C8D5-4352-9654-6E658A5A0887")
    IAGCVersionInfo : public IDispatch
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_FileName( 
            /* [in] */ BSTR bstrFileName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FileName( 
            /* [retval][out] */ BSTR *pbstrFileName) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FileVersionString( 
            /* [retval][out] */ BSTR *pbstrString) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FileVersionMSHigh( 
            /* [retval][out] */ WORD *pwMSHigh) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FileVersionMSLow( 
            /* [retval][out] */ WORD *pwMSLow) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FileVersionLSHigh( 
            /* [retval][out] */ WORD *pwLSHigh) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FileVersionLSLow( 
            /* [retval][out] */ WORD *pwLSLow) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FileBuildNumber( 
            /* [retval][out] */ WORD *pwBuildNumber) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ProductVersionString( 
            /* [retval][out] */ BSTR *pbstrString) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ProductVersionMSHigh( 
            /* [retval][out] */ WORD *pwMSHigh) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ProductVersionMSLow( 
            /* [retval][out] */ WORD *pwMSLow) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ProductVersionLSHigh( 
            /* [retval][out] */ WORD *pwLSHigh) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ProductVersionLSLow( 
            /* [retval][out] */ WORD *pwLSLow) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ProductBuildNumber( 
            /* [retval][out] */ WORD *pwBuildNumber) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDebug( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsInfoInferred( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsPatched( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsPreRelease( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsPrivateBuild( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsSpecialBuild( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetUnknown( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetDOS( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetOS216( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetOS232( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetNT( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetBase( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetWin16( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetPM16( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetPM32( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetWin32( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetDOSWin16( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetDOSWin32( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetOS216PM16( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetOS232PM32( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsTargetNTWin32( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsApp( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDll( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDriver( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsFont( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsVxd( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsStaticLib( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDriverUnknown( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDriverPrinter( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDriverKeyboard( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDriverLanguage( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDriverDisplay( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDriverMouse( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDriverNetwork( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDriverSystem( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDriverInstallable( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDriverSound( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDriverComm( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsDriverInputMethod( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsFontRaster( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsFontVector( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsFontTrueType( 
            /* [retval][out] */ VARIANT_BOOL *pFlag) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LanguageID( 
            /* [in] */ WORD wLangID) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LanguageID( 
            /* [retval][out] */ WORD *pwLangID) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_CodePage( 
            /* [in] */ WORD wCodePage) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CodePage( 
            /* [retval][out] */ WORD *pwCodePage) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Exists( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ VARIANT_BOOL *pbExists) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CompanyName( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FileDescription( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_FileVersion( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_InternalName( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_LegalCopyright( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OriginalFilename( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ProductName( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ProductVersion( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_SpecialBuild( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_OLESelfRegister( 
            /* [retval][out] */ BSTR *pbstrValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCVersionInfoVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCVersionInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCVersionInfo * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCVersionInfo * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCVersionInfo * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCVersionInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCVersionInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCVersionInfo * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, put_FileName)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FileName )( 
            IAGCVersionInfo * This,
            /* [in] */ BSTR bstrFileName);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_FileName)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileName )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ BSTR *pbstrFileName);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_FileVersionString)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileVersionString )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ BSTR *pbstrString);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_FileVersionMSHigh)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileVersionMSHigh )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ WORD *pwMSHigh);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_FileVersionMSLow)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileVersionMSLow )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ WORD *pwMSLow);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_FileVersionLSHigh)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileVersionLSHigh )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ WORD *pwLSHigh);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_FileVersionLSLow)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileVersionLSLow )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ WORD *pwLSLow);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_FileBuildNumber)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileBuildNumber )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ WORD *pwBuildNumber);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_ProductVersionString)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProductVersionString )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ BSTR *pbstrString);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_ProductVersionMSHigh)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProductVersionMSHigh )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ WORD *pwMSHigh);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_ProductVersionMSLow)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProductVersionMSLow )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ WORD *pwMSLow);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_ProductVersionLSHigh)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProductVersionLSHigh )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ WORD *pwLSHigh);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_ProductVersionLSLow)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProductVersionLSLow )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ WORD *pwLSLow);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_ProductBuildNumber)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProductBuildNumber )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ WORD *pwBuildNumber);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDebug)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDebug )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsInfoInferred)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInfoInferred )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsPatched)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPatched )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsPreRelease)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPreRelease )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsPrivateBuild)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPrivateBuild )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsSpecialBuild)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSpecialBuild )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetUnknown)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetUnknown )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetDOS)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetDOS )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetOS216)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetOS216 )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetOS232)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetOS232 )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetNT)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetNT )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetBase)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetBase )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetWin16)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetWin16 )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetPM16)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetPM16 )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetPM32)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetPM32 )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetWin32)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetWin32 )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetDOSWin16)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetDOSWin16 )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetDOSWin32)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetDOSWin32 )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetOS216PM16)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetOS216PM16 )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetOS232PM32)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetOS232PM32 )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsTargetNTWin32)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsTargetNTWin32 )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsApp)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsApp )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDll)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDll )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDriver)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDriver )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsFont)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFont )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsVxd)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsVxd )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsStaticLib)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsStaticLib )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDriverUnknown)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDriverUnknown )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDriverPrinter)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDriverPrinter )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDriverKeyboard)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDriverKeyboard )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDriverLanguage)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDriverLanguage )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDriverDisplay)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDriverDisplay )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDriverMouse)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDriverMouse )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDriverNetwork)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDriverNetwork )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDriverSystem)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDriverSystem )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDriverInstallable)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDriverInstallable )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDriverSound)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDriverSound )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDriverComm)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDriverComm )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsDriverInputMethod)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDriverInputMethod )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsFontRaster)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFontRaster )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsFontVector)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFontVector )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_IsFontTrueType)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFontTrueType )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pFlag);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, put_LanguageID)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LanguageID )( 
            IAGCVersionInfo * This,
            /* [in] */ WORD wLangID);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_LanguageID)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LanguageID )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ WORD *pwLangID);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, put_CodePage)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CodePage )( 
            IAGCVersionInfo * This,
            /* [in] */ WORD wCodePage);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_CodePage)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CodePage )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ WORD *pwCodePage);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_Exists)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exists )( 
            IAGCVersionInfo * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ VARIANT_BOOL *pbExists);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_Value)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IAGCVersionInfo * This,
            /* [in] */ BSTR bstrKey,
            /* [retval][out] */ BSTR *pbstrValue);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_CompanyName)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CompanyName )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_FileDescription)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileDescription )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_FileVersion)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileVersion )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_InternalName)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InternalName )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_LegalCopyright)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LegalCopyright )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_OriginalFilename)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OriginalFilename )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_ProductName)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProductName )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_ProductVersion)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProductVersion )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_SpecialBuild)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SpecialBuild )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        DECLSPEC_XFGVIRT(IAGCVersionInfo, get_OLESelfRegister)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OLESelfRegister )( 
            IAGCVersionInfo * This,
            /* [retval][out] */ BSTR *pbstrValue);
        
        END_INTERFACE
    } IAGCVersionInfoVtbl;

    interface IAGCVersionInfo
    {
        CONST_VTBL struct IAGCVersionInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCVersionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCVersionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCVersionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCVersionInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCVersionInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCVersionInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCVersionInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCVersionInfo_put_FileName(This,bstrFileName)	\
    ( (This)->lpVtbl -> put_FileName(This,bstrFileName) ) 

#define IAGCVersionInfo_get_FileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> get_FileName(This,pbstrFileName) ) 

#define IAGCVersionInfo_get_FileVersionString(This,pbstrString)	\
    ( (This)->lpVtbl -> get_FileVersionString(This,pbstrString) ) 

#define IAGCVersionInfo_get_FileVersionMSHigh(This,pwMSHigh)	\
    ( (This)->lpVtbl -> get_FileVersionMSHigh(This,pwMSHigh) ) 

#define IAGCVersionInfo_get_FileVersionMSLow(This,pwMSLow)	\
    ( (This)->lpVtbl -> get_FileVersionMSLow(This,pwMSLow) ) 

#define IAGCVersionInfo_get_FileVersionLSHigh(This,pwLSHigh)	\
    ( (This)->lpVtbl -> get_FileVersionLSHigh(This,pwLSHigh) ) 

#define IAGCVersionInfo_get_FileVersionLSLow(This,pwLSLow)	\
    ( (This)->lpVtbl -> get_FileVersionLSLow(This,pwLSLow) ) 

#define IAGCVersionInfo_get_FileBuildNumber(This,pwBuildNumber)	\
    ( (This)->lpVtbl -> get_FileBuildNumber(This,pwBuildNumber) ) 

#define IAGCVersionInfo_get_ProductVersionString(This,pbstrString)	\
    ( (This)->lpVtbl -> get_ProductVersionString(This,pbstrString) ) 

#define IAGCVersionInfo_get_ProductVersionMSHigh(This,pwMSHigh)	\
    ( (This)->lpVtbl -> get_ProductVersionMSHigh(This,pwMSHigh) ) 

#define IAGCVersionInfo_get_ProductVersionMSLow(This,pwMSLow)	\
    ( (This)->lpVtbl -> get_ProductVersionMSLow(This,pwMSLow) ) 

#define IAGCVersionInfo_get_ProductVersionLSHigh(This,pwLSHigh)	\
    ( (This)->lpVtbl -> get_ProductVersionLSHigh(This,pwLSHigh) ) 

#define IAGCVersionInfo_get_ProductVersionLSLow(This,pwLSLow)	\
    ( (This)->lpVtbl -> get_ProductVersionLSLow(This,pwLSLow) ) 

#define IAGCVersionInfo_get_ProductBuildNumber(This,pwBuildNumber)	\
    ( (This)->lpVtbl -> get_ProductBuildNumber(This,pwBuildNumber) ) 

#define IAGCVersionInfo_get_IsDebug(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDebug(This,pFlag) ) 

#define IAGCVersionInfo_get_IsInfoInferred(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsInfoInferred(This,pFlag) ) 

#define IAGCVersionInfo_get_IsPatched(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsPatched(This,pFlag) ) 

#define IAGCVersionInfo_get_IsPreRelease(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsPreRelease(This,pFlag) ) 

#define IAGCVersionInfo_get_IsPrivateBuild(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsPrivateBuild(This,pFlag) ) 

#define IAGCVersionInfo_get_IsSpecialBuild(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsSpecialBuild(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetUnknown(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetUnknown(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetDOS(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetDOS(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetOS216(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetOS216(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetOS232(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetOS232(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetNT(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetNT(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetBase(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetBase(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetWin16(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetWin16(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetPM16(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetPM16(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetPM32(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetPM32(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetWin32(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetWin32(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetDOSWin16(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetDOSWin16(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetDOSWin32(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetDOSWin32(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetOS216PM16(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetOS216PM16(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetOS232PM32(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetOS232PM32(This,pFlag) ) 

#define IAGCVersionInfo_get_IsTargetNTWin32(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsTargetNTWin32(This,pFlag) ) 

#define IAGCVersionInfo_get_IsApp(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsApp(This,pFlag) ) 

#define IAGCVersionInfo_get_IsDll(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDll(This,pFlag) ) 

#define IAGCVersionInfo_get_IsDriver(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDriver(This,pFlag) ) 

#define IAGCVersionInfo_get_IsFont(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsFont(This,pFlag) ) 

#define IAGCVersionInfo_get_IsVxd(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsVxd(This,pFlag) ) 

#define IAGCVersionInfo_get_IsStaticLib(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsStaticLib(This,pFlag) ) 

#define IAGCVersionInfo_get_IsDriverUnknown(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDriverUnknown(This,pFlag) ) 

#define IAGCVersionInfo_get_IsDriverPrinter(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDriverPrinter(This,pFlag) ) 

#define IAGCVersionInfo_get_IsDriverKeyboard(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDriverKeyboard(This,pFlag) ) 

#define IAGCVersionInfo_get_IsDriverLanguage(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDriverLanguage(This,pFlag) ) 

#define IAGCVersionInfo_get_IsDriverDisplay(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDriverDisplay(This,pFlag) ) 

#define IAGCVersionInfo_get_IsDriverMouse(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDriverMouse(This,pFlag) ) 

#define IAGCVersionInfo_get_IsDriverNetwork(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDriverNetwork(This,pFlag) ) 

#define IAGCVersionInfo_get_IsDriverSystem(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDriverSystem(This,pFlag) ) 

#define IAGCVersionInfo_get_IsDriverInstallable(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDriverInstallable(This,pFlag) ) 

#define IAGCVersionInfo_get_IsDriverSound(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDriverSound(This,pFlag) ) 

#define IAGCVersionInfo_get_IsDriverComm(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDriverComm(This,pFlag) ) 

#define IAGCVersionInfo_get_IsDriverInputMethod(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsDriverInputMethod(This,pFlag) ) 

#define IAGCVersionInfo_get_IsFontRaster(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsFontRaster(This,pFlag) ) 

#define IAGCVersionInfo_get_IsFontVector(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsFontVector(This,pFlag) ) 

#define IAGCVersionInfo_get_IsFontTrueType(This,pFlag)	\
    ( (This)->lpVtbl -> get_IsFontTrueType(This,pFlag) ) 

#define IAGCVersionInfo_put_LanguageID(This,wLangID)	\
    ( (This)->lpVtbl -> put_LanguageID(This,wLangID) ) 

#define IAGCVersionInfo_get_LanguageID(This,pwLangID)	\
    ( (This)->lpVtbl -> get_LanguageID(This,pwLangID) ) 

#define IAGCVersionInfo_put_CodePage(This,wCodePage)	\
    ( (This)->lpVtbl -> put_CodePage(This,wCodePage) ) 

#define IAGCVersionInfo_get_CodePage(This,pwCodePage)	\
    ( (This)->lpVtbl -> get_CodePage(This,pwCodePage) ) 

#define IAGCVersionInfo_get_Exists(This,bstrKey,pbExists)	\
    ( (This)->lpVtbl -> get_Exists(This,bstrKey,pbExists) ) 

#define IAGCVersionInfo_get_Value(This,bstrKey,pbstrValue)	\
    ( (This)->lpVtbl -> get_Value(This,bstrKey,pbstrValue) ) 

#define IAGCVersionInfo_get_CompanyName(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_CompanyName(This,pbstrValue) ) 

#define IAGCVersionInfo_get_FileDescription(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_FileDescription(This,pbstrValue) ) 

#define IAGCVersionInfo_get_FileVersion(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_FileVersion(This,pbstrValue) ) 

#define IAGCVersionInfo_get_InternalName(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_InternalName(This,pbstrValue) ) 

#define IAGCVersionInfo_get_LegalCopyright(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_LegalCopyright(This,pbstrValue) ) 

#define IAGCVersionInfo_get_OriginalFilename(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_OriginalFilename(This,pbstrValue) ) 

#define IAGCVersionInfo_get_ProductName(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ProductName(This,pbstrValue) ) 

#define IAGCVersionInfo_get_ProductVersion(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_ProductVersion(This,pbstrValue) ) 

#define IAGCVersionInfo_get_SpecialBuild(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_SpecialBuild(This,pbstrValue) ) 

#define IAGCVersionInfo_get_OLESelfRegister(This,pbstrValue)	\
    ( (This)->lpVtbl -> get_OLESelfRegister(This,pbstrValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCVersionInfo_INTERFACE_DEFINED__ */


#ifndef __IAGCDBParams_INTERFACE_DEFINED__
#define __IAGCDBParams_INTERFACE_DEFINED__

/* interface IAGCDBParams */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCDBParams;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("80E3B37A-936E-4dcc-A8AD-DD9658F20613")
    IAGCDBParams : public IDispatch
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectionString( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionString( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_TableName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TableName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCDBParamsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCDBParams * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCDBParams * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCDBParams * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCDBParams * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCDBParams * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCDBParams * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCDBParams * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCDBParams, put_ConnectionString)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionString )( 
            IAGCDBParams * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IAGCDBParams, get_ConnectionString)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionString )( 
            IAGCDBParams * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCDBParams, put_TableName)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TableName )( 
            IAGCDBParams * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IAGCDBParams, get_TableName)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TableName )( 
            IAGCDBParams * This,
            /* [retval][out] */ BSTR *pbstr);
        
        END_INTERFACE
    } IAGCDBParamsVtbl;

    interface IAGCDBParams
    {
        CONST_VTBL struct IAGCDBParamsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCDBParams_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCDBParams_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCDBParams_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCDBParams_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCDBParams_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCDBParams_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCDBParams_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCDBParams_put_ConnectionString(This,bstr)	\
    ( (This)->lpVtbl -> put_ConnectionString(This,bstr) ) 

#define IAGCDBParams_get_ConnectionString(This,pbstr)	\
    ( (This)->lpVtbl -> get_ConnectionString(This,pbstr) ) 

#define IAGCDBParams_put_TableName(This,bstr)	\
    ( (This)->lpVtbl -> put_TableName(This,bstr) ) 

#define IAGCDBParams_get_TableName(This,pbstr)	\
    ( (This)->lpVtbl -> get_TableName(This,pbstr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCDBParams_INTERFACE_DEFINED__ */


#ifndef __IAGCEventLogger_INTERFACE_DEFINED__
#define __IAGCEventLogger_INTERFACE_DEFINED__

/* interface IAGCEventLogger */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCEventLogger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("28755AA1-6391-4d37-A995-5AE387D0B610")
    IAGCEventLogger : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_EventList( 
            /* [retval][out] */ BSTR *pbstrEventListXML) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_NTEventLog( 
            /* [in] */ BSTR bstrComputer) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NTEventLog( 
            /* [retval][out] */ BSTR *pbstrComputer) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DBEventLog( 
            /* [in] */ IAGCDBParams *pDBParams) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DBEventLog( 
            /* [retval][out] */ IAGCDBParams **ppDBParams) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_EnabledNTEvents( 
            /* [in] */ IAGCEventIDRanges *pEvents) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EnabledNTEvents( 
            /* [retval][out] */ IAGCEventIDRanges **ppEvents) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_EnabledDBEvents( 
            /* [in] */ IAGCEventIDRanges *pEvents) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EnabledDBEvents( 
            /* [retval][out] */ IAGCEventIDRanges **ppEvents) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultEnabledNTEvents( 
            /* [retval][out] */ IAGCEventIDRanges **ppEvents) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DefaultEnabledDBEvents( 
            /* [retval][out] */ IAGCEventIDRanges **ppEvents) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCEventLoggerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCEventLogger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCEventLogger * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCEventLogger * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCEventLogger * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCEventLogger * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCEventLogger * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCEventLogger * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCEventLogger, get_EventList)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EventList )( 
            IAGCEventLogger * This,
            /* [retval][out] */ BSTR *pbstrEventListXML);
        
        DECLSPEC_XFGVIRT(IAGCEventLogger, put_NTEventLog)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NTEventLog )( 
            IAGCEventLogger * This,
            /* [in] */ BSTR bstrComputer);
        
        DECLSPEC_XFGVIRT(IAGCEventLogger, get_NTEventLog)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NTEventLog )( 
            IAGCEventLogger * This,
            /* [retval][out] */ BSTR *pbstrComputer);
        
        DECLSPEC_XFGVIRT(IAGCEventLogger, put_DBEventLog)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DBEventLog )( 
            IAGCEventLogger * This,
            /* [in] */ IAGCDBParams *pDBParams);
        
        DECLSPEC_XFGVIRT(IAGCEventLogger, get_DBEventLog)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DBEventLog )( 
            IAGCEventLogger * This,
            /* [retval][out] */ IAGCDBParams **ppDBParams);
        
        DECLSPEC_XFGVIRT(IAGCEventLogger, put_EnabledNTEvents)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnabledNTEvents )( 
            IAGCEventLogger * This,
            /* [in] */ IAGCEventIDRanges *pEvents);
        
        DECLSPEC_XFGVIRT(IAGCEventLogger, get_EnabledNTEvents)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnabledNTEvents )( 
            IAGCEventLogger * This,
            /* [retval][out] */ IAGCEventIDRanges **ppEvents);
        
        DECLSPEC_XFGVIRT(IAGCEventLogger, put_EnabledDBEvents)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnabledDBEvents )( 
            IAGCEventLogger * This,
            /* [in] */ IAGCEventIDRanges *pEvents);
        
        DECLSPEC_XFGVIRT(IAGCEventLogger, get_EnabledDBEvents)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnabledDBEvents )( 
            IAGCEventLogger * This,
            /* [retval][out] */ IAGCEventIDRanges **ppEvents);
        
        DECLSPEC_XFGVIRT(IAGCEventLogger, get_DefaultEnabledNTEvents)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultEnabledNTEvents )( 
            IAGCEventLogger * This,
            /* [retval][out] */ IAGCEventIDRanges **ppEvents);
        
        DECLSPEC_XFGVIRT(IAGCEventLogger, get_DefaultEnabledDBEvents)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultEnabledDBEvents )( 
            IAGCEventLogger * This,
            /* [retval][out] */ IAGCEventIDRanges **ppEvents);
        
        END_INTERFACE
    } IAGCEventLoggerVtbl;

    interface IAGCEventLogger
    {
        CONST_VTBL struct IAGCEventLoggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCEventLogger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCEventLogger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCEventLogger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCEventLogger_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCEventLogger_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCEventLogger_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCEventLogger_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCEventLogger_get_EventList(This,pbstrEventListXML)	\
    ( (This)->lpVtbl -> get_EventList(This,pbstrEventListXML) ) 

#define IAGCEventLogger_put_NTEventLog(This,bstrComputer)	\
    ( (This)->lpVtbl -> put_NTEventLog(This,bstrComputer) ) 

#define IAGCEventLogger_get_NTEventLog(This,pbstrComputer)	\
    ( (This)->lpVtbl -> get_NTEventLog(This,pbstrComputer) ) 

#define IAGCEventLogger_put_DBEventLog(This,pDBParams)	\
    ( (This)->lpVtbl -> put_DBEventLog(This,pDBParams) ) 

#define IAGCEventLogger_get_DBEventLog(This,ppDBParams)	\
    ( (This)->lpVtbl -> get_DBEventLog(This,ppDBParams) ) 

#define IAGCEventLogger_put_EnabledNTEvents(This,pEvents)	\
    ( (This)->lpVtbl -> put_EnabledNTEvents(This,pEvents) ) 

#define IAGCEventLogger_get_EnabledNTEvents(This,ppEvents)	\
    ( (This)->lpVtbl -> get_EnabledNTEvents(This,ppEvents) ) 

#define IAGCEventLogger_put_EnabledDBEvents(This,pEvents)	\
    ( (This)->lpVtbl -> put_EnabledDBEvents(This,pEvents) ) 

#define IAGCEventLogger_get_EnabledDBEvents(This,ppEvents)	\
    ( (This)->lpVtbl -> get_EnabledDBEvents(This,ppEvents) ) 

#define IAGCEventLogger_get_DefaultEnabledNTEvents(This,ppEvents)	\
    ( (This)->lpVtbl -> get_DefaultEnabledNTEvents(This,ppEvents) ) 

#define IAGCEventLogger_get_DefaultEnabledDBEvents(This,ppEvents)	\
    ( (This)->lpVtbl -> get_DefaultEnabledDBEvents(This,ppEvents) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCEventLogger_INTERFACE_DEFINED__ */


#ifndef __IAGCEventLoggerHook_INTERFACE_DEFINED__
#define __IAGCEventLoggerHook_INTERFACE_DEFINED__

/* interface IAGCEventLoggerHook */
/* [helpstring][uuid][nonextensible][unique][oleautomation][object] */ 


EXTERN_C const IID IID_IAGCEventLoggerHook;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E3A96B17-84AD-4785-B36B-F5B022473FFB")
    IAGCEventLoggerHook : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LogEvent( 
            /* [in] */ IAGCEvent *pEvent,
            /* [in] */ VARIANT_BOOL bSynchronous) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCEventLoggerHookVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCEventLoggerHook * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCEventLoggerHook * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCEventLoggerHook * This);
        
        DECLSPEC_XFGVIRT(IAGCEventLoggerHook, LogEvent)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LogEvent )( 
            IAGCEventLoggerHook * This,
            /* [in] */ IAGCEvent *pEvent,
            /* [in] */ VARIANT_BOOL bSynchronous);
        
        END_INTERFACE
    } IAGCEventLoggerHookVtbl;

    interface IAGCEventLoggerHook
    {
        CONST_VTBL struct IAGCEventLoggerHookVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCEventLoggerHook_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCEventLoggerHook_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCEventLoggerHook_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCEventLoggerHook_LogEvent(This,pEvent,bSynchronous)	\
    ( (This)->lpVtbl -> LogEvent(This,pEvent,bSynchronous) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCEventLoggerHook_INTERFACE_DEFINED__ */


#ifndef __IAGCEventLoggerPrivate_INTERFACE_DEFINED__
#define __IAGCEventLoggerPrivate_INTERFACE_DEFINED__

/* interface IAGCEventLoggerPrivate */
/* [helpstring][uuid][nonextensible][unique][oleautomation][object] */ 


EXTERN_C const IID IID_IAGCEventLoggerPrivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("264080C0-4D80-4a68-81D4-05B937E8FD3D")
    IAGCEventLoggerPrivate : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ BSTR bstrSourceApp,
            /* [in] */ BSTR bstrRegKey) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Terminate( void) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LoggingToNTEnabled( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LoggingToNTEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_LoggingToDBEnabled( 
            /* [in] */ VARIANT_BOOL bEnabled) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LoggingToDBEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pbEnabled) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_HookForNTLogging( 
            /* [in] */ IAGCEventLoggerHook *pHook) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HookForNTLogging( 
            /* [retval][out] */ IAGCEventLoggerHook **ppHook) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_HookForDBLogging( 
            /* [in] */ IAGCEventLoggerHook *pHook) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HookForDBLogging( 
            /* [retval][out] */ IAGCEventLoggerHook **ppHook) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCEventLoggerPrivateVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCEventLoggerPrivate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCEventLoggerPrivate * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCEventLoggerPrivate * This);
        
        DECLSPEC_XFGVIRT(IAGCEventLoggerPrivate, Initialize)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IAGCEventLoggerPrivate * This,
            /* [in] */ BSTR bstrSourceApp,
            /* [in] */ BSTR bstrRegKey);
        
        DECLSPEC_XFGVIRT(IAGCEventLoggerPrivate, Terminate)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Terminate )( 
            IAGCEventLoggerPrivate * This);
        
        DECLSPEC_XFGVIRT(IAGCEventLoggerPrivate, put_LoggingToNTEnabled)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LoggingToNTEnabled )( 
            IAGCEventLoggerPrivate * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        DECLSPEC_XFGVIRT(IAGCEventLoggerPrivate, get_LoggingToNTEnabled)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoggingToNTEnabled )( 
            IAGCEventLoggerPrivate * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        DECLSPEC_XFGVIRT(IAGCEventLoggerPrivate, put_LoggingToDBEnabled)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LoggingToDBEnabled )( 
            IAGCEventLoggerPrivate * This,
            /* [in] */ VARIANT_BOOL bEnabled);
        
        DECLSPEC_XFGVIRT(IAGCEventLoggerPrivate, get_LoggingToDBEnabled)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoggingToDBEnabled )( 
            IAGCEventLoggerPrivate * This,
            /* [retval][out] */ VARIANT_BOOL *pbEnabled);
        
        DECLSPEC_XFGVIRT(IAGCEventLoggerPrivate, put_HookForNTLogging)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HookForNTLogging )( 
            IAGCEventLoggerPrivate * This,
            /* [in] */ IAGCEventLoggerHook *pHook);
        
        DECLSPEC_XFGVIRT(IAGCEventLoggerPrivate, get_HookForNTLogging)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HookForNTLogging )( 
            IAGCEventLoggerPrivate * This,
            /* [retval][out] */ IAGCEventLoggerHook **ppHook);
        
        DECLSPEC_XFGVIRT(IAGCEventLoggerPrivate, put_HookForDBLogging)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HookForDBLogging )( 
            IAGCEventLoggerPrivate * This,
            /* [in] */ IAGCEventLoggerHook *pHook);
        
        DECLSPEC_XFGVIRT(IAGCEventLoggerPrivate, get_HookForDBLogging)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HookForDBLogging )( 
            IAGCEventLoggerPrivate * This,
            /* [retval][out] */ IAGCEventLoggerHook **ppHook);
        
        END_INTERFACE
    } IAGCEventLoggerPrivateVtbl;

    interface IAGCEventLoggerPrivate
    {
        CONST_VTBL struct IAGCEventLoggerPrivateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCEventLoggerPrivate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCEventLoggerPrivate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCEventLoggerPrivate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCEventLoggerPrivate_Initialize(This,bstrSourceApp,bstrRegKey)	\
    ( (This)->lpVtbl -> Initialize(This,bstrSourceApp,bstrRegKey) ) 

#define IAGCEventLoggerPrivate_Terminate(This)	\
    ( (This)->lpVtbl -> Terminate(This) ) 

#define IAGCEventLoggerPrivate_put_LoggingToNTEnabled(This,bEnabled)	\
    ( (This)->lpVtbl -> put_LoggingToNTEnabled(This,bEnabled) ) 

#define IAGCEventLoggerPrivate_get_LoggingToNTEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_LoggingToNTEnabled(This,pbEnabled) ) 

#define IAGCEventLoggerPrivate_put_LoggingToDBEnabled(This,bEnabled)	\
    ( (This)->lpVtbl -> put_LoggingToDBEnabled(This,bEnabled) ) 

#define IAGCEventLoggerPrivate_get_LoggingToDBEnabled(This,pbEnabled)	\
    ( (This)->lpVtbl -> get_LoggingToDBEnabled(This,pbEnabled) ) 

#define IAGCEventLoggerPrivate_put_HookForNTLogging(This,pHook)	\
    ( (This)->lpVtbl -> put_HookForNTLogging(This,pHook) ) 

#define IAGCEventLoggerPrivate_get_HookForNTLogging(This,ppHook)	\
    ( (This)->lpVtbl -> get_HookForNTLogging(This,ppHook) ) 

#define IAGCEventLoggerPrivate_put_HookForDBLogging(This,pHook)	\
    ( (This)->lpVtbl -> put_HookForDBLogging(This,pHook) ) 

#define IAGCEventLoggerPrivate_get_HookForDBLogging(This,ppHook)	\
    ( (This)->lpVtbl -> get_HookForDBLogging(This,ppHook) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCEventLoggerPrivate_INTERFACE_DEFINED__ */


#ifndef __IAGCRangePrivate_INTERFACE_DEFINED__
#define __IAGCRangePrivate_INTERFACE_DEFINED__

/* interface IAGCRangePrivate */
/* [helpstring][uuid][nonextensible][unique][local][object][restricted][hidden] */ 


EXTERN_C const IID IID_IAGCRangePrivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AD411305-E114-4632-879C-EAE2E8810179")
    IAGCRangePrivate : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitFromRange( 
            /* [in] */ const void *pvRange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CopyRangeTo( 
            /* [out][in] */ void *pvRange) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCRangePrivateVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCRangePrivate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCRangePrivate * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCRangePrivate * This);
        
        DECLSPEC_XFGVIRT(IAGCRangePrivate, InitFromRange)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitFromRange )( 
            IAGCRangePrivate * This,
            /* [in] */ const void *pvRange);
        
        DECLSPEC_XFGVIRT(IAGCRangePrivate, CopyRangeTo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CopyRangeTo )( 
            IAGCRangePrivate * This,
            /* [out][in] */ void *pvRange);
        
        END_INTERFACE
    } IAGCRangePrivateVtbl;

    interface IAGCRangePrivate
    {
        CONST_VTBL struct IAGCRangePrivateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCRangePrivate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCRangePrivate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCRangePrivate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCRangePrivate_InitFromRange(This,pvRange)	\
    ( (This)->lpVtbl -> InitFromRange(This,pvRange) ) 

#define IAGCRangePrivate_CopyRangeTo(This,pvRange)	\
    ( (This)->lpVtbl -> CopyRangeTo(This,pvRange) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCRangePrivate_INTERFACE_DEFINED__ */


#ifndef __IAGCRangesPrivate_INTERFACE_DEFINED__
#define __IAGCRangesPrivate_INTERFACE_DEFINED__

/* interface IAGCRangesPrivate */
/* [helpstring][uuid][nonextensible][unique][local][object][restricted][hidden] */ 


EXTERN_C const IID IID_IAGCRangesPrivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BC666227-D3D2-4387-9341-05D1C9ED3D59")
    IAGCRangesPrivate : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE InitFromRanges( 
            /* [in] */ const void *pvRanges) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CopyRangesTo( 
            /* [out][in] */ void *pvRanges) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCRangesPrivateVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCRangesPrivate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCRangesPrivate * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCRangesPrivate * This);
        
        DECLSPEC_XFGVIRT(IAGCRangesPrivate, InitFromRanges)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitFromRanges )( 
            IAGCRangesPrivate * This,
            /* [in] */ const void *pvRanges);
        
        DECLSPEC_XFGVIRT(IAGCRangesPrivate, CopyRangesTo)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CopyRangesTo )( 
            IAGCRangesPrivate * This,
            /* [out][in] */ void *pvRanges);
        
        END_INTERFACE
    } IAGCRangesPrivateVtbl;

    interface IAGCRangesPrivate
    {
        CONST_VTBL struct IAGCRangesPrivateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCRangesPrivate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCRangesPrivate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCRangesPrivate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCRangesPrivate_InitFromRanges(This,pvRanges)	\
    ( (This)->lpVtbl -> InitFromRanges(This,pvRanges) ) 

#define IAGCRangesPrivate_CopyRangesTo(This,pvRanges)	\
    ( (This)->lpVtbl -> CopyRangesTo(This,pvRanges) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCRangesPrivate_INTERFACE_DEFINED__ */


#ifndef __IAGCEventIDRange_INTERFACE_DEFINED__
#define __IAGCEventIDRange_INTERFACE_DEFINED__

/* interface IAGCEventIDRange */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCEventIDRange;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0AA7A82F-FCA5-4671-869F-0033A7573D30")
    IAGCEventIDRange : public IDispatch
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayString( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayString( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ AGCEventID lower,
            /* [in] */ AGCEventID upper) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Lower( 
            /* [retval][out] */ AGCEventID *pValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Upper( 
            /* [retval][out] */ AGCEventID *pValue) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty( 
            /* [retval][out] */ VARIANT_BOOL *pbIsEmpty) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IntersectsWithValue( 
            /* [in] */ AGCEventID value,
            /* [retval][out] */ VARIANT_BOOL *pbIntersects) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IntersectsWithRangeValues( 
            /* [in] */ AGCEventID value1,
            /* [in] */ AGCEventID value2,
            /* [retval][out] */ VARIANT_BOOL *pbIntersects) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IntersectsWithRange( 
            /* [in] */ IAGCEventIDRange *pRange,
            /* [retval][out] */ VARIANT_BOOL *pbIntersects) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCEventIDRangeVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCEventIDRange * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCEventIDRange * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCEventIDRange * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCEventIDRange * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCEventIDRange * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCEventIDRange * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCEventIDRange * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRange, put_DisplayString)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayString )( 
            IAGCEventIDRange * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRange, get_DisplayString)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayString )( 
            IAGCEventIDRange * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRange, Init)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IAGCEventIDRange * This,
            /* [in] */ AGCEventID lower,
            /* [in] */ AGCEventID upper);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRange, get_Lower)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Lower )( 
            IAGCEventIDRange * This,
            /* [retval][out] */ AGCEventID *pValue);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRange, get_Upper)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Upper )( 
            IAGCEventIDRange * This,
            /* [retval][out] */ AGCEventID *pValue);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRange, get_IsEmpty)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEmpty )( 
            IAGCEventIDRange * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsEmpty);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRange, get_IntersectsWithValue)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IntersectsWithValue )( 
            IAGCEventIDRange * This,
            /* [in] */ AGCEventID value,
            /* [retval][out] */ VARIANT_BOOL *pbIntersects);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRange, get_IntersectsWithRangeValues)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IntersectsWithRangeValues )( 
            IAGCEventIDRange * This,
            /* [in] */ AGCEventID value1,
            /* [in] */ AGCEventID value2,
            /* [retval][out] */ VARIANT_BOOL *pbIntersects);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRange, get_IntersectsWithRange)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IntersectsWithRange )( 
            IAGCEventIDRange * This,
            /* [in] */ IAGCEventIDRange *pRange,
            /* [retval][out] */ VARIANT_BOOL *pbIntersects);
        
        END_INTERFACE
    } IAGCEventIDRangeVtbl;

    interface IAGCEventIDRange
    {
        CONST_VTBL struct IAGCEventIDRangeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCEventIDRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCEventIDRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCEventIDRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCEventIDRange_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCEventIDRange_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCEventIDRange_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCEventIDRange_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCEventIDRange_put_DisplayString(This,bstr)	\
    ( (This)->lpVtbl -> put_DisplayString(This,bstr) ) 

#define IAGCEventIDRange_get_DisplayString(This,pbstr)	\
    ( (This)->lpVtbl -> get_DisplayString(This,pbstr) ) 

#define IAGCEventIDRange_Init(This,lower,upper)	\
    ( (This)->lpVtbl -> Init(This,lower,upper) ) 

#define IAGCEventIDRange_get_Lower(This,pValue)	\
    ( (This)->lpVtbl -> get_Lower(This,pValue) ) 

#define IAGCEventIDRange_get_Upper(This,pValue)	\
    ( (This)->lpVtbl -> get_Upper(This,pValue) ) 

#define IAGCEventIDRange_get_IsEmpty(This,pbIsEmpty)	\
    ( (This)->lpVtbl -> get_IsEmpty(This,pbIsEmpty) ) 

#define IAGCEventIDRange_get_IntersectsWithValue(This,value,pbIntersects)	\
    ( (This)->lpVtbl -> get_IntersectsWithValue(This,value,pbIntersects) ) 

#define IAGCEventIDRange_get_IntersectsWithRangeValues(This,value1,value2,pbIntersects)	\
    ( (This)->lpVtbl -> get_IntersectsWithRangeValues(This,value1,value2,pbIntersects) ) 

#define IAGCEventIDRange_get_IntersectsWithRange(This,pRange,pbIntersects)	\
    ( (This)->lpVtbl -> get_IntersectsWithRange(This,pRange,pbIntersects) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCEventIDRange_INTERFACE_DEFINED__ */


#ifndef __IAGCEventIDRanges_INTERFACE_DEFINED__
#define __IAGCEventIDRanges_INTERFACE_DEFINED__

/* interface IAGCEventIDRanges */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCEventIDRanges;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("481B5D73-C1C4-4936-93C6-C4754F10D497")
    IAGCEventIDRanges : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [helpstring][id][restricted][hidden][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppunkEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCEventIDRange **ppRange) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayString( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DisplayString( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddByValues( 
            /* [in] */ AGCEventID value1,
            /* [in] */ AGCEventID value2) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IAGCEventIDRange *pRange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveByValues( 
            /* [in] */ AGCEventID value1,
            /* [in] */ AGCEventID value2) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IAGCEventIDRange *pRange) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IntersectsWithValue( 
            /* [in] */ AGCEventID value,
            /* [retval][out] */ VARIANT_BOOL *pbIntersects) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IntersectsWithRangeValues( 
            /* [in] */ AGCEventID value1,
            /* [in] */ AGCEventID value2,
            /* [retval][out] */ VARIANT_BOOL *pbIntersects) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IntersectsWithRange( 
            /* [in] */ IAGCEventIDRange *pRange,
            /* [retval][out] */ VARIANT_BOOL *pbIntersects) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCEventIDRangesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCEventIDRanges * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCEventIDRanges * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCEventIDRanges * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCEventIDRanges * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCEventIDRanges * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCEventIDRanges * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCEventIDRanges * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRanges, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAGCEventIDRanges * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRanges, get__NewEnum)
        /* [helpstring][id][restricted][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAGCEventIDRanges * This,
            /* [retval][out] */ IUnknown **ppunkEnum);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRanges, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAGCEventIDRanges * This,
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCEventIDRange **ppRange);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRanges, put_DisplayString)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayString )( 
            IAGCEventIDRanges * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRanges, get_DisplayString)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayString )( 
            IAGCEventIDRanges * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRanges, AddByValues)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddByValues )( 
            IAGCEventIDRanges * This,
            /* [in] */ AGCEventID value1,
            /* [in] */ AGCEventID value2);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRanges, Add)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IAGCEventIDRanges * This,
            /* [in] */ IAGCEventIDRange *pRange);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRanges, RemoveByValues)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveByValues )( 
            IAGCEventIDRanges * This,
            /* [in] */ AGCEventID value1,
            /* [in] */ AGCEventID value2);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRanges, Remove)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAGCEventIDRanges * This,
            /* [in] */ IAGCEventIDRange *pRange);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRanges, RemoveAll)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            IAGCEventIDRanges * This);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRanges, get_IntersectsWithValue)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IntersectsWithValue )( 
            IAGCEventIDRanges * This,
            /* [in] */ AGCEventID value,
            /* [retval][out] */ VARIANT_BOOL *pbIntersects);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRanges, get_IntersectsWithRangeValues)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IntersectsWithRangeValues )( 
            IAGCEventIDRanges * This,
            /* [in] */ AGCEventID value1,
            /* [in] */ AGCEventID value2,
            /* [retval][out] */ VARIANT_BOOL *pbIntersects);
        
        DECLSPEC_XFGVIRT(IAGCEventIDRanges, get_IntersectsWithRange)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IntersectsWithRange )( 
            IAGCEventIDRanges * This,
            /* [in] */ IAGCEventIDRange *pRange,
            /* [retval][out] */ VARIANT_BOOL *pbIntersects);
        
        END_INTERFACE
    } IAGCEventIDRangesVtbl;

    interface IAGCEventIDRanges
    {
        CONST_VTBL struct IAGCEventIDRangesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCEventIDRanges_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCEventIDRanges_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCEventIDRanges_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCEventIDRanges_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCEventIDRanges_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCEventIDRanges_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCEventIDRanges_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCEventIDRanges_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IAGCEventIDRanges_get__NewEnum(This,ppunkEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunkEnum) ) 

#define IAGCEventIDRanges_get_Item(This,pvIndex,ppRange)	\
    ( (This)->lpVtbl -> get_Item(This,pvIndex,ppRange) ) 

#define IAGCEventIDRanges_put_DisplayString(This,bstr)	\
    ( (This)->lpVtbl -> put_DisplayString(This,bstr) ) 

#define IAGCEventIDRanges_get_DisplayString(This,pbstr)	\
    ( (This)->lpVtbl -> get_DisplayString(This,pbstr) ) 

#define IAGCEventIDRanges_AddByValues(This,value1,value2)	\
    ( (This)->lpVtbl -> AddByValues(This,value1,value2) ) 

#define IAGCEventIDRanges_Add(This,pRange)	\
    ( (This)->lpVtbl -> Add(This,pRange) ) 

#define IAGCEventIDRanges_RemoveByValues(This,value1,value2)	\
    ( (This)->lpVtbl -> RemoveByValues(This,value1,value2) ) 

#define IAGCEventIDRanges_Remove(This,pRange)	\
    ( (This)->lpVtbl -> Remove(This,pRange) ) 

#define IAGCEventIDRanges_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define IAGCEventIDRanges_get_IntersectsWithValue(This,value,pbIntersects)	\
    ( (This)->lpVtbl -> get_IntersectsWithValue(This,value,pbIntersects) ) 

#define IAGCEventIDRanges_get_IntersectsWithRangeValues(This,value1,value2,pbIntersects)	\
    ( (This)->lpVtbl -> get_IntersectsWithRangeValues(This,value1,value2,pbIntersects) ) 

#define IAGCEventIDRanges_get_IntersectsWithRange(This,pRange,pbIntersects)	\
    ( (This)->lpVtbl -> get_IntersectsWithRange(This,pRange,pbIntersects) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCEventIDRanges_INTERFACE_DEFINED__ */


#ifndef __ITCCollection_INTERFACE_DEFINED__
#define __ITCCollection_INTERFACE_DEFINED__

/* interface ITCCollection */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_ITCCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B1935981-D27B-11d2-9646-00C04F68DEB0")
    ITCCollection : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [helpstring][id][restricted][hidden][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppunkEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITCCollectionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITCCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITCCollection * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITCCollection * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITCCollection * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITCCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITCCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITCCollection * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ITCCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITCCollection * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(ITCCollection, get__NewEnum)
        /* [helpstring][id][restricted][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ITCCollection * This,
            /* [retval][out] */ IUnknown **ppunkEnum);
        
        END_INTERFACE
    } ITCCollectionVtbl;

    interface ITCCollection
    {
        CONST_VTBL struct ITCCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITCCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITCCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITCCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITCCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITCCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITCCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITCCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITCCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ITCCollection_get__NewEnum(This,ppunkEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunkEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITCCollection_INTERFACE_DEFINED__ */


#ifndef __ITCStrings_INTERFACE_DEFINED__
#define __ITCStrings_INTERFACE_DEFINED__

/* interface ITCStrings */
/* [helpstring][uuid][unique][dual][object] */ 


EXTERN_C const IID IID_ITCStrings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C04322E0-CB3B-11d2-9646-00C04F68DEB0")
    ITCStrings : public ITCCollection
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ VARIANT *pvIndex) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveAll( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddDelimited( 
            /* [in] */ BSTR bstrDelimiter,
            /* [in] */ BSTR bstrStrings) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_DelimitedItems( 
            /* [in] */ BSTR bstrDelimiter,
            /* [retval][out] */ BSTR *pbstrStrings) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddStrings( 
            /* [in] */ ITCStrings *pStrings) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITCStringsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITCStrings * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITCStrings * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITCStrings * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITCStrings * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITCStrings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITCStrings * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITCStrings * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ITCCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITCStrings * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(ITCCollection, get__NewEnum)
        /* [helpstring][id][restricted][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ITCStrings * This,
            /* [retval][out] */ IUnknown **ppunkEnum);
        
        DECLSPEC_XFGVIRT(ITCStrings, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ITCStrings * This,
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(ITCStrings, Add)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ITCStrings * This,
            /* [in] */ BSTR bstr);
        
        DECLSPEC_XFGVIRT(ITCStrings, Remove)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ITCStrings * This,
            /* [in] */ VARIANT *pvIndex);
        
        DECLSPEC_XFGVIRT(ITCStrings, RemoveAll)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveAll )( 
            ITCStrings * This);
        
        DECLSPEC_XFGVIRT(ITCStrings, AddDelimited)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddDelimited )( 
            ITCStrings * This,
            /* [in] */ BSTR bstrDelimiter,
            /* [in] */ BSTR bstrStrings);
        
        DECLSPEC_XFGVIRT(ITCStrings, get_DelimitedItems)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DelimitedItems )( 
            ITCStrings * This,
            /* [in] */ BSTR bstrDelimiter,
            /* [retval][out] */ BSTR *pbstrStrings);
        
        DECLSPEC_XFGVIRT(ITCStrings, AddStrings)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddStrings )( 
            ITCStrings * This,
            /* [in] */ ITCStrings *pStrings);
        
        END_INTERFACE
    } ITCStringsVtbl;

    interface ITCStrings
    {
        CONST_VTBL struct ITCStringsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITCStrings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITCStrings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITCStrings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITCStrings_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITCStrings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITCStrings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITCStrings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITCStrings_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ITCStrings_get__NewEnum(This,ppunkEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunkEnum) ) 


#define ITCStrings_get_Item(This,pvIndex,pbstr)	\
    ( (This)->lpVtbl -> get_Item(This,pvIndex,pbstr) ) 

#define ITCStrings_Add(This,bstr)	\
    ( (This)->lpVtbl -> Add(This,bstr) ) 

#define ITCStrings_Remove(This,pvIndex)	\
    ( (This)->lpVtbl -> Remove(This,pvIndex) ) 

#define ITCStrings_RemoveAll(This)	\
    ( (This)->lpVtbl -> RemoveAll(This) ) 

#define ITCStrings_AddDelimited(This,bstrDelimiter,bstrStrings)	\
    ( (This)->lpVtbl -> AddDelimited(This,bstrDelimiter,bstrStrings) ) 

#define ITCStrings_get_DelimitedItems(This,bstrDelimiter,pbstrStrings)	\
    ( (This)->lpVtbl -> get_DelimitedItems(This,bstrDelimiter,pbstrStrings) ) 

#define ITCStrings_AddStrings(This,pStrings)	\
    ( (This)->lpVtbl -> AddStrings(This,pStrings) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITCStrings_INTERFACE_DEFINED__ */


#ifndef __ITCPropBagOnRegKey_INTERFACE_DEFINED__
#define __ITCPropBagOnRegKey_INTERFACE_DEFINED__

/* interface ITCPropBagOnRegKey */
/* [helpstring][uuid][unique][dual][object] */ 


EXTERN_C const IID IID_ITCPropBagOnRegKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8962E242-CD81-11d2-9646-00C04F68DEB0")
    ITCPropBagOnRegKey : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateKey( 
            /* [in] */ BSTR bstrRegKey,
            /* [in] */ VARIANT_BOOL bReadOnly) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OpenKey( 
            /* [in] */ BSTR bstrRegKey,
            /* [in] */ VARIANT_BOOL bReadOnly) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateObject( 
            /* [retval][out] */ IUnknown **ppunkObj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateLocalObject( 
            /* [retval][out] */ IUnknown **ppunkObj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateRemoteObject( 
            /* [in] */ BSTR bstrServer,
            /* [retval][out] */ IUnknown **ppunkObj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadObject( 
            /* [in] */ IUnknown *punkObj) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SaveObject( 
            /* [in] */ IUnknown *punkObj,
            /* [defaultvalue][in] */ VARIANT_BOOL bClearDirty = 0,
            /* [defaultvalue][in] */ VARIANT_BOOL bSaveAllProperties = -1,
            /* [defaultvalue][in] */ VARIANT_BOOL bSaveCreationInfo = -1) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Server( 
            /* [in] */ BSTR bstrServer) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Server( 
            /* [retval][out] */ BSTR *pbstrServer) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_ObjectCLSID( 
            /* [retval][out] */ BSTR *pbstrCLSID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITCPropBagOnRegKeyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITCPropBagOnRegKey * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITCPropBagOnRegKey * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITCPropBagOnRegKey * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITCPropBagOnRegKey * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITCPropBagOnRegKey * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITCPropBagOnRegKey * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITCPropBagOnRegKey * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ITCPropBagOnRegKey, CreateKey)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateKey )( 
            ITCPropBagOnRegKey * This,
            /* [in] */ BSTR bstrRegKey,
            /* [in] */ VARIANT_BOOL bReadOnly);
        
        DECLSPEC_XFGVIRT(ITCPropBagOnRegKey, OpenKey)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenKey )( 
            ITCPropBagOnRegKey * This,
            /* [in] */ BSTR bstrRegKey,
            /* [in] */ VARIANT_BOOL bReadOnly);
        
        DECLSPEC_XFGVIRT(ITCPropBagOnRegKey, CreateObject)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateObject )( 
            ITCPropBagOnRegKey * This,
            /* [retval][out] */ IUnknown **ppunkObj);
        
        DECLSPEC_XFGVIRT(ITCPropBagOnRegKey, CreateLocalObject)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateLocalObject )( 
            ITCPropBagOnRegKey * This,
            /* [retval][out] */ IUnknown **ppunkObj);
        
        DECLSPEC_XFGVIRT(ITCPropBagOnRegKey, CreateRemoteObject)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateRemoteObject )( 
            ITCPropBagOnRegKey * This,
            /* [in] */ BSTR bstrServer,
            /* [retval][out] */ IUnknown **ppunkObj);
        
        DECLSPEC_XFGVIRT(ITCPropBagOnRegKey, LoadObject)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadObject )( 
            ITCPropBagOnRegKey * This,
            /* [in] */ IUnknown *punkObj);
        
        DECLSPEC_XFGVIRT(ITCPropBagOnRegKey, SaveObject)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SaveObject )( 
            ITCPropBagOnRegKey * This,
            /* [in] */ IUnknown *punkObj,
            /* [defaultvalue][in] */ VARIANT_BOOL bClearDirty,
            /* [defaultvalue][in] */ VARIANT_BOOL bSaveAllProperties,
            /* [defaultvalue][in] */ VARIANT_BOOL bSaveCreationInfo);
        
        DECLSPEC_XFGVIRT(ITCPropBagOnRegKey, put_Server)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            ITCPropBagOnRegKey * This,
            /* [in] */ BSTR bstrServer);
        
        DECLSPEC_XFGVIRT(ITCPropBagOnRegKey, get_Server)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            ITCPropBagOnRegKey * This,
            /* [retval][out] */ BSTR *pbstrServer);
        
        DECLSPEC_XFGVIRT(ITCPropBagOnRegKey, get_ObjectCLSID)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectCLSID )( 
            ITCPropBagOnRegKey * This,
            /* [retval][out] */ BSTR *pbstrCLSID);
        
        END_INTERFACE
    } ITCPropBagOnRegKeyVtbl;

    interface ITCPropBagOnRegKey
    {
        CONST_VTBL struct ITCPropBagOnRegKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITCPropBagOnRegKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITCPropBagOnRegKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITCPropBagOnRegKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITCPropBagOnRegKey_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITCPropBagOnRegKey_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITCPropBagOnRegKey_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITCPropBagOnRegKey_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITCPropBagOnRegKey_CreateKey(This,bstrRegKey,bReadOnly)	\
    ( (This)->lpVtbl -> CreateKey(This,bstrRegKey,bReadOnly) ) 

#define ITCPropBagOnRegKey_OpenKey(This,bstrRegKey,bReadOnly)	\
    ( (This)->lpVtbl -> OpenKey(This,bstrRegKey,bReadOnly) ) 

#define ITCPropBagOnRegKey_CreateObject(This,ppunkObj)	\
    ( (This)->lpVtbl -> CreateObject(This,ppunkObj) ) 

#define ITCPropBagOnRegKey_CreateLocalObject(This,ppunkObj)	\
    ( (This)->lpVtbl -> CreateLocalObject(This,ppunkObj) ) 

#define ITCPropBagOnRegKey_CreateRemoteObject(This,bstrServer,ppunkObj)	\
    ( (This)->lpVtbl -> CreateRemoteObject(This,bstrServer,ppunkObj) ) 

#define ITCPropBagOnRegKey_LoadObject(This,punkObj)	\
    ( (This)->lpVtbl -> LoadObject(This,punkObj) ) 

#define ITCPropBagOnRegKey_SaveObject(This,punkObj,bClearDirty,bSaveAllProperties,bSaveCreationInfo)	\
    ( (This)->lpVtbl -> SaveObject(This,punkObj,bClearDirty,bSaveAllProperties,bSaveCreationInfo) ) 

#define ITCPropBagOnRegKey_put_Server(This,bstrServer)	\
    ( (This)->lpVtbl -> put_Server(This,bstrServer) ) 

#define ITCPropBagOnRegKey_get_Server(This,pbstrServer)	\
    ( (This)->lpVtbl -> get_Server(This,pbstrServer) ) 

#define ITCPropBagOnRegKey_get_ObjectCLSID(This,pbstrCLSID)	\
    ( (This)->lpVtbl -> get_ObjectCLSID(This,pbstrCLSID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITCPropBagOnRegKey_INTERFACE_DEFINED__ */


#ifndef __ITCSessionInfo_INTERFACE_DEFINED__
#define __ITCSessionInfo_INTERFACE_DEFINED__

/* interface ITCSessionInfo */
/* [helpstring][uuid][unique][dual][object] */ 


EXTERN_C const IID IID_ITCSessionInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("34E485E2-C7B7-11d2-85C9-00C04F68DEB0")
    ITCSessionInfo : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserName( 
            /* [retval][out] */ BSTR *pbstrUserName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ComputerName( 
            /* [retval][out] */ BSTR *pbstrComputerName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ApplicationName( 
            /* [in] */ BSTR bstrAppName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ApplicationName( 
            /* [retval][out] */ BSTR *pbstrAppName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimeCreated( 
            /* [retval][out] */ DATE *pdate) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Duration( 
            /* [retval][out] */ DATE *pdate) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Cookie( 
            /* [retval][out] */ long *pCookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITCSessionInfoVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITCSessionInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITCSessionInfo * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITCSessionInfo * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITCSessionInfo * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITCSessionInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITCSessionInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITCSessionInfo * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ITCSessionInfo, get_UserName)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            ITCSessionInfo * This,
            /* [retval][out] */ BSTR *pbstrUserName);
        
        DECLSPEC_XFGVIRT(ITCSessionInfo, get_ComputerName)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComputerName )( 
            ITCSessionInfo * This,
            /* [retval][out] */ BSTR *pbstrComputerName);
        
        DECLSPEC_XFGVIRT(ITCSessionInfo, put_ApplicationName)
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ApplicationName )( 
            ITCSessionInfo * This,
            /* [in] */ BSTR bstrAppName);
        
        DECLSPEC_XFGVIRT(ITCSessionInfo, get_ApplicationName)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ApplicationName )( 
            ITCSessionInfo * This,
            /* [retval][out] */ BSTR *pbstrAppName);
        
        DECLSPEC_XFGVIRT(ITCSessionInfo, get_TimeCreated)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeCreated )( 
            ITCSessionInfo * This,
            /* [retval][out] */ DATE *pdate);
        
        DECLSPEC_XFGVIRT(ITCSessionInfo, get_Duration)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            ITCSessionInfo * This,
            /* [retval][out] */ DATE *pdate);
        
        DECLSPEC_XFGVIRT(ITCSessionInfo, get_Cookie)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Cookie )( 
            ITCSessionInfo * This,
            /* [retval][out] */ long *pCookie);
        
        END_INTERFACE
    } ITCSessionInfoVtbl;

    interface ITCSessionInfo
    {
        CONST_VTBL struct ITCSessionInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITCSessionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITCSessionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITCSessionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITCSessionInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITCSessionInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITCSessionInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITCSessionInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITCSessionInfo_get_UserName(This,pbstrUserName)	\
    ( (This)->lpVtbl -> get_UserName(This,pbstrUserName) ) 

#define ITCSessionInfo_get_ComputerName(This,pbstrComputerName)	\
    ( (This)->lpVtbl -> get_ComputerName(This,pbstrComputerName) ) 

#define ITCSessionInfo_put_ApplicationName(This,bstrAppName)	\
    ( (This)->lpVtbl -> put_ApplicationName(This,bstrAppName) ) 

#define ITCSessionInfo_get_ApplicationName(This,pbstrAppName)	\
    ( (This)->lpVtbl -> get_ApplicationName(This,pbstrAppName) ) 

#define ITCSessionInfo_get_TimeCreated(This,pdate)	\
    ( (This)->lpVtbl -> get_TimeCreated(This,pdate) ) 

#define ITCSessionInfo_get_Duration(This,pdate)	\
    ( (This)->lpVtbl -> get_Duration(This,pdate) ) 

#define ITCSessionInfo_get_Cookie(This,pCookie)	\
    ( (This)->lpVtbl -> get_Cookie(This,pCookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITCSessionInfo_INTERFACE_DEFINED__ */


#ifndef __ITCSessionInfos_INTERFACE_DEFINED__
#define __ITCSessionInfos_INTERFACE_DEFINED__

/* interface ITCSessionInfos */
/* [helpstring][uuid][unique][dual][object] */ 


EXTERN_C const IID IID_ITCSessionInfos;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45038C6E-C7B7-11d2-85C9-00C04F68DEB0")
    ITCSessionInfos : public ITCCollection
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT index,
            /* [retval][out] */ ITCSessionInfo **ppSessionInfo) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITCSessionInfosVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITCSessionInfos * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITCSessionInfos * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITCSessionInfos * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITCSessionInfos * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITCSessionInfos * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITCSessionInfos * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITCSessionInfos * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ITCCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITCSessionInfos * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(ITCCollection, get__NewEnum)
        /* [helpstring][id][restricted][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ITCSessionInfos * This,
            /* [retval][out] */ IUnknown **ppunkEnum);
        
        DECLSPEC_XFGVIRT(ITCSessionInfos, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ITCSessionInfos * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ ITCSessionInfo **ppSessionInfo);
        
        END_INTERFACE
    } ITCSessionInfosVtbl;

    interface ITCSessionInfos
    {
        CONST_VTBL struct ITCSessionInfosVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITCSessionInfos_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITCSessionInfos_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITCSessionInfos_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITCSessionInfos_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITCSessionInfos_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITCSessionInfos_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITCSessionInfos_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITCSessionInfos_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define ITCSessionInfos_get__NewEnum(This,ppunkEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunkEnum) ) 


#define ITCSessionInfos_get_Item(This,index,ppSessionInfo)	\
    ( (This)->lpVtbl -> get_Item(This,index,ppSessionInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITCSessionInfos_INTERFACE_DEFINED__ */


#ifndef __ITCCollectionPersistHelper_INTERFACE_DEFINED__
#define __ITCCollectionPersistHelper_INTERFACE_DEFINED__

/* interface ITCCollectionPersistHelper */
/* [helpstring][uuid][unique][dual][object] */ 


EXTERN_C const IID IID_ITCCollectionPersistHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8962E24A-CD81-11d2-9646-00C04F68DEB0")
    ITCCollectionPersistHelper : public IDispatch
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Collection1( 
            /* [in] */ VARIANT *pvarSafeArray) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Collection1( 
            /* [retval][out] */ VARIANT *pvarSafeArray) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITCCollectionPersistHelperVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITCCollectionPersistHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITCCollectionPersistHelper * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITCCollectionPersistHelper * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITCCollectionPersistHelper * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITCCollectionPersistHelper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITCCollectionPersistHelper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITCCollectionPersistHelper * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ITCCollectionPersistHelper, put_Collection1)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Collection1 )( 
            ITCCollectionPersistHelper * This,
            /* [in] */ VARIANT *pvarSafeArray);
        
        DECLSPEC_XFGVIRT(ITCCollectionPersistHelper, get_Collection1)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Collection1 )( 
            ITCCollectionPersistHelper * This,
            /* [retval][out] */ VARIANT *pvarSafeArray);
        
        END_INTERFACE
    } ITCCollectionPersistHelperVtbl;

    interface ITCCollectionPersistHelper
    {
        CONST_VTBL struct ITCCollectionPersistHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITCCollectionPersistHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITCCollectionPersistHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITCCollectionPersistHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITCCollectionPersistHelper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITCCollectionPersistHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITCCollectionPersistHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITCCollectionPersistHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITCCollectionPersistHelper_put_Collection1(This,pvarSafeArray)	\
    ( (This)->lpVtbl -> put_Collection1(This,pvarSafeArray) ) 

#define ITCCollectionPersistHelper_get_Collection1(This,pvarSafeArray)	\
    ( (This)->lpVtbl -> get_Collection1(This,pvarSafeArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITCCollectionPersistHelper_INTERFACE_DEFINED__ */


#ifndef __ITCUtility_INTERFACE_DEFINED__
#define __ITCUtility_INTERFACE_DEFINED__

/* interface ITCUtility */
/* [helpstring][uuid][unique][dual][object] */ 


EXTERN_C const IID IID_ITCUtility;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ADD577E2-ED3A-11d2-A50B-00C04F68DEB0")
    ITCUtility : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateObject( 
            /* [in] */ BSTR bstrProgID,
            /* [defaultvalue][in] */ BSTR bstrComputer,
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ObjectReference( 
            /* [in] */ IUnknown *pUnk,
            /* [retval][out] */ BSTR *pbstrObjectReference) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Sleep( 
            /* [in] */ long nDurationMS) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetObject( 
            /* [in] */ BSTR bstrMoniker,
            /* [defaultvalue][in] */ VARIANT_BOOL bAllowUI,
            /* [defaultvalue][in] */ long nTimeoutMS,
            /* [retval][out] */ IUnknown **ppUnk) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITCUtilityVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITCUtility * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITCUtility * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITCUtility * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITCUtility * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITCUtility * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITCUtility * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITCUtility * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ITCUtility, CreateObject)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateObject )( 
            ITCUtility * This,
            /* [in] */ BSTR bstrProgID,
            /* [defaultvalue][in] */ BSTR bstrComputer,
            /* [retval][out] */ IUnknown **ppUnk);
        
        DECLSPEC_XFGVIRT(ITCUtility, ObjectReference)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ObjectReference )( 
            ITCUtility * This,
            /* [in] */ IUnknown *pUnk,
            /* [retval][out] */ BSTR *pbstrObjectReference);
        
        DECLSPEC_XFGVIRT(ITCUtility, Sleep)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            ITCUtility * This,
            /* [in] */ long nDurationMS);
        
        DECLSPEC_XFGVIRT(ITCUtility, GetObject)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObject )( 
            ITCUtility * This,
            /* [in] */ BSTR bstrMoniker,
            /* [defaultvalue][in] */ VARIANT_BOOL bAllowUI,
            /* [defaultvalue][in] */ long nTimeoutMS,
            /* [retval][out] */ IUnknown **ppUnk);
        
        END_INTERFACE
    } ITCUtilityVtbl;

    interface ITCUtility
    {
        CONST_VTBL struct ITCUtilityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITCUtility_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITCUtility_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITCUtility_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITCUtility_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITCUtility_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITCUtility_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITCUtility_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITCUtility_CreateObject(This,bstrProgID,bstrComputer,ppUnk)	\
    ( (This)->lpVtbl -> CreateObject(This,bstrProgID,bstrComputer,ppUnk) ) 

#define ITCUtility_ObjectReference(This,pUnk,pbstrObjectReference)	\
    ( (This)->lpVtbl -> ObjectReference(This,pUnk,pbstrObjectReference) ) 

#define ITCUtility_Sleep(This,nDurationMS)	\
    ( (This)->lpVtbl -> Sleep(This,nDurationMS) ) 

#define ITCUtility_GetObject(This,bstrMoniker,bAllowUI,nTimeoutMS,ppUnk)	\
    ( (This)->lpVtbl -> GetObject(This,bstrMoniker,bAllowUI,nTimeoutMS,ppUnk) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITCUtility_INTERFACE_DEFINED__ */


#ifndef __IAdminSessionHelper_INTERFACE_DEFINED__
#define __IAdminSessionHelper_INTERFACE_DEFINED__

/* interface IAdminSessionHelper */
/* [helpstring][uuid][unique][dual][object] */ 


EXTERN_C const IID IID_IAdminSessionHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("143C0682-8688-421b-A269-9FD40F2AA19A")
    IAdminSessionHelper : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_IsAllSrvRunning( 
            /* [retval][out] */ VARIANT_BOOL *pbIsRunning) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAdminSessionHelperVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAdminSessionHelper * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAdminSessionHelper * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAdminSessionHelper * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAdminSessionHelper * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAdminSessionHelper * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAdminSessionHelper * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAdminSessionHelper * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAdminSessionHelper, get_IsAllSrvRunning)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsAllSrvRunning )( 
            IAdminSessionHelper * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsRunning);
        
        END_INTERFACE
    } IAdminSessionHelperVtbl;

    interface IAdminSessionHelper
    {
        CONST_VTBL struct IAdminSessionHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAdminSessionHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAdminSessionHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAdminSessionHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAdminSessionHelper_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAdminSessionHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAdminSessionHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAdminSessionHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAdminSessionHelper_get_IsAllSrvRunning(This,pbIsRunning)	\
    ( (This)->lpVtbl -> get_IsAllSrvRunning(This,pbIsRunning) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAdminSessionHelper_INTERFACE_DEFINED__ */


#ifndef __IAGCPrivate_INTERFACE_DEFINED__
#define __IAGCPrivate_INTERFACE_DEFINED__

/* interface IAGCPrivate */
/* [helpstring][uuid][nonextensible][unique][object][restricted][hidden][local] */ 


EXTERN_C const IID IID_IAGCPrivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4E001CF9-0D87-11d3-8B59-00C04F681633")
    IAGCPrivate : public IUnknown
    {
    public:
        virtual /* [helpstring] */ void *STDMETHODCALLTYPE GetIGCVoid( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCPrivateVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCPrivate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCPrivate * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCPrivate * This);
        
        DECLSPEC_XFGVIRT(IAGCPrivate, GetIGCVoid)
        /* [helpstring] */ void *( STDMETHODCALLTYPE *GetIGCVoid )( 
            IAGCPrivate * This);
        
        END_INTERFACE
    } IAGCPrivateVtbl;

    interface IAGCPrivate
    {
        CONST_VTBL struct IAGCPrivateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCPrivate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCPrivate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCPrivate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCPrivate_GetIGCVoid(This)	\
    ( (This)->lpVtbl -> GetIGCVoid(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCPrivate_INTERFACE_DEFINED__ */


#ifndef __IAGCCommon_INTERFACE_DEFINED__
#define __IAGCCommon_INTERFACE_DEFINED__

/* interface IAGCCommon */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCCommon;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6EB476CE-17BC-11d3-8B61-00C04F681633")
    IAGCCommon : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ BSTR *pbstrType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCCommonVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCCommon * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCCommon * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCCommon * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCCommon * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCCommon * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCCommon * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCCommon * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCCommon * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        END_INTERFACE
    } IAGCCommonVtbl;

    interface IAGCCommon
    {
        CONST_VTBL struct IAGCCommonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCCommon_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCCommon_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCCommon_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCCommon_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCCommon_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCCommon_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCCommon_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCCommon_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCCommon_INTERFACE_DEFINED__ */


#ifndef __IAGCCollection_INTERFACE_DEFINED__
#define __IAGCCollection_INTERFACE_DEFINED__

/* interface IAGCCollection */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B8DB7D42-1E9C-11d3-8B63-00C04F681633")
    IAGCCollection : public IAGCCommon
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [helpstring][id][restricted][hidden][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppunkEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCCollectionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCCollection * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCCollection * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCCollection * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCCollection * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCCollection * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAGCCollection * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get__NewEnum)
        /* [helpstring][id][restricted][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAGCCollection * This,
            /* [retval][out] */ IUnknown **ppunkEnum);
        
        END_INTERFACE
    } IAGCCollectionVtbl;

    interface IAGCCollection
    {
        CONST_VTBL struct IAGCCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCCollection_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IAGCCollection_get__NewEnum(This,ppunkEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunkEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCCollection_INTERFACE_DEFINED__ */


#ifndef __IAGCBase_INTERFACE_DEFINED__
#define __IAGCBase_INTERFACE_DEFINED__

/* interface IAGCBase */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCBase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6967EA73-0A42-11D3-8B58-00C04F681633")
    IAGCBase : public IAGCCommon
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ObjectType( 
            /* [retval][out] */ AGCObjectType *pObjectType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ObjectID( 
            /* [retval][out] */ AGCObjectID *pObjectID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Game( 
            /* [retval][out] */ IAGCGame **ppGame) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UniqueID( 
            /* [retval][out] */ AGCUniqueID *pUniqueID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCBaseVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCBase * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCBase * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCBase * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCBase * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCBase * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCBase * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCBase * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCBase * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IAGCBase * This,
            /* [retval][out] */ AGCObjectType *pObjectType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            IAGCBase * This,
            /* [retval][out] */ AGCObjectID *pObjectID);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_Game)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Game )( 
            IAGCBase * This,
            /* [retval][out] */ IAGCGame **ppGame);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_UniqueID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IAGCBase * This,
            /* [retval][out] */ AGCUniqueID *pUniqueID);
        
        END_INTERFACE
    } IAGCBaseVtbl;

    interface IAGCBase
    {
        CONST_VTBL struct IAGCBaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCBase_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCBase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCBase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCBase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCBase_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCBase_get_ObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) ) 

#define IAGCBase_get_ObjectID(This,pObjectID)	\
    ( (This)->lpVtbl -> get_ObjectID(This,pObjectID) ) 

#define IAGCBase_get_Game(This,ppGame)	\
    ( (This)->lpVtbl -> get_Game(This,ppGame) ) 

#define IAGCBase_get_UniqueID(This,pUniqueID)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pUniqueID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCBase_INTERFACE_DEFINED__ */


#ifndef __IAGCModel_INTERFACE_DEFINED__
#define __IAGCModel_INTERFACE_DEFINED__

/* interface IAGCModel */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCModel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D64CB547-0A42-11D3-8B58-00C04F681633")
    IAGCModel : public IAGCBase
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsVisible( 
            /* [retval][out] */ VARIANT_BOOL *pbVisible) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsSeenBySide( 
            /* [in] */ IAGCTeam *pTeam,
            /* [retval][out] */ VARIANT_BOOL *pbSeen) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ IAGCVector **ppVector) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Velocity( 
            /* [retval][out] */ IAGCVector **ppVector) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Orientation( 
            /* [retval][out] */ IAGCOrientation **ppOrientation) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Radius( 
            /* [retval][out] */ float *pfRadius) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Team( 
            /* [retval][out] */ IAGCTeam **ppTeam) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Mass( 
            /* [retval][out] */ float *pfMass) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Sector( 
            /* [retval][out] */ IAGCSector **ppSector) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Signature( 
            /* [retval][out] */ float *pfSignature) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCModelVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCModel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCModel * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCModel * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCModel * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCModel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCModel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCModel * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCModel * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IAGCModel * This,
            /* [retval][out] */ AGCObjectType *pObjectType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            IAGCModel * This,
            /* [retval][out] */ AGCObjectID *pObjectID);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_Game)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Game )( 
            IAGCModel * This,
            /* [retval][out] */ IAGCGame **ppGame);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_UniqueID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IAGCModel * This,
            /* [retval][out] */ AGCUniqueID *pUniqueID);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsVisible)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsVisible )( 
            IAGCModel * This,
            /* [retval][out] */ VARIANT_BOOL *pbVisible);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsSeenBySide)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSeenBySide )( 
            IAGCModel * This,
            /* [in] */ IAGCTeam *pTeam,
            /* [retval][out] */ VARIANT_BOOL *pbSeen);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Position)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAGCModel * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Velocity)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Velocity )( 
            IAGCModel * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Orientation)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Orientation )( 
            IAGCModel * This,
            /* [retval][out] */ IAGCOrientation **ppOrientation);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Radius)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            IAGCModel * This,
            /* [retval][out] */ float *pfRadius);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Team)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Team )( 
            IAGCModel * This,
            /* [retval][out] */ IAGCTeam **ppTeam);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Mass)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mass )( 
            IAGCModel * This,
            /* [retval][out] */ float *pfMass);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Sector)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sector )( 
            IAGCModel * This,
            /* [retval][out] */ IAGCSector **ppSector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Signature)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            IAGCModel * This,
            /* [retval][out] */ float *pfSignature);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAGCModel * This,
            /* [retval][out] */ BSTR *pbstr);
        
        END_INTERFACE
    } IAGCModelVtbl;

    interface IAGCModel
    {
        CONST_VTBL struct IAGCModelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCModel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCModel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCModel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCModel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCModel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCModel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCModel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCModel_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCModel_get_ObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) ) 

#define IAGCModel_get_ObjectID(This,pObjectID)	\
    ( (This)->lpVtbl -> get_ObjectID(This,pObjectID) ) 

#define IAGCModel_get_Game(This,ppGame)	\
    ( (This)->lpVtbl -> get_Game(This,ppGame) ) 

#define IAGCModel_get_UniqueID(This,pUniqueID)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pUniqueID) ) 


#define IAGCModel_get_IsVisible(This,pbVisible)	\
    ( (This)->lpVtbl -> get_IsVisible(This,pbVisible) ) 

#define IAGCModel_get_IsSeenBySide(This,pTeam,pbSeen)	\
    ( (This)->lpVtbl -> get_IsSeenBySide(This,pTeam,pbSeen) ) 

#define IAGCModel_get_Position(This,ppVector)	\
    ( (This)->lpVtbl -> get_Position(This,ppVector) ) 

#define IAGCModel_get_Velocity(This,ppVector)	\
    ( (This)->lpVtbl -> get_Velocity(This,ppVector) ) 

#define IAGCModel_get_Orientation(This,ppOrientation)	\
    ( (This)->lpVtbl -> get_Orientation(This,ppOrientation) ) 

#define IAGCModel_get_Radius(This,pfRadius)	\
    ( (This)->lpVtbl -> get_Radius(This,pfRadius) ) 

#define IAGCModel_get_Team(This,ppTeam)	\
    ( (This)->lpVtbl -> get_Team(This,ppTeam) ) 

#define IAGCModel_get_Mass(This,pfMass)	\
    ( (This)->lpVtbl -> get_Mass(This,pfMass) ) 

#define IAGCModel_get_Sector(This,ppSector)	\
    ( (This)->lpVtbl -> get_Sector(This,ppSector) ) 

#define IAGCModel_get_Signature(This,pfSignature)	\
    ( (This)->lpVtbl -> get_Signature(This,pfSignature) ) 

#define IAGCModel_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCModel_INTERFACE_DEFINED__ */


#ifndef __IAGCModels_INTERFACE_DEFINED__
#define __IAGCModels_INTERFACE_DEFINED__

/* interface IAGCModels */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCModels;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9F04169B-FB9F-48c2-891B-DFC9B29E0493")
    IAGCModels : public IAGCCollection
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCModel **ppItemInterface) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCModelsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCModels * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCModels * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCModels * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCModels * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCModels * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCModels * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCModels * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCModels * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAGCModels * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get__NewEnum)
        /* [helpstring][id][restricted][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAGCModels * This,
            /* [retval][out] */ IUnknown **ppunkEnum);
        
        DECLSPEC_XFGVIRT(IAGCModels, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAGCModels * This,
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCModel **ppItemInterface);
        
        END_INTERFACE
    } IAGCModelsVtbl;

    interface IAGCModels
    {
        CONST_VTBL struct IAGCModelsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCModels_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCModels_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCModels_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCModels_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCModels_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCModels_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCModels_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCModels_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCModels_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IAGCModels_get__NewEnum(This,ppunkEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunkEnum) ) 


#define IAGCModels_get_Item(This,pvIndex,ppItemInterface)	\
    ( (This)->lpVtbl -> get_Item(This,pvIndex,ppItemInterface) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCModels_INTERFACE_DEFINED__ */


#ifndef __IAGCBuyable_INTERFACE_DEFINED__
#define __IAGCBuyable_INTERFACE_DEFINED__

/* interface IAGCBuyable */
/* [helpstring][uuid][unique][nonextensible][dual][object] */ 


EXTERN_C const IID IID_IAGCBuyable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5D48F7CC-1FA8-11d3-AF03-0000F810C3F4")
    IAGCBuyable : public IAGCBase
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pbstrDescription) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ModelName( 
            /* [retval][out] */ BSTR *pbstrModelName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Price( 
            /* [retval][out] */ AGCMoney *pmoneyPrice) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TimeToBuild( 
            /* [retval][out] */ long *pnTimeToBuild) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCBuyableVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCBuyable * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCBuyable * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCBuyable * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCBuyable * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCBuyable * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCBuyable * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCBuyable * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCBuyable * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IAGCBuyable * This,
            /* [retval][out] */ AGCObjectType *pObjectType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            IAGCBuyable * This,
            /* [retval][out] */ AGCObjectID *pObjectID);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_Game)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Game )( 
            IAGCBuyable * This,
            /* [retval][out] */ IAGCGame **ppGame);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_UniqueID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IAGCBuyable * This,
            /* [retval][out] */ AGCUniqueID *pUniqueID);
        
        DECLSPEC_XFGVIRT(IAGCBuyable, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAGCBuyable * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        DECLSPEC_XFGVIRT(IAGCBuyable, get_Description)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IAGCBuyable * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        DECLSPEC_XFGVIRT(IAGCBuyable, get_ModelName)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModelName )( 
            IAGCBuyable * This,
            /* [retval][out] */ BSTR *pbstrModelName);
        
        DECLSPEC_XFGVIRT(IAGCBuyable, get_Price)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Price )( 
            IAGCBuyable * This,
            /* [retval][out] */ AGCMoney *pmoneyPrice);
        
        DECLSPEC_XFGVIRT(IAGCBuyable, get_TimeToBuild)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeToBuild )( 
            IAGCBuyable * This,
            /* [retval][out] */ long *pnTimeToBuild);
        
        END_INTERFACE
    } IAGCBuyableVtbl;

    interface IAGCBuyable
    {
        CONST_VTBL struct IAGCBuyableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCBuyable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCBuyable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCBuyable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCBuyable_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCBuyable_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCBuyable_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCBuyable_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCBuyable_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCBuyable_get_ObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) ) 

#define IAGCBuyable_get_ObjectID(This,pObjectID)	\
    ( (This)->lpVtbl -> get_ObjectID(This,pObjectID) ) 

#define IAGCBuyable_get_Game(This,ppGame)	\
    ( (This)->lpVtbl -> get_Game(This,ppGame) ) 

#define IAGCBuyable_get_UniqueID(This,pUniqueID)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pUniqueID) ) 


#define IAGCBuyable_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IAGCBuyable_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IAGCBuyable_get_ModelName(This,pbstrModelName)	\
    ( (This)->lpVtbl -> get_ModelName(This,pbstrModelName) ) 

#define IAGCBuyable_get_Price(This,pmoneyPrice)	\
    ( (This)->lpVtbl -> get_Price(This,pmoneyPrice) ) 

#define IAGCBuyable_get_TimeToBuild(This,pnTimeToBuild)	\
    ( (This)->lpVtbl -> get_TimeToBuild(This,pnTimeToBuild) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCBuyable_INTERFACE_DEFINED__ */


#ifndef __IAGCHullType_INTERFACE_DEFINED__
#define __IAGCHullType_INTERFACE_DEFINED__

/* interface IAGCHullType */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCHullType;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3C579426-2ED8-11d3-A51C-00C04F68DEB0")
    IAGCHullType : public IAGCBuyable
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ float *pfLength) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxSpeed( 
            /* [retval][out] */ float *pfMaxSpeed) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxTurnRate( 
            /* [in] */ AGCAxis eAxis,
            /* [retval][out] */ float *pfMaxTurnRate) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TurnTorque( 
            /* [in] */ AGCAxis eAxis,
            /* [retval][out] */ float *pfTurnTorque) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Thrust( 
            /* [retval][out] */ float *pfThrust) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SideMultiplier( 
            /* [retval][out] */ float *pfSideMultiplier) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BackMultiplier( 
            /* [retval][out] */ float *pfBackMultiplier) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScannerRange( 
            /* [retval][out] */ float *pfScannerRange) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxEnergy( 
            /* [retval][out] */ float *pfMaxEnergy) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RechargeRate( 
            /* [retval][out] */ float *pfRechargeRate) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HitPoints( 
            /* [retval][out] */ AGCHitPoints *pHitPoints) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PartMask( 
            /* [in] */ AGCEquipmentType et,
            /* [in] */ AGCMount mountID,
            /* [retval][out] */ AGCPartMask *pPartMask) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxWeapons( 
            /* [retval][out] */ AGCMount *pMaxWeapons) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxFixedWeapons( 
            /* [retval][out] */ AGCMount *pMaxFixedWeapons) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Mass( 
            /* [retval][out] */ float *pfMass) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Signature( 
            /* [retval][out] */ float *pfSignature) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Capabilities( 
            /* [retval][out] */ AGCHullAbilityBitMask *phabmCapabilities) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasCapability( 
            /* [in] */ AGCHullAbilityBitMask habm,
            /* [retval][out] */ VARIANT_BOOL *pbHasCapability) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxAmmo( 
            /* [retval][out] */ short *pnMaxAmmo) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxFuel( 
            /* [retval][out] */ float *pfMaxFuel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCHullTypeVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCHullType * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCHullType * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCHullType * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCHullType * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCHullType * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCHullType * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCHullType * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCHullType * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IAGCHullType * This,
            /* [retval][out] */ AGCObjectType *pObjectType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            IAGCHullType * This,
            /* [retval][out] */ AGCObjectID *pObjectID);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_Game)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Game )( 
            IAGCHullType * This,
            /* [retval][out] */ IAGCGame **ppGame);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_UniqueID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IAGCHullType * This,
            /* [retval][out] */ AGCUniqueID *pUniqueID);
        
        DECLSPEC_XFGVIRT(IAGCBuyable, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAGCHullType * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        DECLSPEC_XFGVIRT(IAGCBuyable, get_Description)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IAGCHullType * This,
            /* [retval][out] */ BSTR *pbstrDescription);
        
        DECLSPEC_XFGVIRT(IAGCBuyable, get_ModelName)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModelName )( 
            IAGCHullType * This,
            /* [retval][out] */ BSTR *pbstrModelName);
        
        DECLSPEC_XFGVIRT(IAGCBuyable, get_Price)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Price )( 
            IAGCHullType * This,
            /* [retval][out] */ AGCMoney *pmoneyPrice);
        
        DECLSPEC_XFGVIRT(IAGCBuyable, get_TimeToBuild)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimeToBuild )( 
            IAGCHullType * This,
            /* [retval][out] */ long *pnTimeToBuild);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_Length)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IAGCHullType * This,
            /* [retval][out] */ float *pfLength);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_MaxSpeed)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxSpeed )( 
            IAGCHullType * This,
            /* [retval][out] */ float *pfMaxSpeed);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_MaxTurnRate)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxTurnRate )( 
            IAGCHullType * This,
            /* [in] */ AGCAxis eAxis,
            /* [retval][out] */ float *pfMaxTurnRate);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_TurnTorque)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TurnTorque )( 
            IAGCHullType * This,
            /* [in] */ AGCAxis eAxis,
            /* [retval][out] */ float *pfTurnTorque);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_Thrust)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Thrust )( 
            IAGCHullType * This,
            /* [retval][out] */ float *pfThrust);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_SideMultiplier)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SideMultiplier )( 
            IAGCHullType * This,
            /* [retval][out] */ float *pfSideMultiplier);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_BackMultiplier)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackMultiplier )( 
            IAGCHullType * This,
            /* [retval][out] */ float *pfBackMultiplier);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_ScannerRange)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScannerRange )( 
            IAGCHullType * This,
            /* [retval][out] */ float *pfScannerRange);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_MaxEnergy)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxEnergy )( 
            IAGCHullType * This,
            /* [retval][out] */ float *pfMaxEnergy);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_RechargeRate)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RechargeRate )( 
            IAGCHullType * This,
            /* [retval][out] */ float *pfRechargeRate);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_HitPoints)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HitPoints )( 
            IAGCHullType * This,
            /* [retval][out] */ AGCHitPoints *pHitPoints);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_PartMask)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PartMask )( 
            IAGCHullType * This,
            /* [in] */ AGCEquipmentType et,
            /* [in] */ AGCMount mountID,
            /* [retval][out] */ AGCPartMask *pPartMask);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_MaxWeapons)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxWeapons )( 
            IAGCHullType * This,
            /* [retval][out] */ AGCMount *pMaxWeapons);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_MaxFixedWeapons)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxFixedWeapons )( 
            IAGCHullType * This,
            /* [retval][out] */ AGCMount *pMaxFixedWeapons);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_Mass)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mass )( 
            IAGCHullType * This,
            /* [retval][out] */ float *pfMass);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_Signature)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            IAGCHullType * This,
            /* [retval][out] */ float *pfSignature);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_Capabilities)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Capabilities )( 
            IAGCHullType * This,
            /* [retval][out] */ AGCHullAbilityBitMask *phabmCapabilities);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_HasCapability)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCapability )( 
            IAGCHullType * This,
            /* [in] */ AGCHullAbilityBitMask habm,
            /* [retval][out] */ VARIANT_BOOL *pbHasCapability);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_MaxAmmo)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxAmmo )( 
            IAGCHullType * This,
            /* [retval][out] */ short *pnMaxAmmo);
        
        DECLSPEC_XFGVIRT(IAGCHullType, get_MaxFuel)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxFuel )( 
            IAGCHullType * This,
            /* [retval][out] */ float *pfMaxFuel);
        
        END_INTERFACE
    } IAGCHullTypeVtbl;

    interface IAGCHullType
    {
        CONST_VTBL struct IAGCHullTypeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCHullType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCHullType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCHullType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCHullType_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCHullType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCHullType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCHullType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCHullType_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCHullType_get_ObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) ) 

#define IAGCHullType_get_ObjectID(This,pObjectID)	\
    ( (This)->lpVtbl -> get_ObjectID(This,pObjectID) ) 

#define IAGCHullType_get_Game(This,ppGame)	\
    ( (This)->lpVtbl -> get_Game(This,ppGame) ) 

#define IAGCHullType_get_UniqueID(This,pUniqueID)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pUniqueID) ) 


#define IAGCHullType_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IAGCHullType_get_Description(This,pbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) ) 

#define IAGCHullType_get_ModelName(This,pbstrModelName)	\
    ( (This)->lpVtbl -> get_ModelName(This,pbstrModelName) ) 

#define IAGCHullType_get_Price(This,pmoneyPrice)	\
    ( (This)->lpVtbl -> get_Price(This,pmoneyPrice) ) 

#define IAGCHullType_get_TimeToBuild(This,pnTimeToBuild)	\
    ( (This)->lpVtbl -> get_TimeToBuild(This,pnTimeToBuild) ) 


#define IAGCHullType_get_Length(This,pfLength)	\
    ( (This)->lpVtbl -> get_Length(This,pfLength) ) 

#define IAGCHullType_get_MaxSpeed(This,pfMaxSpeed)	\
    ( (This)->lpVtbl -> get_MaxSpeed(This,pfMaxSpeed) ) 

#define IAGCHullType_get_MaxTurnRate(This,eAxis,pfMaxTurnRate)	\
    ( (This)->lpVtbl -> get_MaxTurnRate(This,eAxis,pfMaxTurnRate) ) 

#define IAGCHullType_get_TurnTorque(This,eAxis,pfTurnTorque)	\
    ( (This)->lpVtbl -> get_TurnTorque(This,eAxis,pfTurnTorque) ) 

#define IAGCHullType_get_Thrust(This,pfThrust)	\
    ( (This)->lpVtbl -> get_Thrust(This,pfThrust) ) 

#define IAGCHullType_get_SideMultiplier(This,pfSideMultiplier)	\
    ( (This)->lpVtbl -> get_SideMultiplier(This,pfSideMultiplier) ) 

#define IAGCHullType_get_BackMultiplier(This,pfBackMultiplier)	\
    ( (This)->lpVtbl -> get_BackMultiplier(This,pfBackMultiplier) ) 

#define IAGCHullType_get_ScannerRange(This,pfScannerRange)	\
    ( (This)->lpVtbl -> get_ScannerRange(This,pfScannerRange) ) 

#define IAGCHullType_get_MaxEnergy(This,pfMaxEnergy)	\
    ( (This)->lpVtbl -> get_MaxEnergy(This,pfMaxEnergy) ) 

#define IAGCHullType_get_RechargeRate(This,pfRechargeRate)	\
    ( (This)->lpVtbl -> get_RechargeRate(This,pfRechargeRate) ) 

#define IAGCHullType_get_HitPoints(This,pHitPoints)	\
    ( (This)->lpVtbl -> get_HitPoints(This,pHitPoints) ) 

#define IAGCHullType_get_PartMask(This,et,mountID,pPartMask)	\
    ( (This)->lpVtbl -> get_PartMask(This,et,mountID,pPartMask) ) 

#define IAGCHullType_get_MaxWeapons(This,pMaxWeapons)	\
    ( (This)->lpVtbl -> get_MaxWeapons(This,pMaxWeapons) ) 

#define IAGCHullType_get_MaxFixedWeapons(This,pMaxFixedWeapons)	\
    ( (This)->lpVtbl -> get_MaxFixedWeapons(This,pMaxFixedWeapons) ) 

#define IAGCHullType_get_Mass(This,pfMass)	\
    ( (This)->lpVtbl -> get_Mass(This,pfMass) ) 

#define IAGCHullType_get_Signature(This,pfSignature)	\
    ( (This)->lpVtbl -> get_Signature(This,pfSignature) ) 

#define IAGCHullType_get_Capabilities(This,phabmCapabilities)	\
    ( (This)->lpVtbl -> get_Capabilities(This,phabmCapabilities) ) 

#define IAGCHullType_get_HasCapability(This,habm,pbHasCapability)	\
    ( (This)->lpVtbl -> get_HasCapability(This,habm,pbHasCapability) ) 

#define IAGCHullType_get_MaxAmmo(This,pnMaxAmmo)	\
    ( (This)->lpVtbl -> get_MaxAmmo(This,pnMaxAmmo) ) 

#define IAGCHullType_get_MaxFuel(This,pfMaxFuel)	\
    ( (This)->lpVtbl -> get_MaxFuel(This,pfMaxFuel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCHullType_INTERFACE_DEFINED__ */


#ifndef __IAGCTreasure_INTERFACE_DEFINED__
#define __IAGCTreasure_INTERFACE_DEFINED__

/* interface IAGCTreasure */
/* [uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCTreasure;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3AFF440E-0E49-11d3-8B59-00C04F681633")
    IAGCTreasure : public IAGCModel
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ AGCTreasureType *peType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Amount( 
            /* [retval][out] */ short *pnAmount) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCTreasureVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCTreasure * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCTreasure * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCTreasure * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCTreasure * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCTreasure * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCTreasure * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCTreasure * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCTreasure * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IAGCTreasure * This,
            /* [retval][out] */ AGCObjectType *pObjectType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            IAGCTreasure * This,
            /* [retval][out] */ AGCObjectID *pObjectID);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_Game)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Game )( 
            IAGCTreasure * This,
            /* [retval][out] */ IAGCGame **ppGame);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_UniqueID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IAGCTreasure * This,
            /* [retval][out] */ AGCUniqueID *pUniqueID);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsVisible)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsVisible )( 
            IAGCTreasure * This,
            /* [retval][out] */ VARIANT_BOOL *pbVisible);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsSeenBySide)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSeenBySide )( 
            IAGCTreasure * This,
            /* [in] */ IAGCTeam *pTeam,
            /* [retval][out] */ VARIANT_BOOL *pbSeen);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Position)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAGCTreasure * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Velocity)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Velocity )( 
            IAGCTreasure * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Orientation)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Orientation )( 
            IAGCTreasure * This,
            /* [retval][out] */ IAGCOrientation **ppOrientation);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Radius)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            IAGCTreasure * This,
            /* [retval][out] */ float *pfRadius);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Team)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Team )( 
            IAGCTreasure * This,
            /* [retval][out] */ IAGCTeam **ppTeam);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Mass)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mass )( 
            IAGCTreasure * This,
            /* [retval][out] */ float *pfMass);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Sector)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sector )( 
            IAGCTreasure * This,
            /* [retval][out] */ IAGCSector **ppSector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Signature)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            IAGCTreasure * This,
            /* [retval][out] */ float *pfSignature);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAGCTreasure * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCTreasure, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCTreasure * This,
            /* [retval][out] */ AGCTreasureType *peType);
        
        DECLSPEC_XFGVIRT(IAGCTreasure, get_Amount)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Amount )( 
            IAGCTreasure * This,
            /* [retval][out] */ short *pnAmount);
        
        END_INTERFACE
    } IAGCTreasureVtbl;

    interface IAGCTreasure
    {
        CONST_VTBL struct IAGCTreasureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCTreasure_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCTreasure_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCTreasure_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCTreasure_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCTreasure_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCTreasure_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCTreasure_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCTreasure_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCTreasure_get_ObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) ) 

#define IAGCTreasure_get_ObjectID(This,pObjectID)	\
    ( (This)->lpVtbl -> get_ObjectID(This,pObjectID) ) 

#define IAGCTreasure_get_Game(This,ppGame)	\
    ( (This)->lpVtbl -> get_Game(This,ppGame) ) 

#define IAGCTreasure_get_UniqueID(This,pUniqueID)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pUniqueID) ) 


#define IAGCTreasure_get_IsVisible(This,pbVisible)	\
    ( (This)->lpVtbl -> get_IsVisible(This,pbVisible) ) 

#define IAGCTreasure_get_IsSeenBySide(This,pTeam,pbSeen)	\
    ( (This)->lpVtbl -> get_IsSeenBySide(This,pTeam,pbSeen) ) 

#define IAGCTreasure_get_Position(This,ppVector)	\
    ( (This)->lpVtbl -> get_Position(This,ppVector) ) 

#define IAGCTreasure_get_Velocity(This,ppVector)	\
    ( (This)->lpVtbl -> get_Velocity(This,ppVector) ) 

#define IAGCTreasure_get_Orientation(This,ppOrientation)	\
    ( (This)->lpVtbl -> get_Orientation(This,ppOrientation) ) 

#define IAGCTreasure_get_Radius(This,pfRadius)	\
    ( (This)->lpVtbl -> get_Radius(This,pfRadius) ) 

#define IAGCTreasure_get_Team(This,ppTeam)	\
    ( (This)->lpVtbl -> get_Team(This,ppTeam) ) 

#define IAGCTreasure_get_Mass(This,pfMass)	\
    ( (This)->lpVtbl -> get_Mass(This,pfMass) ) 

#define IAGCTreasure_get_Sector(This,ppSector)	\
    ( (This)->lpVtbl -> get_Sector(This,ppSector) ) 

#define IAGCTreasure_get_Signature(This,pfSignature)	\
    ( (This)->lpVtbl -> get_Signature(This,pfSignature) ) 

#define IAGCTreasure_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 


#define IAGCTreasure_get_Type(This,peType)	\
    ( (This)->lpVtbl -> get_Type(This,peType) ) 

#define IAGCTreasure_get_Amount(This,pnAmount)	\
    ( (This)->lpVtbl -> get_Amount(This,pnAmount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCTreasure_INTERFACE_DEFINED__ */


#ifndef __IAGCTreasures_INTERFACE_DEFINED__
#define __IAGCTreasures_INTERFACE_DEFINED__

/* interface IAGCTreasures */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCTreasures;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DA3A2550-3997-11d3-A51D-00C04F68DEB0")
    IAGCTreasures : public IAGCCollection
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCTreasure **ppItemInterface) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCTreasuresVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCTreasures * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCTreasures * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCTreasures * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCTreasures * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCTreasures * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCTreasures * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCTreasures * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCTreasures * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAGCTreasures * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get__NewEnum)
        /* [helpstring][id][restricted][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAGCTreasures * This,
            /* [retval][out] */ IUnknown **ppunkEnum);
        
        DECLSPEC_XFGVIRT(IAGCTreasures, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAGCTreasures * This,
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCTreasure **ppItemInterface);
        
        END_INTERFACE
    } IAGCTreasuresVtbl;

    interface IAGCTreasures
    {
        CONST_VTBL struct IAGCTreasuresVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCTreasures_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCTreasures_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCTreasures_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCTreasures_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCTreasures_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCTreasures_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCTreasures_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCTreasures_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCTreasures_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IAGCTreasures_get__NewEnum(This,ppunkEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunkEnum) ) 


#define IAGCTreasures_get_Item(This,pvIndex,ppItemInterface)	\
    ( (This)->lpVtbl -> get_Item(This,pvIndex,ppItemInterface) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCTreasures_INTERFACE_DEFINED__ */


#ifndef __IAGCDamage_INTERFACE_DEFINED__
#define __IAGCDamage_INTERFACE_DEFINED__

/* interface IAGCDamage */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCDamage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DF2F4B4E-0A42-11D3-8B58-00C04F681633")
    IAGCDamage : public IAGCModel
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Fraction( 
            /* [retval][out] */ float *pfFraction) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCDamageVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCDamage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCDamage * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCDamage * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCDamage * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCDamage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCDamage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCDamage * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCDamage * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IAGCDamage * This,
            /* [retval][out] */ AGCObjectType *pObjectType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            IAGCDamage * This,
            /* [retval][out] */ AGCObjectID *pObjectID);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_Game)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Game )( 
            IAGCDamage * This,
            /* [retval][out] */ IAGCGame **ppGame);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_UniqueID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IAGCDamage * This,
            /* [retval][out] */ AGCUniqueID *pUniqueID);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsVisible)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsVisible )( 
            IAGCDamage * This,
            /* [retval][out] */ VARIANT_BOOL *pbVisible);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsSeenBySide)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSeenBySide )( 
            IAGCDamage * This,
            /* [in] */ IAGCTeam *pTeam,
            /* [retval][out] */ VARIANT_BOOL *pbSeen);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Position)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAGCDamage * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Velocity)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Velocity )( 
            IAGCDamage * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Orientation)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Orientation )( 
            IAGCDamage * This,
            /* [retval][out] */ IAGCOrientation **ppOrientation);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Radius)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            IAGCDamage * This,
            /* [retval][out] */ float *pfRadius);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Team)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Team )( 
            IAGCDamage * This,
            /* [retval][out] */ IAGCTeam **ppTeam);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Mass)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mass )( 
            IAGCDamage * This,
            /* [retval][out] */ float *pfMass);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Sector)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sector )( 
            IAGCDamage * This,
            /* [retval][out] */ IAGCSector **ppSector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Signature)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            IAGCDamage * This,
            /* [retval][out] */ float *pfSignature);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAGCDamage * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCDamage, get_Fraction)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fraction )( 
            IAGCDamage * This,
            /* [retval][out] */ float *pfFraction);
        
        END_INTERFACE
    } IAGCDamageVtbl;

    interface IAGCDamage
    {
        CONST_VTBL struct IAGCDamageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCDamage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCDamage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCDamage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCDamage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCDamage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCDamage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCDamage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCDamage_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCDamage_get_ObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) ) 

#define IAGCDamage_get_ObjectID(This,pObjectID)	\
    ( (This)->lpVtbl -> get_ObjectID(This,pObjectID) ) 

#define IAGCDamage_get_Game(This,ppGame)	\
    ( (This)->lpVtbl -> get_Game(This,ppGame) ) 

#define IAGCDamage_get_UniqueID(This,pUniqueID)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pUniqueID) ) 


#define IAGCDamage_get_IsVisible(This,pbVisible)	\
    ( (This)->lpVtbl -> get_IsVisible(This,pbVisible) ) 

#define IAGCDamage_get_IsSeenBySide(This,pTeam,pbSeen)	\
    ( (This)->lpVtbl -> get_IsSeenBySide(This,pTeam,pbSeen) ) 

#define IAGCDamage_get_Position(This,ppVector)	\
    ( (This)->lpVtbl -> get_Position(This,ppVector) ) 

#define IAGCDamage_get_Velocity(This,ppVector)	\
    ( (This)->lpVtbl -> get_Velocity(This,ppVector) ) 

#define IAGCDamage_get_Orientation(This,ppOrientation)	\
    ( (This)->lpVtbl -> get_Orientation(This,ppOrientation) ) 

#define IAGCDamage_get_Radius(This,pfRadius)	\
    ( (This)->lpVtbl -> get_Radius(This,pfRadius) ) 

#define IAGCDamage_get_Team(This,ppTeam)	\
    ( (This)->lpVtbl -> get_Team(This,ppTeam) ) 

#define IAGCDamage_get_Mass(This,pfMass)	\
    ( (This)->lpVtbl -> get_Mass(This,pfMass) ) 

#define IAGCDamage_get_Sector(This,ppSector)	\
    ( (This)->lpVtbl -> get_Sector(This,ppSector) ) 

#define IAGCDamage_get_Signature(This,pfSignature)	\
    ( (This)->lpVtbl -> get_Signature(This,pfSignature) ) 

#define IAGCDamage_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 


#define IAGCDamage_get_Fraction(This,pfFraction)	\
    ( (This)->lpVtbl -> get_Fraction(This,pfFraction) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCDamage_INTERFACE_DEFINED__ */


#ifndef __IAGCScanner_INTERFACE_DEFINED__
#define __IAGCScanner_INTERFACE_DEFINED__

/* interface IAGCScanner */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCScanner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E9004E70-0A42-11D3-8B58-00C04F681633")
    IAGCScanner : public IAGCDamage
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InScannerRange( 
            /* [in] */ IAGCModel *pModel,
            /* [retval][out] */ VARIANT_BOOL *pbInScannerRange) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CanSee( 
            /* [in] */ IAGCModel *pModel,
            /* [retval][out] */ VARIANT_BOOL *pbCanSee) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCScannerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCScanner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCScanner * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCScanner * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCScanner * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCScanner * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCScanner * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCScanner * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCScanner * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IAGCScanner * This,
            /* [retval][out] */ AGCObjectType *pObjectType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            IAGCScanner * This,
            /* [retval][out] */ AGCObjectID *pObjectID);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_Game)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Game )( 
            IAGCScanner * This,
            /* [retval][out] */ IAGCGame **ppGame);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_UniqueID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IAGCScanner * This,
            /* [retval][out] */ AGCUniqueID *pUniqueID);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsVisible)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsVisible )( 
            IAGCScanner * This,
            /* [retval][out] */ VARIANT_BOOL *pbVisible);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsSeenBySide)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSeenBySide )( 
            IAGCScanner * This,
            /* [in] */ IAGCTeam *pTeam,
            /* [retval][out] */ VARIANT_BOOL *pbSeen);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Position)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAGCScanner * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Velocity)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Velocity )( 
            IAGCScanner * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Orientation)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Orientation )( 
            IAGCScanner * This,
            /* [retval][out] */ IAGCOrientation **ppOrientation);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Radius)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            IAGCScanner * This,
            /* [retval][out] */ float *pfRadius);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Team)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Team )( 
            IAGCScanner * This,
            /* [retval][out] */ IAGCTeam **ppTeam);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Mass)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mass )( 
            IAGCScanner * This,
            /* [retval][out] */ float *pfMass);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Sector)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sector )( 
            IAGCScanner * This,
            /* [retval][out] */ IAGCSector **ppSector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Signature)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            IAGCScanner * This,
            /* [retval][out] */ float *pfSignature);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAGCScanner * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCDamage, get_Fraction)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fraction )( 
            IAGCScanner * This,
            /* [retval][out] */ float *pfFraction);
        
        DECLSPEC_XFGVIRT(IAGCScanner, get_InScannerRange)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InScannerRange )( 
            IAGCScanner * This,
            /* [in] */ IAGCModel *pModel,
            /* [retval][out] */ VARIANT_BOOL *pbInScannerRange);
        
        DECLSPEC_XFGVIRT(IAGCScanner, get_CanSee)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanSee )( 
            IAGCScanner * This,
            /* [in] */ IAGCModel *pModel,
            /* [retval][out] */ VARIANT_BOOL *pbCanSee);
        
        END_INTERFACE
    } IAGCScannerVtbl;

    interface IAGCScanner
    {
        CONST_VTBL struct IAGCScannerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCScanner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCScanner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCScanner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCScanner_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCScanner_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCScanner_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCScanner_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCScanner_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCScanner_get_ObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) ) 

#define IAGCScanner_get_ObjectID(This,pObjectID)	\
    ( (This)->lpVtbl -> get_ObjectID(This,pObjectID) ) 

#define IAGCScanner_get_Game(This,ppGame)	\
    ( (This)->lpVtbl -> get_Game(This,ppGame) ) 

#define IAGCScanner_get_UniqueID(This,pUniqueID)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pUniqueID) ) 


#define IAGCScanner_get_IsVisible(This,pbVisible)	\
    ( (This)->lpVtbl -> get_IsVisible(This,pbVisible) ) 

#define IAGCScanner_get_IsSeenBySide(This,pTeam,pbSeen)	\
    ( (This)->lpVtbl -> get_IsSeenBySide(This,pTeam,pbSeen) ) 

#define IAGCScanner_get_Position(This,ppVector)	\
    ( (This)->lpVtbl -> get_Position(This,ppVector) ) 

#define IAGCScanner_get_Velocity(This,ppVector)	\
    ( (This)->lpVtbl -> get_Velocity(This,ppVector) ) 

#define IAGCScanner_get_Orientation(This,ppOrientation)	\
    ( (This)->lpVtbl -> get_Orientation(This,ppOrientation) ) 

#define IAGCScanner_get_Radius(This,pfRadius)	\
    ( (This)->lpVtbl -> get_Radius(This,pfRadius) ) 

#define IAGCScanner_get_Team(This,ppTeam)	\
    ( (This)->lpVtbl -> get_Team(This,ppTeam) ) 

#define IAGCScanner_get_Mass(This,pfMass)	\
    ( (This)->lpVtbl -> get_Mass(This,pfMass) ) 

#define IAGCScanner_get_Sector(This,ppSector)	\
    ( (This)->lpVtbl -> get_Sector(This,ppSector) ) 

#define IAGCScanner_get_Signature(This,pfSignature)	\
    ( (This)->lpVtbl -> get_Signature(This,pfSignature) ) 

#define IAGCScanner_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 


#define IAGCScanner_get_Fraction(This,pfFraction)	\
    ( (This)->lpVtbl -> get_Fraction(This,pfFraction) ) 


#define IAGCScanner_get_InScannerRange(This,pModel,pbInScannerRange)	\
    ( (This)->lpVtbl -> get_InScannerRange(This,pModel,pbInScannerRange) ) 

#define IAGCScanner_get_CanSee(This,pModel,pbCanSee)	\
    ( (This)->lpVtbl -> get_CanSee(This,pModel,pbCanSee) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCScanner_INTERFACE_DEFINED__ */


#ifndef __IAGCProbe_INTERFACE_DEFINED__
#define __IAGCProbe_INTERFACE_DEFINED__

/* interface IAGCProbe */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCProbe;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A91FB76-71BA-4f1a-B1E8-A457A592854D")
    IAGCProbe : public IAGCScanner
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EmissionPoint( 
            /* [retval][out] */ IAGCVector **ppEmissionPoint) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Lifespan( 
            /* [retval][out] */ float *pfLifespan) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DtBurst( 
            /* [retval][out] */ float *pfDtBurst) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Accuracy( 
            /* [retval][out] */ float *pfAccuracy) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsRipcord( 
            /* [retval][out] */ VARIANT_BOOL *pbIsRipcord) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCProbeVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCProbe * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCProbe * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCProbe * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCProbe * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCProbe * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCProbe * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCProbe * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCProbe * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IAGCProbe * This,
            /* [retval][out] */ AGCObjectType *pObjectType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            IAGCProbe * This,
            /* [retval][out] */ AGCObjectID *pObjectID);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_Game)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Game )( 
            IAGCProbe * This,
            /* [retval][out] */ IAGCGame **ppGame);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_UniqueID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IAGCProbe * This,
            /* [retval][out] */ AGCUniqueID *pUniqueID);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsVisible)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsVisible )( 
            IAGCProbe * This,
            /* [retval][out] */ VARIANT_BOOL *pbVisible);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsSeenBySide)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSeenBySide )( 
            IAGCProbe * This,
            /* [in] */ IAGCTeam *pTeam,
            /* [retval][out] */ VARIANT_BOOL *pbSeen);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Position)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAGCProbe * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Velocity)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Velocity )( 
            IAGCProbe * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Orientation)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Orientation )( 
            IAGCProbe * This,
            /* [retval][out] */ IAGCOrientation **ppOrientation);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Radius)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            IAGCProbe * This,
            /* [retval][out] */ float *pfRadius);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Team)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Team )( 
            IAGCProbe * This,
            /* [retval][out] */ IAGCTeam **ppTeam);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Mass)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mass )( 
            IAGCProbe * This,
            /* [retval][out] */ float *pfMass);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Sector)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sector )( 
            IAGCProbe * This,
            /* [retval][out] */ IAGCSector **ppSector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Signature)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            IAGCProbe * This,
            /* [retval][out] */ float *pfSignature);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAGCProbe * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCDamage, get_Fraction)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fraction )( 
            IAGCProbe * This,
            /* [retval][out] */ float *pfFraction);
        
        DECLSPEC_XFGVIRT(IAGCScanner, get_InScannerRange)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InScannerRange )( 
            IAGCProbe * This,
            /* [in] */ IAGCModel *pModel,
            /* [retval][out] */ VARIANT_BOOL *pbInScannerRange);
        
        DECLSPEC_XFGVIRT(IAGCScanner, get_CanSee)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanSee )( 
            IAGCProbe * This,
            /* [in] */ IAGCModel *pModel,
            /* [retval][out] */ VARIANT_BOOL *pbCanSee);
        
        DECLSPEC_XFGVIRT(IAGCProbe, get_EmissionPoint)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EmissionPoint )( 
            IAGCProbe * This,
            /* [retval][out] */ IAGCVector **ppEmissionPoint);
        
        DECLSPEC_XFGVIRT(IAGCProbe, get_Lifespan)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Lifespan )( 
            IAGCProbe * This,
            /* [retval][out] */ float *pfLifespan);
        
        DECLSPEC_XFGVIRT(IAGCProbe, get_DtBurst)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DtBurst )( 
            IAGCProbe * This,
            /* [retval][out] */ float *pfDtBurst);
        
        DECLSPEC_XFGVIRT(IAGCProbe, get_Accuracy)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Accuracy )( 
            IAGCProbe * This,
            /* [retval][out] */ float *pfAccuracy);
        
        DECLSPEC_XFGVIRT(IAGCProbe, get_IsRipcord)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsRipcord )( 
            IAGCProbe * This,
            /* [retval][out] */ VARIANT_BOOL *pbIsRipcord);
        
        END_INTERFACE
    } IAGCProbeVtbl;

    interface IAGCProbe
    {
        CONST_VTBL struct IAGCProbeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCProbe_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCProbe_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCProbe_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCProbe_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCProbe_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCProbe_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCProbe_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCProbe_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCProbe_get_ObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) ) 

#define IAGCProbe_get_ObjectID(This,pObjectID)	\
    ( (This)->lpVtbl -> get_ObjectID(This,pObjectID) ) 

#define IAGCProbe_get_Game(This,ppGame)	\
    ( (This)->lpVtbl -> get_Game(This,ppGame) ) 

#define IAGCProbe_get_UniqueID(This,pUniqueID)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pUniqueID) ) 


#define IAGCProbe_get_IsVisible(This,pbVisible)	\
    ( (This)->lpVtbl -> get_IsVisible(This,pbVisible) ) 

#define IAGCProbe_get_IsSeenBySide(This,pTeam,pbSeen)	\
    ( (This)->lpVtbl -> get_IsSeenBySide(This,pTeam,pbSeen) ) 

#define IAGCProbe_get_Position(This,ppVector)	\
    ( (This)->lpVtbl -> get_Position(This,ppVector) ) 

#define IAGCProbe_get_Velocity(This,ppVector)	\
    ( (This)->lpVtbl -> get_Velocity(This,ppVector) ) 

#define IAGCProbe_get_Orientation(This,ppOrientation)	\
    ( (This)->lpVtbl -> get_Orientation(This,ppOrientation) ) 

#define IAGCProbe_get_Radius(This,pfRadius)	\
    ( (This)->lpVtbl -> get_Radius(This,pfRadius) ) 

#define IAGCProbe_get_Team(This,ppTeam)	\
    ( (This)->lpVtbl -> get_Team(This,ppTeam) ) 

#define IAGCProbe_get_Mass(This,pfMass)	\
    ( (This)->lpVtbl -> get_Mass(This,pfMass) ) 

#define IAGCProbe_get_Sector(This,ppSector)	\
    ( (This)->lpVtbl -> get_Sector(This,ppSector) ) 

#define IAGCProbe_get_Signature(This,pfSignature)	\
    ( (This)->lpVtbl -> get_Signature(This,pfSignature) ) 

#define IAGCProbe_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 


#define IAGCProbe_get_Fraction(This,pfFraction)	\
    ( (This)->lpVtbl -> get_Fraction(This,pfFraction) ) 


#define IAGCProbe_get_InScannerRange(This,pModel,pbInScannerRange)	\
    ( (This)->lpVtbl -> get_InScannerRange(This,pModel,pbInScannerRange) ) 

#define IAGCProbe_get_CanSee(This,pModel,pbCanSee)	\
    ( (This)->lpVtbl -> get_CanSee(This,pModel,pbCanSee) ) 


#define IAGCProbe_get_EmissionPoint(This,ppEmissionPoint)	\
    ( (This)->lpVtbl -> get_EmissionPoint(This,ppEmissionPoint) ) 

#define IAGCProbe_get_Lifespan(This,pfLifespan)	\
    ( (This)->lpVtbl -> get_Lifespan(This,pfLifespan) ) 

#define IAGCProbe_get_DtBurst(This,pfDtBurst)	\
    ( (This)->lpVtbl -> get_DtBurst(This,pfDtBurst) ) 

#define IAGCProbe_get_Accuracy(This,pfAccuracy)	\
    ( (This)->lpVtbl -> get_Accuracy(This,pfAccuracy) ) 

#define IAGCProbe_get_IsRipcord(This,pbIsRipcord)	\
    ( (This)->lpVtbl -> get_IsRipcord(This,pbIsRipcord) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCProbe_INTERFACE_DEFINED__ */


#ifndef __IAGCProbes_INTERFACE_DEFINED__
#define __IAGCProbes_INTERFACE_DEFINED__

/* interface IAGCProbes */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCProbes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8A003DBD-93E8-4922-AC4B-7AF44291A89D")
    IAGCProbes : public IAGCCollection
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCProbe **ppItemInterface) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCProbesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCProbes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCProbes * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCProbes * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCProbes * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCProbes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCProbes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCProbes * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCProbes * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAGCProbes * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get__NewEnum)
        /* [helpstring][id][restricted][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAGCProbes * This,
            /* [retval][out] */ IUnknown **ppunkEnum);
        
        DECLSPEC_XFGVIRT(IAGCProbes, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAGCProbes * This,
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCProbe **ppItemInterface);
        
        END_INTERFACE
    } IAGCProbesVtbl;

    interface IAGCProbes
    {
        CONST_VTBL struct IAGCProbesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCProbes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCProbes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCProbes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCProbes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCProbes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCProbes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCProbes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCProbes_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCProbes_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IAGCProbes_get__NewEnum(This,ppunkEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunkEnum) ) 


#define IAGCProbes_get_Item(This,pvIndex,ppItemInterface)	\
    ( (This)->lpVtbl -> get_Item(This,pvIndex,ppItemInterface) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCProbes_INTERFACE_DEFINED__ */


#ifndef __IAGCGame_INTERFACE_DEFINED__
#define __IAGCGame_INTERFACE_DEFINED__

/* interface IAGCGame */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCGame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E6D48FB7-0A41-11D3-8B58-00C04F681633")
    IAGCGame : public IAGCCommon
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Sectors( 
            /* [retval][out] */ IAGCSectors **ppAGCSectors) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Teams( 
            /* [retval][out] */ IAGCTeams **ppAGCTeams) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LookupShip( 
            /* [in] */ AGCUniqueID idAGC,
            /* [retval][out] */ IAGCShip **ppAGCObject) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Ships( 
            /* [retval][out] */ IAGCShips **ppShips) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Alephs( 
            /* [retval][out] */ IAGCAlephs **ppAlephs) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Asteroids( 
            /* [retval][out] */ IAGCAsteroids **ppAsteroids) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GameParameters( 
            /* [retval][out] */ IAGCGameParameters **ppParams) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GameID( 
            /* [retval][out] */ AGCGameID *pMissionId) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LookupTeam( 
            /* [in] */ AGCObjectID idAGC,
            /* [retval][out] */ IAGCTeam **ppAGCObject) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendChat( 
            /* [in] */ BSTR bstrText,
            /* [defaultvalue][in] */ AGCSoundID idSound = -1) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendCommand( 
            /* [in] */ BSTR bstrCommand,
            /* [in] */ IAGCModel *pModelTarget,
            /* [defaultvalue][in] */ AGCSoundID idSound = -1) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GameStage( 
            /* [retval][out] */ AGCGameStage *pStage) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Probes( 
            /* [retval][out] */ IAGCProbes **ppProbes) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Buoys( 
            /* [retval][out] */ IAGCModels **ppBuoys) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Treasures( 
            /* [retval][out] */ IAGCModels **ppTreasures) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Mines( 
            /* [retval][out] */ IAGCModels **ppMines) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReplayCount( 
            /* [retval][out] */ short *pnReplays) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ContextName( 
            /* [retval][out] */ BSTR *pbstrContextName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCGameVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCGame * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCGame * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCGame * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCGame * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCGame * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCGame * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCGame * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCGame * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAGCGame * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_Sectors)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sectors )( 
            IAGCGame * This,
            /* [retval][out] */ IAGCSectors **ppAGCSectors);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_Teams)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Teams )( 
            IAGCGame * This,
            /* [retval][out] */ IAGCTeams **ppAGCTeams);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_LookupShip)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LookupShip )( 
            IAGCGame * This,
            /* [in] */ AGCUniqueID idAGC,
            /* [retval][out] */ IAGCShip **ppAGCObject);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_Ships)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ships )( 
            IAGCGame * This,
            /* [retval][out] */ IAGCShips **ppShips);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_Alephs)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Alephs )( 
            IAGCGame * This,
            /* [retval][out] */ IAGCAlephs **ppAlephs);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_Asteroids)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Asteroids )( 
            IAGCGame * This,
            /* [retval][out] */ IAGCAsteroids **ppAsteroids);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_GameParameters)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GameParameters )( 
            IAGCGame * This,
            /* [retval][out] */ IAGCGameParameters **ppParams);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_GameID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GameID )( 
            IAGCGame * This,
            /* [retval][out] */ AGCGameID *pMissionId);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_LookupTeam)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LookupTeam )( 
            IAGCGame * This,
            /* [in] */ AGCObjectID idAGC,
            /* [retval][out] */ IAGCTeam **ppAGCObject);
        
        DECLSPEC_XFGVIRT(IAGCGame, SendChat)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendChat )( 
            IAGCGame * This,
            /* [in] */ BSTR bstrText,
            /* [defaultvalue][in] */ AGCSoundID idSound);
        
        DECLSPEC_XFGVIRT(IAGCGame, SendCommand)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendCommand )( 
            IAGCGame * This,
            /* [in] */ BSTR bstrCommand,
            /* [in] */ IAGCModel *pModelTarget,
            /* [defaultvalue][in] */ AGCSoundID idSound);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_GameStage)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GameStage )( 
            IAGCGame * This,
            /* [retval][out] */ AGCGameStage *pStage);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_Probes)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Probes )( 
            IAGCGame * This,
            /* [retval][out] */ IAGCProbes **ppProbes);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_Buoys)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Buoys )( 
            IAGCGame * This,
            /* [retval][out] */ IAGCModels **ppBuoys);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_Treasures)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Treasures )( 
            IAGCGame * This,
            /* [retval][out] */ IAGCModels **ppTreasures);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_Mines)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mines )( 
            IAGCGame * This,
            /* [retval][out] */ IAGCModels **ppMines);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_ReplayCount)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReplayCount )( 
            IAGCGame * This,
            /* [retval][out] */ short *pnReplays);
        
        DECLSPEC_XFGVIRT(IAGCGame, get_ContextName)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContextName )( 
            IAGCGame * This,
            /* [retval][out] */ BSTR *pbstrContextName);
        
        END_INTERFACE
    } IAGCGameVtbl;

    interface IAGCGame
    {
        CONST_VTBL struct IAGCGameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCGame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCGame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCGame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCGame_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCGame_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCGame_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCGame_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCGame_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCGame_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#define IAGCGame_get_Sectors(This,ppAGCSectors)	\
    ( (This)->lpVtbl -> get_Sectors(This,ppAGCSectors) ) 

#define IAGCGame_get_Teams(This,ppAGCTeams)	\
    ( (This)->lpVtbl -> get_Teams(This,ppAGCTeams) ) 

#define IAGCGame_get_LookupShip(This,idAGC,ppAGCObject)	\
    ( (This)->lpVtbl -> get_LookupShip(This,idAGC,ppAGCObject) ) 

#define IAGCGame_get_Ships(This,ppShips)	\
    ( (This)->lpVtbl -> get_Ships(This,ppShips) ) 

#define IAGCGame_get_Alephs(This,ppAlephs)	\
    ( (This)->lpVtbl -> get_Alephs(This,ppAlephs) ) 

#define IAGCGame_get_Asteroids(This,ppAsteroids)	\
    ( (This)->lpVtbl -> get_Asteroids(This,ppAsteroids) ) 

#define IAGCGame_get_GameParameters(This,ppParams)	\
    ( (This)->lpVtbl -> get_GameParameters(This,ppParams) ) 

#define IAGCGame_get_GameID(This,pMissionId)	\
    ( (This)->lpVtbl -> get_GameID(This,pMissionId) ) 

#define IAGCGame_get_LookupTeam(This,idAGC,ppAGCObject)	\
    ( (This)->lpVtbl -> get_LookupTeam(This,idAGC,ppAGCObject) ) 

#define IAGCGame_SendChat(This,bstrText,idSound)	\
    ( (This)->lpVtbl -> SendChat(This,bstrText,idSound) ) 

#define IAGCGame_SendCommand(This,bstrCommand,pModelTarget,idSound)	\
    ( (This)->lpVtbl -> SendCommand(This,bstrCommand,pModelTarget,idSound) ) 

#define IAGCGame_get_GameStage(This,pStage)	\
    ( (This)->lpVtbl -> get_GameStage(This,pStage) ) 

#define IAGCGame_get_Probes(This,ppProbes)	\
    ( (This)->lpVtbl -> get_Probes(This,ppProbes) ) 

#define IAGCGame_get_Buoys(This,ppBuoys)	\
    ( (This)->lpVtbl -> get_Buoys(This,ppBuoys) ) 

#define IAGCGame_get_Treasures(This,ppTreasures)	\
    ( (This)->lpVtbl -> get_Treasures(This,ppTreasures) ) 

#define IAGCGame_get_Mines(This,ppMines)	\
    ( (This)->lpVtbl -> get_Mines(This,ppMines) ) 

#define IAGCGame_get_ReplayCount(This,pnReplays)	\
    ( (This)->lpVtbl -> get_ReplayCount(This,pnReplays) ) 

#define IAGCGame_get_ContextName(This,pbstrContextName)	\
    ( (This)->lpVtbl -> get_ContextName(This,pbstrContextName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCGame_INTERFACE_DEFINED__ */


#ifndef __IAGCShip_INTERFACE_DEFINED__
#define __IAGCShip_INTERFACE_DEFINED__

/* interface IAGCShip */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCShip;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4F860D30-0A42-11D3-8B58-00C04F681633")
    IAGCShip : public IAGCScanner
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Ammo( 
            /* [in] */ short Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Ammo( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Fuel( 
            /* [in] */ float Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Fuel( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_Energy( 
            /* [in] */ float Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Energy( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_WingID( 
            /* [in] */ short Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WingID( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendChat( 
            /* [in] */ BSTR bstrText,
            /* [defaultvalue][in] */ AGCSoundID idSound = -1) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendCommand( 
            /* [in] */ BSTR bstrCommand,
            /* [in] */ IAGCModel *pModelTarget,
            /* [defaultvalue][in] */ AGCSoundID idSound = -1) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_AutoDonate( 
            /* [in] */ IAGCShip *pShip) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AutoDonate( 
            /* [retval][out] */ IAGCShip **ppShip) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ShieldFraction( 
            /* [in] */ float pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShieldFraction( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HullType( 
            /* [retval][out] */ IAGCHullType **ppHullType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BaseHullType( 
            /* [retval][out] */ IAGCHullType **ppHullType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCShipVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCShip * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCShip * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCShip * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCShip * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCShip * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCShip * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCShip * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCShip * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IAGCShip * This,
            /* [retval][out] */ AGCObjectType *pObjectType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            IAGCShip * This,
            /* [retval][out] */ AGCObjectID *pObjectID);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_Game)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Game )( 
            IAGCShip * This,
            /* [retval][out] */ IAGCGame **ppGame);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_UniqueID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IAGCShip * This,
            /* [retval][out] */ AGCUniqueID *pUniqueID);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsVisible)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsVisible )( 
            IAGCShip * This,
            /* [retval][out] */ VARIANT_BOOL *pbVisible);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsSeenBySide)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSeenBySide )( 
            IAGCShip * This,
            /* [in] */ IAGCTeam *pTeam,
            /* [retval][out] */ VARIANT_BOOL *pbSeen);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Position)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAGCShip * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Velocity)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Velocity )( 
            IAGCShip * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Orientation)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Orientation )( 
            IAGCShip * This,
            /* [retval][out] */ IAGCOrientation **ppOrientation);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Radius)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            IAGCShip * This,
            /* [retval][out] */ float *pfRadius);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Team)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Team )( 
            IAGCShip * This,
            /* [retval][out] */ IAGCTeam **ppTeam);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Mass)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mass )( 
            IAGCShip * This,
            /* [retval][out] */ float *pfMass);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Sector)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sector )( 
            IAGCShip * This,
            /* [retval][out] */ IAGCSector **ppSector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Signature)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            IAGCShip * This,
            /* [retval][out] */ float *pfSignature);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAGCShip * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCDamage, get_Fraction)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fraction )( 
            IAGCShip * This,
            /* [retval][out] */ float *pfFraction);
        
        DECLSPEC_XFGVIRT(IAGCScanner, get_InScannerRange)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InScannerRange )( 
            IAGCShip * This,
            /* [in] */ IAGCModel *pModel,
            /* [retval][out] */ VARIANT_BOOL *pbInScannerRange);
        
        DECLSPEC_XFGVIRT(IAGCScanner, get_CanSee)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanSee )( 
            IAGCShip * This,
            /* [in] */ IAGCModel *pModel,
            /* [retval][out] */ VARIANT_BOOL *pbCanSee);
        
        DECLSPEC_XFGVIRT(IAGCShip, put_Ammo)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Ammo )( 
            IAGCShip * This,
            /* [in] */ short Val);
        
        DECLSPEC_XFGVIRT(IAGCShip, get_Ammo)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ammo )( 
            IAGCShip * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCShip, put_Fuel)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Fuel )( 
            IAGCShip * This,
            /* [in] */ float Val);
        
        DECLSPEC_XFGVIRT(IAGCShip, get_Fuel)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fuel )( 
            IAGCShip * This,
            /* [retval][out] */ float *pVal);
        
        DECLSPEC_XFGVIRT(IAGCShip, put_Energy)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Energy )( 
            IAGCShip * This,
            /* [in] */ float Val);
        
        DECLSPEC_XFGVIRT(IAGCShip, get_Energy)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Energy )( 
            IAGCShip * This,
            /* [retval][out] */ float *pVal);
        
        DECLSPEC_XFGVIRT(IAGCShip, put_WingID)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WingID )( 
            IAGCShip * This,
            /* [in] */ short Val);
        
        DECLSPEC_XFGVIRT(IAGCShip, get_WingID)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WingID )( 
            IAGCShip * This,
            /* [retval][out] */ short *pVal);
        
        DECLSPEC_XFGVIRT(IAGCShip, SendChat)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendChat )( 
            IAGCShip * This,
            /* [in] */ BSTR bstrText,
            /* [defaultvalue][in] */ AGCSoundID idSound);
        
        DECLSPEC_XFGVIRT(IAGCShip, SendCommand)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendCommand )( 
            IAGCShip * This,
            /* [in] */ BSTR bstrCommand,
            /* [in] */ IAGCModel *pModelTarget,
            /* [defaultvalue][in] */ AGCSoundID idSound);
        
        DECLSPEC_XFGVIRT(IAGCShip, put_AutoDonate)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AutoDonate )( 
            IAGCShip * This,
            /* [in] */ IAGCShip *pShip);
        
        DECLSPEC_XFGVIRT(IAGCShip, get_AutoDonate)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutoDonate )( 
            IAGCShip * This,
            /* [retval][out] */ IAGCShip **ppShip);
        
        DECLSPEC_XFGVIRT(IAGCShip, put_ShieldFraction)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShieldFraction )( 
            IAGCShip * This,
            /* [in] */ float pVal);
        
        DECLSPEC_XFGVIRT(IAGCShip, get_ShieldFraction)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShieldFraction )( 
            IAGCShip * This,
            /* [retval][out] */ float *pVal);
        
        DECLSPEC_XFGVIRT(IAGCShip, get_HullType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HullType )( 
            IAGCShip * This,
            /* [retval][out] */ IAGCHullType **ppHullType);
        
        DECLSPEC_XFGVIRT(IAGCShip, get_BaseHullType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BaseHullType )( 
            IAGCShip * This,
            /* [retval][out] */ IAGCHullType **ppHullType);
        
        END_INTERFACE
    } IAGCShipVtbl;

    interface IAGCShip
    {
        CONST_VTBL struct IAGCShipVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCShip_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCShip_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCShip_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCShip_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCShip_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCShip_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCShip_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCShip_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCShip_get_ObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) ) 

#define IAGCShip_get_ObjectID(This,pObjectID)	\
    ( (This)->lpVtbl -> get_ObjectID(This,pObjectID) ) 

#define IAGCShip_get_Game(This,ppGame)	\
    ( (This)->lpVtbl -> get_Game(This,ppGame) ) 

#define IAGCShip_get_UniqueID(This,pUniqueID)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pUniqueID) ) 


#define IAGCShip_get_IsVisible(This,pbVisible)	\
    ( (This)->lpVtbl -> get_IsVisible(This,pbVisible) ) 

#define IAGCShip_get_IsSeenBySide(This,pTeam,pbSeen)	\
    ( (This)->lpVtbl -> get_IsSeenBySide(This,pTeam,pbSeen) ) 

#define IAGCShip_get_Position(This,ppVector)	\
    ( (This)->lpVtbl -> get_Position(This,ppVector) ) 

#define IAGCShip_get_Velocity(This,ppVector)	\
    ( (This)->lpVtbl -> get_Velocity(This,ppVector) ) 

#define IAGCShip_get_Orientation(This,ppOrientation)	\
    ( (This)->lpVtbl -> get_Orientation(This,ppOrientation) ) 

#define IAGCShip_get_Radius(This,pfRadius)	\
    ( (This)->lpVtbl -> get_Radius(This,pfRadius) ) 

#define IAGCShip_get_Team(This,ppTeam)	\
    ( (This)->lpVtbl -> get_Team(This,ppTeam) ) 

#define IAGCShip_get_Mass(This,pfMass)	\
    ( (This)->lpVtbl -> get_Mass(This,pfMass) ) 

#define IAGCShip_get_Sector(This,ppSector)	\
    ( (This)->lpVtbl -> get_Sector(This,ppSector) ) 

#define IAGCShip_get_Signature(This,pfSignature)	\
    ( (This)->lpVtbl -> get_Signature(This,pfSignature) ) 

#define IAGCShip_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 


#define IAGCShip_get_Fraction(This,pfFraction)	\
    ( (This)->lpVtbl -> get_Fraction(This,pfFraction) ) 


#define IAGCShip_get_InScannerRange(This,pModel,pbInScannerRange)	\
    ( (This)->lpVtbl -> get_InScannerRange(This,pModel,pbInScannerRange) ) 

#define IAGCShip_get_CanSee(This,pModel,pbCanSee)	\
    ( (This)->lpVtbl -> get_CanSee(This,pModel,pbCanSee) ) 


#define IAGCShip_put_Ammo(This,Val)	\
    ( (This)->lpVtbl -> put_Ammo(This,Val) ) 

#define IAGCShip_get_Ammo(This,pVal)	\
    ( (This)->lpVtbl -> get_Ammo(This,pVal) ) 

#define IAGCShip_put_Fuel(This,Val)	\
    ( (This)->lpVtbl -> put_Fuel(This,Val) ) 

#define IAGCShip_get_Fuel(This,pVal)	\
    ( (This)->lpVtbl -> get_Fuel(This,pVal) ) 

#define IAGCShip_put_Energy(This,Val)	\
    ( (This)->lpVtbl -> put_Energy(This,Val) ) 

#define IAGCShip_get_Energy(This,pVal)	\
    ( (This)->lpVtbl -> get_Energy(This,pVal) ) 

#define IAGCShip_put_WingID(This,Val)	\
    ( (This)->lpVtbl -> put_WingID(This,Val) ) 

#define IAGCShip_get_WingID(This,pVal)	\
    ( (This)->lpVtbl -> get_WingID(This,pVal) ) 

#define IAGCShip_SendChat(This,bstrText,idSound)	\
    ( (This)->lpVtbl -> SendChat(This,bstrText,idSound) ) 

#define IAGCShip_SendCommand(This,bstrCommand,pModelTarget,idSound)	\
    ( (This)->lpVtbl -> SendCommand(This,bstrCommand,pModelTarget,idSound) ) 

#define IAGCShip_put_AutoDonate(This,pShip)	\
    ( (This)->lpVtbl -> put_AutoDonate(This,pShip) ) 

#define IAGCShip_get_AutoDonate(This,ppShip)	\
    ( (This)->lpVtbl -> get_AutoDonate(This,ppShip) ) 

#define IAGCShip_put_ShieldFraction(This,pVal)	\
    ( (This)->lpVtbl -> put_ShieldFraction(This,pVal) ) 

#define IAGCShip_get_ShieldFraction(This,pVal)	\
    ( (This)->lpVtbl -> get_ShieldFraction(This,pVal) ) 

#define IAGCShip_get_HullType(This,ppHullType)	\
    ( (This)->lpVtbl -> get_HullType(This,ppHullType) ) 

#define IAGCShip_get_BaseHullType(This,ppHullType)	\
    ( (This)->lpVtbl -> get_BaseHullType(This,ppHullType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCShip_INTERFACE_DEFINED__ */


#ifndef __IAGCShips_INTERFACE_DEFINED__
#define __IAGCShips_INTERFACE_DEFINED__

/* interface IAGCShips */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCShips;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EDB8C96C-1EBE-11d3-8B63-00C04F681633")
    IAGCShips : public IAGCCollection
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCShip **ppItemInterface) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCShipsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCShips * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCShips * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCShips * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCShips * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCShips * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCShips * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCShips * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCShips * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAGCShips * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get__NewEnum)
        /* [helpstring][id][restricted][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAGCShips * This,
            /* [retval][out] */ IUnknown **ppunkEnum);
        
        DECLSPEC_XFGVIRT(IAGCShips, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAGCShips * This,
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCShip **ppItemInterface);
        
        END_INTERFACE
    } IAGCShipsVtbl;

    interface IAGCShips
    {
        CONST_VTBL struct IAGCShipsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCShips_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCShips_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCShips_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCShips_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCShips_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCShips_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCShips_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCShips_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCShips_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IAGCShips_get__NewEnum(This,ppunkEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunkEnum) ) 


#define IAGCShips_get_Item(This,pvIndex,ppItemInterface)	\
    ( (This)->lpVtbl -> get_Item(This,pvIndex,ppItemInterface) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCShips_INTERFACE_DEFINED__ */


#ifndef __IAGCStation_INTERFACE_DEFINED__
#define __IAGCStation_INTERFACE_DEFINED__

/* interface IAGCStation */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCStation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C9438C34-026A-11D3-8B55-00C04F681633")
    IAGCStation : public IAGCScanner
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_ShieldFraction( 
            /* [in] */ float pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShieldFraction( 
            /* [retval][out] */ float *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCStationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCStation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCStation * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCStation * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCStation * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCStation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCStation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCStation * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCStation * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IAGCStation * This,
            /* [retval][out] */ AGCObjectType *pObjectType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            IAGCStation * This,
            /* [retval][out] */ AGCObjectID *pObjectID);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_Game)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Game )( 
            IAGCStation * This,
            /* [retval][out] */ IAGCGame **ppGame);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_UniqueID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IAGCStation * This,
            /* [retval][out] */ AGCUniqueID *pUniqueID);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsVisible)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsVisible )( 
            IAGCStation * This,
            /* [retval][out] */ VARIANT_BOOL *pbVisible);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsSeenBySide)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSeenBySide )( 
            IAGCStation * This,
            /* [in] */ IAGCTeam *pTeam,
            /* [retval][out] */ VARIANT_BOOL *pbSeen);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Position)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAGCStation * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Velocity)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Velocity )( 
            IAGCStation * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Orientation)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Orientation )( 
            IAGCStation * This,
            /* [retval][out] */ IAGCOrientation **ppOrientation);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Radius)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            IAGCStation * This,
            /* [retval][out] */ float *pfRadius);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Team)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Team )( 
            IAGCStation * This,
            /* [retval][out] */ IAGCTeam **ppTeam);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Mass)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mass )( 
            IAGCStation * This,
            /* [retval][out] */ float *pfMass);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Sector)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sector )( 
            IAGCStation * This,
            /* [retval][out] */ IAGCSector **ppSector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Signature)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            IAGCStation * This,
            /* [retval][out] */ float *pfSignature);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAGCStation * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCDamage, get_Fraction)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fraction )( 
            IAGCStation * This,
            /* [retval][out] */ float *pfFraction);
        
        DECLSPEC_XFGVIRT(IAGCScanner, get_InScannerRange)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InScannerRange )( 
            IAGCStation * This,
            /* [in] */ IAGCModel *pModel,
            /* [retval][out] */ VARIANT_BOOL *pbInScannerRange);
        
        DECLSPEC_XFGVIRT(IAGCScanner, get_CanSee)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanSee )( 
            IAGCStation * This,
            /* [in] */ IAGCModel *pModel,
            /* [retval][out] */ VARIANT_BOOL *pbCanSee);
        
        DECLSPEC_XFGVIRT(IAGCStation, put_ShieldFraction)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShieldFraction )( 
            IAGCStation * This,
            /* [in] */ float pVal);
        
        DECLSPEC_XFGVIRT(IAGCStation, get_ShieldFraction)
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShieldFraction )( 
            IAGCStation * This,
            /* [retval][out] */ float *pVal);
        
        END_INTERFACE
    } IAGCStationVtbl;

    interface IAGCStation
    {
        CONST_VTBL struct IAGCStationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCStation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCStation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCStation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCStation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCStation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCStation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCStation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCStation_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCStation_get_ObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) ) 

#define IAGCStation_get_ObjectID(This,pObjectID)	\
    ( (This)->lpVtbl -> get_ObjectID(This,pObjectID) ) 

#define IAGCStation_get_Game(This,ppGame)	\
    ( (This)->lpVtbl -> get_Game(This,ppGame) ) 

#define IAGCStation_get_UniqueID(This,pUniqueID)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pUniqueID) ) 


#define IAGCStation_get_IsVisible(This,pbVisible)	\
    ( (This)->lpVtbl -> get_IsVisible(This,pbVisible) ) 

#define IAGCStation_get_IsSeenBySide(This,pTeam,pbSeen)	\
    ( (This)->lpVtbl -> get_IsSeenBySide(This,pTeam,pbSeen) ) 

#define IAGCStation_get_Position(This,ppVector)	\
    ( (This)->lpVtbl -> get_Position(This,ppVector) ) 

#define IAGCStation_get_Velocity(This,ppVector)	\
    ( (This)->lpVtbl -> get_Velocity(This,ppVector) ) 

#define IAGCStation_get_Orientation(This,ppOrientation)	\
    ( (This)->lpVtbl -> get_Orientation(This,ppOrientation) ) 

#define IAGCStation_get_Radius(This,pfRadius)	\
    ( (This)->lpVtbl -> get_Radius(This,pfRadius) ) 

#define IAGCStation_get_Team(This,ppTeam)	\
    ( (This)->lpVtbl -> get_Team(This,ppTeam) ) 

#define IAGCStation_get_Mass(This,pfMass)	\
    ( (This)->lpVtbl -> get_Mass(This,pfMass) ) 

#define IAGCStation_get_Sector(This,ppSector)	\
    ( (This)->lpVtbl -> get_Sector(This,ppSector) ) 

#define IAGCStation_get_Signature(This,pfSignature)	\
    ( (This)->lpVtbl -> get_Signature(This,pfSignature) ) 

#define IAGCStation_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 


#define IAGCStation_get_Fraction(This,pfFraction)	\
    ( (This)->lpVtbl -> get_Fraction(This,pfFraction) ) 


#define IAGCStation_get_InScannerRange(This,pModel,pbInScannerRange)	\
    ( (This)->lpVtbl -> get_InScannerRange(This,pModel,pbInScannerRange) ) 

#define IAGCStation_get_CanSee(This,pModel,pbCanSee)	\
    ( (This)->lpVtbl -> get_CanSee(This,pModel,pbCanSee) ) 


#define IAGCStation_put_ShieldFraction(This,pVal)	\
    ( (This)->lpVtbl -> put_ShieldFraction(This,pVal) ) 

#define IAGCStation_get_ShieldFraction(This,pVal)	\
    ( (This)->lpVtbl -> get_ShieldFraction(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCStation_INTERFACE_DEFINED__ */


#ifndef __IAGCStations_INTERFACE_DEFINED__
#define __IAGCStations_INTERFACE_DEFINED__

/* interface IAGCStations */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCStations;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6EA96980-0272-11D3-8B55-00C04F681633")
    IAGCStations : public IAGCCollection
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCStation **ppItemInterface) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCStationsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCStations * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCStations * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCStations * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCStations * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCStations * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCStations * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCStations * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCStations * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAGCStations * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get__NewEnum)
        /* [helpstring][id][restricted][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAGCStations * This,
            /* [retval][out] */ IUnknown **ppunkEnum);
        
        DECLSPEC_XFGVIRT(IAGCStations, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAGCStations * This,
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCStation **ppItemInterface);
        
        END_INTERFACE
    } IAGCStationsVtbl;

    interface IAGCStations
    {
        CONST_VTBL struct IAGCStationsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCStations_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCStations_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCStations_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCStations_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCStations_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCStations_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCStations_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCStations_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCStations_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IAGCStations_get__NewEnum(This,ppunkEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunkEnum) ) 


#define IAGCStations_get_Item(This,pvIndex,ppItemInterface)	\
    ( (This)->lpVtbl -> get_Item(This,pvIndex,ppItemInterface) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCStations_INTERFACE_DEFINED__ */


#ifndef __IAGCAleph_INTERFACE_DEFINED__
#define __IAGCAleph_INTERFACE_DEFINED__

/* interface IAGCAleph */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCAleph;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0AFEC67E-0325-11D3-8B57-00C04F681633")
    IAGCAleph : public IAGCModel
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Destination( 
            /* [retval][out] */ IAGCAleph **ppDestination) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCAlephVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCAleph * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCAleph * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCAleph * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCAleph * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCAleph * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCAleph * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCAleph * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCAleph * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IAGCAleph * This,
            /* [retval][out] */ AGCObjectType *pObjectType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            IAGCAleph * This,
            /* [retval][out] */ AGCObjectID *pObjectID);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_Game)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Game )( 
            IAGCAleph * This,
            /* [retval][out] */ IAGCGame **ppGame);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_UniqueID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IAGCAleph * This,
            /* [retval][out] */ AGCUniqueID *pUniqueID);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsVisible)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsVisible )( 
            IAGCAleph * This,
            /* [retval][out] */ VARIANT_BOOL *pbVisible);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsSeenBySide)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSeenBySide )( 
            IAGCAleph * This,
            /* [in] */ IAGCTeam *pTeam,
            /* [retval][out] */ VARIANT_BOOL *pbSeen);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Position)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAGCAleph * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Velocity)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Velocity )( 
            IAGCAleph * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Orientation)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Orientation )( 
            IAGCAleph * This,
            /* [retval][out] */ IAGCOrientation **ppOrientation);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Radius)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            IAGCAleph * This,
            /* [retval][out] */ float *pfRadius);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Team)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Team )( 
            IAGCAleph * This,
            /* [retval][out] */ IAGCTeam **ppTeam);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Mass)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mass )( 
            IAGCAleph * This,
            /* [retval][out] */ float *pfMass);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Sector)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sector )( 
            IAGCAleph * This,
            /* [retval][out] */ IAGCSector **ppSector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Signature)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            IAGCAleph * This,
            /* [retval][out] */ float *pfSignature);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAGCAleph * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCAleph, get_Destination)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Destination )( 
            IAGCAleph * This,
            /* [retval][out] */ IAGCAleph **ppDestination);
        
        END_INTERFACE
    } IAGCAlephVtbl;

    interface IAGCAleph
    {
        CONST_VTBL struct IAGCAlephVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCAleph_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCAleph_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCAleph_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCAleph_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCAleph_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCAleph_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCAleph_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCAleph_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCAleph_get_ObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) ) 

#define IAGCAleph_get_ObjectID(This,pObjectID)	\
    ( (This)->lpVtbl -> get_ObjectID(This,pObjectID) ) 

#define IAGCAleph_get_Game(This,ppGame)	\
    ( (This)->lpVtbl -> get_Game(This,ppGame) ) 

#define IAGCAleph_get_UniqueID(This,pUniqueID)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pUniqueID) ) 


#define IAGCAleph_get_IsVisible(This,pbVisible)	\
    ( (This)->lpVtbl -> get_IsVisible(This,pbVisible) ) 

#define IAGCAleph_get_IsSeenBySide(This,pTeam,pbSeen)	\
    ( (This)->lpVtbl -> get_IsSeenBySide(This,pTeam,pbSeen) ) 

#define IAGCAleph_get_Position(This,ppVector)	\
    ( (This)->lpVtbl -> get_Position(This,ppVector) ) 

#define IAGCAleph_get_Velocity(This,ppVector)	\
    ( (This)->lpVtbl -> get_Velocity(This,ppVector) ) 

#define IAGCAleph_get_Orientation(This,ppOrientation)	\
    ( (This)->lpVtbl -> get_Orientation(This,ppOrientation) ) 

#define IAGCAleph_get_Radius(This,pfRadius)	\
    ( (This)->lpVtbl -> get_Radius(This,pfRadius) ) 

#define IAGCAleph_get_Team(This,ppTeam)	\
    ( (This)->lpVtbl -> get_Team(This,ppTeam) ) 

#define IAGCAleph_get_Mass(This,pfMass)	\
    ( (This)->lpVtbl -> get_Mass(This,pfMass) ) 

#define IAGCAleph_get_Sector(This,ppSector)	\
    ( (This)->lpVtbl -> get_Sector(This,ppSector) ) 

#define IAGCAleph_get_Signature(This,pfSignature)	\
    ( (This)->lpVtbl -> get_Signature(This,pfSignature) ) 

#define IAGCAleph_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 


#define IAGCAleph_get_Destination(This,ppDestination)	\
    ( (This)->lpVtbl -> get_Destination(This,ppDestination) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCAleph_INTERFACE_DEFINED__ */


#ifndef __IAGCAlephs_INTERFACE_DEFINED__
#define __IAGCAlephs_INTERFACE_DEFINED__

/* interface IAGCAlephs */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCAlephs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88400BB3-026B-11D3-8B55-00C04F681633")
    IAGCAlephs : public IAGCCollection
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCAleph **ppAGCAleph) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCAlephsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCAlephs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCAlephs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCAlephs * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCAlephs * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCAlephs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCAlephs * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCAlephs * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCAlephs * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAGCAlephs * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get__NewEnum)
        /* [helpstring][id][restricted][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAGCAlephs * This,
            /* [retval][out] */ IUnknown **ppunkEnum);
        
        DECLSPEC_XFGVIRT(IAGCAlephs, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAGCAlephs * This,
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCAleph **ppAGCAleph);
        
        END_INTERFACE
    } IAGCAlephsVtbl;

    interface IAGCAlephs
    {
        CONST_VTBL struct IAGCAlephsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCAlephs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCAlephs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCAlephs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCAlephs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCAlephs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCAlephs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCAlephs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCAlephs_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCAlephs_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IAGCAlephs_get__NewEnum(This,ppunkEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunkEnum) ) 


#define IAGCAlephs_get_Item(This,pvIndex,ppAGCAleph)	\
    ( (This)->lpVtbl -> get_Item(This,pvIndex,ppAGCAleph) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCAlephs_INTERFACE_DEFINED__ */


#ifndef __IAGCSector_INTERFACE_DEFINED__
#define __IAGCSector_INTERFACE_DEFINED__

/* interface IAGCSector */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCSector;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1FC0E193-EBA5-11D2-8B4B-00C04F681633")
    IAGCSector : public IAGCBase
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Stations( 
            /* [retval][out] */ IAGCStations **ppStations) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Ships( 
            /* [retval][out] */ IAGCShips **ppShips) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Alephs( 
            /* [retval][out] */ IAGCAlephs **ppAlephs) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Asteroids( 
            /* [retval][out] */ IAGCAsteroids **ppAsteroids) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendChat( 
            /* [in] */ BSTR bstrText,
            /* [defaultvalue][in] */ VARIANT_BOOL bIncludeEnemies = 0,
            /* [defaultvalue][in] */ AGCSoundID idSound = -1) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendCommand( 
            /* [in] */ BSTR bstrCommand,
            /* [in] */ IAGCModel *pModelTarget,
            /* [defaultvalue][in] */ VARIANT_BOOL bIncludeEnemies = 0,
            /* [defaultvalue][in] */ AGCSoundID idSound = -1) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScreenX( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScreenY( 
            /* [retval][out] */ float *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Mines( 
            /* [retval][out] */ IAGCModels **ppMines) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Missiles( 
            /* [retval][out] */ IAGCModels **ppMissiles) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Probes( 
            /* [retval][out] */ IAGCProbes **ppProbes) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Models( 
            /* [retval][out] */ IAGCModels **ppModels) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SelectableModels( 
            /* [retval][out] */ IAGCModels **ppModels) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Treasures( 
            /* [retval][out] */ IAGCModels **ppTreasures) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCSectorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCSector * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCSector * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCSector * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCSector * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCSector * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCSector * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCSector * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCSector * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IAGCSector * This,
            /* [retval][out] */ AGCObjectType *pObjectType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            IAGCSector * This,
            /* [retval][out] */ AGCObjectID *pObjectID);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_Game)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Game )( 
            IAGCSector * This,
            /* [retval][out] */ IAGCGame **ppGame);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_UniqueID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IAGCSector * This,
            /* [retval][out] */ AGCUniqueID *pUniqueID);
        
        DECLSPEC_XFGVIRT(IAGCSector, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAGCSector * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCSector, get_Stations)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stations )( 
            IAGCSector * This,
            /* [retval][out] */ IAGCStations **ppStations);
        
        DECLSPEC_XFGVIRT(IAGCSector, get_Ships)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ships )( 
            IAGCSector * This,
            /* [retval][out] */ IAGCShips **ppShips);
        
        DECLSPEC_XFGVIRT(IAGCSector, get_Alephs)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Alephs )( 
            IAGCSector * This,
            /* [retval][out] */ IAGCAlephs **ppAlephs);
        
        DECLSPEC_XFGVIRT(IAGCSector, get_Asteroids)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Asteroids )( 
            IAGCSector * This,
            /* [retval][out] */ IAGCAsteroids **ppAsteroids);
        
        DECLSPEC_XFGVIRT(IAGCSector, SendChat)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendChat )( 
            IAGCSector * This,
            /* [in] */ BSTR bstrText,
            /* [defaultvalue][in] */ VARIANT_BOOL bIncludeEnemies,
            /* [defaultvalue][in] */ AGCSoundID idSound);
        
        DECLSPEC_XFGVIRT(IAGCSector, SendCommand)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendCommand )( 
            IAGCSector * This,
            /* [in] */ BSTR bstrCommand,
            /* [in] */ IAGCModel *pModelTarget,
            /* [defaultvalue][in] */ VARIANT_BOOL bIncludeEnemies,
            /* [defaultvalue][in] */ AGCSoundID idSound);
        
        DECLSPEC_XFGVIRT(IAGCSector, get_ScreenX)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScreenX )( 
            IAGCSector * This,
            /* [retval][out] */ float *pVal);
        
        DECLSPEC_XFGVIRT(IAGCSector, get_ScreenY)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScreenY )( 
            IAGCSector * This,
            /* [retval][out] */ float *pVal);
        
        DECLSPEC_XFGVIRT(IAGCSector, get_Mines)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mines )( 
            IAGCSector * This,
            /* [retval][out] */ IAGCModels **ppMines);
        
        DECLSPEC_XFGVIRT(IAGCSector, get_Missiles)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Missiles )( 
            IAGCSector * This,
            /* [retval][out] */ IAGCModels **ppMissiles);
        
        DECLSPEC_XFGVIRT(IAGCSector, get_Probes)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Probes )( 
            IAGCSector * This,
            /* [retval][out] */ IAGCProbes **ppProbes);
        
        DECLSPEC_XFGVIRT(IAGCSector, get_Models)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Models )( 
            IAGCSector * This,
            /* [retval][out] */ IAGCModels **ppModels);
        
        DECLSPEC_XFGVIRT(IAGCSector, get_SelectableModels)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SelectableModels )( 
            IAGCSector * This,
            /* [retval][out] */ IAGCModels **ppModels);
        
        DECLSPEC_XFGVIRT(IAGCSector, get_Treasures)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Treasures )( 
            IAGCSector * This,
            /* [retval][out] */ IAGCModels **ppTreasures);
        
        END_INTERFACE
    } IAGCSectorVtbl;

    interface IAGCSector
    {
        CONST_VTBL struct IAGCSectorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCSector_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCSector_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCSector_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCSector_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCSector_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCSector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCSector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCSector_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCSector_get_ObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) ) 

#define IAGCSector_get_ObjectID(This,pObjectID)	\
    ( (This)->lpVtbl -> get_ObjectID(This,pObjectID) ) 

#define IAGCSector_get_Game(This,ppGame)	\
    ( (This)->lpVtbl -> get_Game(This,ppGame) ) 

#define IAGCSector_get_UniqueID(This,pUniqueID)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pUniqueID) ) 


#define IAGCSector_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#define IAGCSector_get_Stations(This,ppStations)	\
    ( (This)->lpVtbl -> get_Stations(This,ppStations) ) 

#define IAGCSector_get_Ships(This,ppShips)	\
    ( (This)->lpVtbl -> get_Ships(This,ppShips) ) 

#define IAGCSector_get_Alephs(This,ppAlephs)	\
    ( (This)->lpVtbl -> get_Alephs(This,ppAlephs) ) 

#define IAGCSector_get_Asteroids(This,ppAsteroids)	\
    ( (This)->lpVtbl -> get_Asteroids(This,ppAsteroids) ) 

#define IAGCSector_SendChat(This,bstrText,bIncludeEnemies,idSound)	\
    ( (This)->lpVtbl -> SendChat(This,bstrText,bIncludeEnemies,idSound) ) 

#define IAGCSector_SendCommand(This,bstrCommand,pModelTarget,bIncludeEnemies,idSound)	\
    ( (This)->lpVtbl -> SendCommand(This,bstrCommand,pModelTarget,bIncludeEnemies,idSound) ) 

#define IAGCSector_get_ScreenX(This,pVal)	\
    ( (This)->lpVtbl -> get_ScreenX(This,pVal) ) 

#define IAGCSector_get_ScreenY(This,pVal)	\
    ( (This)->lpVtbl -> get_ScreenY(This,pVal) ) 

#define IAGCSector_get_Mines(This,ppMines)	\
    ( (This)->lpVtbl -> get_Mines(This,ppMines) ) 

#define IAGCSector_get_Missiles(This,ppMissiles)	\
    ( (This)->lpVtbl -> get_Missiles(This,ppMissiles) ) 

#define IAGCSector_get_Probes(This,ppProbes)	\
    ( (This)->lpVtbl -> get_Probes(This,ppProbes) ) 

#define IAGCSector_get_Models(This,ppModels)	\
    ( (This)->lpVtbl -> get_Models(This,ppModels) ) 

#define IAGCSector_get_SelectableModels(This,ppModels)	\
    ( (This)->lpVtbl -> get_SelectableModels(This,ppModels) ) 

#define IAGCSector_get_Treasures(This,ppTreasures)	\
    ( (This)->lpVtbl -> get_Treasures(This,ppTreasures) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCSector_INTERFACE_DEFINED__ */


#ifndef __IAGCSectors_INTERFACE_DEFINED__
#define __IAGCSectors_INTERFACE_DEFINED__

/* interface IAGCSectors */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCSectors;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("338DA8FF-EBA5-11D2-8B4B-00C04F681633")
    IAGCSectors : public IAGCCollection
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCSector **ppItemInterface) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCSectorsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCSectors * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCSectors * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCSectors * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCSectors * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCSectors * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCSectors * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCSectors * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCSectors * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAGCSectors * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get__NewEnum)
        /* [helpstring][id][restricted][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAGCSectors * This,
            /* [retval][out] */ IUnknown **ppunkEnum);
        
        DECLSPEC_XFGVIRT(IAGCSectors, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAGCSectors * This,
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCSector **ppItemInterface);
        
        END_INTERFACE
    } IAGCSectorsVtbl;

    interface IAGCSectors
    {
        CONST_VTBL struct IAGCSectorsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCSectors_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCSectors_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCSectors_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCSectors_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCSectors_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCSectors_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCSectors_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCSectors_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCSectors_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IAGCSectors_get__NewEnum(This,ppunkEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunkEnum) ) 


#define IAGCSectors_get_Item(This,pvIndex,ppItemInterface)	\
    ( (This)->lpVtbl -> get_Item(This,pvIndex,ppItemInterface) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCSectors_INTERFACE_DEFINED__ */


#ifndef __IAGCTeam_INTERFACE_DEFINED__
#define __IAGCTeam_INTERFACE_DEFINED__

/* interface IAGCTeam */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCTeam;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4214FD6F-EBA5-11D2-8B4B-00C04F681633")
    IAGCTeam : public IAGCBase
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Stations( 
            /* [retval][out] */ IAGCStations **ppStations) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Ships( 
            /* [retval][out] */ IAGCShips **ppShips) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Civ( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendChat( 
            /* [in] */ BSTR bstrText,
            /* [defaultvalue][in] */ short idWing = -1,
            /* [defaultvalue][in] */ AGCSoundID idSound = -1) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SendCommand( 
            /* [in] */ BSTR bstrCommand,
            /* [in] */ IAGCModel *pModelTarget,
            /* [defaultvalue][in] */ short idWing = -1,
            /* [defaultvalue][in] */ AGCSoundID idSound = -1) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCTeamVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCTeam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCTeam * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCTeam * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCTeam * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCTeam * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCTeam * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCTeam * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCTeam * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IAGCTeam * This,
            /* [retval][out] */ AGCObjectType *pObjectType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            IAGCTeam * This,
            /* [retval][out] */ AGCObjectID *pObjectID);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_Game)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Game )( 
            IAGCTeam * This,
            /* [retval][out] */ IAGCGame **ppGame);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_UniqueID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IAGCTeam * This,
            /* [retval][out] */ AGCUniqueID *pUniqueID);
        
        DECLSPEC_XFGVIRT(IAGCTeam, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAGCTeam * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCTeam, get_Stations)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stations )( 
            IAGCTeam * This,
            /* [retval][out] */ IAGCStations **ppStations);
        
        DECLSPEC_XFGVIRT(IAGCTeam, get_Ships)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ships )( 
            IAGCTeam * This,
            /* [retval][out] */ IAGCShips **ppShips);
        
        DECLSPEC_XFGVIRT(IAGCTeam, get_Civ)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Civ )( 
            IAGCTeam * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCTeam, SendChat)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendChat )( 
            IAGCTeam * This,
            /* [in] */ BSTR bstrText,
            /* [defaultvalue][in] */ short idWing,
            /* [defaultvalue][in] */ AGCSoundID idSound);
        
        DECLSPEC_XFGVIRT(IAGCTeam, SendCommand)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SendCommand )( 
            IAGCTeam * This,
            /* [in] */ BSTR bstrCommand,
            /* [in] */ IAGCModel *pModelTarget,
            /* [defaultvalue][in] */ short idWing,
            /* [defaultvalue][in] */ AGCSoundID idSound);
        
        END_INTERFACE
    } IAGCTeamVtbl;

    interface IAGCTeam
    {
        CONST_VTBL struct IAGCTeamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCTeam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCTeam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCTeam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCTeam_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCTeam_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCTeam_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCTeam_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCTeam_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCTeam_get_ObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) ) 

#define IAGCTeam_get_ObjectID(This,pObjectID)	\
    ( (This)->lpVtbl -> get_ObjectID(This,pObjectID) ) 

#define IAGCTeam_get_Game(This,ppGame)	\
    ( (This)->lpVtbl -> get_Game(This,ppGame) ) 

#define IAGCTeam_get_UniqueID(This,pUniqueID)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pUniqueID) ) 


#define IAGCTeam_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#define IAGCTeam_get_Stations(This,ppStations)	\
    ( (This)->lpVtbl -> get_Stations(This,ppStations) ) 

#define IAGCTeam_get_Ships(This,ppShips)	\
    ( (This)->lpVtbl -> get_Ships(This,ppShips) ) 

#define IAGCTeam_get_Civ(This,pbstr)	\
    ( (This)->lpVtbl -> get_Civ(This,pbstr) ) 

#define IAGCTeam_SendChat(This,bstrText,idWing,idSound)	\
    ( (This)->lpVtbl -> SendChat(This,bstrText,idWing,idSound) ) 

#define IAGCTeam_SendCommand(This,bstrCommand,pModelTarget,idWing,idSound)	\
    ( (This)->lpVtbl -> SendCommand(This,bstrCommand,pModelTarget,idWing,idSound) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCTeam_INTERFACE_DEFINED__ */


#ifndef __IAGCTeams_INTERFACE_DEFINED__
#define __IAGCTeams_INTERFACE_DEFINED__

/* interface IAGCTeams */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCTeams;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("65E8F3E4-EBA5-11D2-8B4B-00C04F681633")
    IAGCTeams : public IAGCCollection
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCTeam **ppItemInterface) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCTeamsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCTeams * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCTeams * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCTeams * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCTeams * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCTeams * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCTeams * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCTeams * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCTeams * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAGCTeams * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get__NewEnum)
        /* [helpstring][id][restricted][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAGCTeams * This,
            /* [retval][out] */ IUnknown **ppunkEnum);
        
        DECLSPEC_XFGVIRT(IAGCTeams, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAGCTeams * This,
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCTeam **ppItemInterface);
        
        END_INTERFACE
    } IAGCTeamsVtbl;

    interface IAGCTeams
    {
        CONST_VTBL struct IAGCTeamsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCTeams_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCTeams_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCTeams_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCTeams_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCTeams_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCTeams_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCTeams_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCTeams_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCTeams_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IAGCTeams_get__NewEnum(This,ppunkEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunkEnum) ) 


#define IAGCTeams_get_Item(This,pvIndex,ppItemInterface)	\
    ( (This)->lpVtbl -> get_Item(This,pvIndex,ppItemInterface) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCTeams_INTERFACE_DEFINED__ */


#ifndef __IAGCAsteroid_INTERFACE_DEFINED__
#define __IAGCAsteroid_INTERFACE_DEFINED__

/* interface IAGCAsteroid */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCAsteroid;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8B4100A0-38B7-11d3-A51D-00C04F68DEB0")
    IAGCAsteroid : public IAGCDamage
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Ore( 
            /* [retval][out] */ float *pfOre) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Capabilities( 
            /* [retval][out] */ AGCAsteroidAbilityBitMask *paabmCapabilities) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasCapability( 
            /* [in] */ AGCAsteroidAbilityBitMask aabm,
            /* [retval][out] */ VARIANT_BOOL *pbHasCapability) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCAsteroidVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCAsteroid * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCAsteroid * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCAsteroid * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCAsteroid * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCAsteroid * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCAsteroid * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCAsteroid * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCAsteroid * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectType)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectType )( 
            IAGCAsteroid * This,
            /* [retval][out] */ AGCObjectType *pObjectType);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_ObjectID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectID )( 
            IAGCAsteroid * This,
            /* [retval][out] */ AGCObjectID *pObjectID);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_Game)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Game )( 
            IAGCAsteroid * This,
            /* [retval][out] */ IAGCGame **ppGame);
        
        DECLSPEC_XFGVIRT(IAGCBase, get_UniqueID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IAGCAsteroid * This,
            /* [retval][out] */ AGCUniqueID *pUniqueID);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsVisible)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsVisible )( 
            IAGCAsteroid * This,
            /* [retval][out] */ VARIANT_BOOL *pbVisible);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_IsSeenBySide)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSeenBySide )( 
            IAGCAsteroid * This,
            /* [in] */ IAGCTeam *pTeam,
            /* [retval][out] */ VARIANT_BOOL *pbSeen);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Position)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            IAGCAsteroid * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Velocity)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Velocity )( 
            IAGCAsteroid * This,
            /* [retval][out] */ IAGCVector **ppVector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Orientation)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Orientation )( 
            IAGCAsteroid * This,
            /* [retval][out] */ IAGCOrientation **ppOrientation);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Radius)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Radius )( 
            IAGCAsteroid * This,
            /* [retval][out] */ float *pfRadius);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Team)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Team )( 
            IAGCAsteroid * This,
            /* [retval][out] */ IAGCTeam **ppTeam);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Mass)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Mass )( 
            IAGCAsteroid * This,
            /* [retval][out] */ float *pfMass);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Sector)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sector )( 
            IAGCAsteroid * This,
            /* [retval][out] */ IAGCSector **ppSector);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Signature)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            IAGCAsteroid * This,
            /* [retval][out] */ float *pfSignature);
        
        DECLSPEC_XFGVIRT(IAGCModel, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAGCAsteroid * This,
            /* [retval][out] */ BSTR *pbstr);
        
        DECLSPEC_XFGVIRT(IAGCDamage, get_Fraction)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fraction )( 
            IAGCAsteroid * This,
            /* [retval][out] */ float *pfFraction);
        
        DECLSPEC_XFGVIRT(IAGCAsteroid, get_Ore)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Ore )( 
            IAGCAsteroid * This,
            /* [retval][out] */ float *pfOre);
        
        DECLSPEC_XFGVIRT(IAGCAsteroid, get_Capabilities)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Capabilities )( 
            IAGCAsteroid * This,
            /* [retval][out] */ AGCAsteroidAbilityBitMask *paabmCapabilities);
        
        DECLSPEC_XFGVIRT(IAGCAsteroid, get_HasCapability)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCapability )( 
            IAGCAsteroid * This,
            /* [in] */ AGCAsteroidAbilityBitMask aabm,
            /* [retval][out] */ VARIANT_BOOL *pbHasCapability);
        
        END_INTERFACE
    } IAGCAsteroidVtbl;

    interface IAGCAsteroid
    {
        CONST_VTBL struct IAGCAsteroidVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCAsteroid_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCAsteroid_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCAsteroid_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCAsteroid_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCAsteroid_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCAsteroid_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCAsteroid_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCAsteroid_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCAsteroid_get_ObjectType(This,pObjectType)	\
    ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) ) 

#define IAGCAsteroid_get_ObjectID(This,pObjectID)	\
    ( (This)->lpVtbl -> get_ObjectID(This,pObjectID) ) 

#define IAGCAsteroid_get_Game(This,ppGame)	\
    ( (This)->lpVtbl -> get_Game(This,ppGame) ) 

#define IAGCAsteroid_get_UniqueID(This,pUniqueID)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pUniqueID) ) 


#define IAGCAsteroid_get_IsVisible(This,pbVisible)	\
    ( (This)->lpVtbl -> get_IsVisible(This,pbVisible) ) 

#define IAGCAsteroid_get_IsSeenBySide(This,pTeam,pbSeen)	\
    ( (This)->lpVtbl -> get_IsSeenBySide(This,pTeam,pbSeen) ) 

#define IAGCAsteroid_get_Position(This,ppVector)	\
    ( (This)->lpVtbl -> get_Position(This,ppVector) ) 

#define IAGCAsteroid_get_Velocity(This,ppVector)	\
    ( (This)->lpVtbl -> get_Velocity(This,ppVector) ) 

#define IAGCAsteroid_get_Orientation(This,ppOrientation)	\
    ( (This)->lpVtbl -> get_Orientation(This,ppOrientation) ) 

#define IAGCAsteroid_get_Radius(This,pfRadius)	\
    ( (This)->lpVtbl -> get_Radius(This,pfRadius) ) 

#define IAGCAsteroid_get_Team(This,ppTeam)	\
    ( (This)->lpVtbl -> get_Team(This,ppTeam) ) 

#define IAGCAsteroid_get_Mass(This,pfMass)	\
    ( (This)->lpVtbl -> get_Mass(This,pfMass) ) 

#define IAGCAsteroid_get_Sector(This,ppSector)	\
    ( (This)->lpVtbl -> get_Sector(This,ppSector) ) 

#define IAGCAsteroid_get_Signature(This,pfSignature)	\
    ( (This)->lpVtbl -> get_Signature(This,pfSignature) ) 

#define IAGCAsteroid_get_Name(This,pbstr)	\
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 


#define IAGCAsteroid_get_Fraction(This,pfFraction)	\
    ( (This)->lpVtbl -> get_Fraction(This,pfFraction) ) 


#define IAGCAsteroid_get_Ore(This,pfOre)	\
    ( (This)->lpVtbl -> get_Ore(This,pfOre) ) 

#define IAGCAsteroid_get_Capabilities(This,paabmCapabilities)	\
    ( (This)->lpVtbl -> get_Capabilities(This,paabmCapabilities) ) 

#define IAGCAsteroid_get_HasCapability(This,aabm,pbHasCapability)	\
    ( (This)->lpVtbl -> get_HasCapability(This,aabm,pbHasCapability) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCAsteroid_INTERFACE_DEFINED__ */


#ifndef __IAGCAsteroids_INTERFACE_DEFINED__
#define __IAGCAsteroids_INTERFACE_DEFINED__

/* interface IAGCAsteroids */
/* [helpstring][uuid][nonextensible][unique][dual][object] */ 


EXTERN_C const IID IID_IAGCAsteroids;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A61112C6-38B7-11d3-A51D-00C04F68DEB0")
    IAGCAsteroids : public IAGCCollection
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCAsteroid **ppItem) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAGCAsteroidsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAGCAsteroids * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAGCAsteroids * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAGCAsteroids * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAGCAsteroids * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAGCAsteroids * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAGCAsteroids * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAGCAsteroids * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAGCCommon, get_Type)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IAGCAsteroids * This,
            /* [retval][out] */ BSTR *pbstrType);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get_Count)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAGCAsteroids * This,
            /* [retval][out] */ long *pnCount);
        
        DECLSPEC_XFGVIRT(IAGCCollection, get__NewEnum)
        /* [helpstring][id][restricted][hidden][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAGCAsteroids * This,
            /* [retval][out] */ IUnknown **ppunkEnum);
        
        DECLSPEC_XFGVIRT(IAGCAsteroids, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAGCAsteroids * This,
            /* [in] */ VARIANT *pvIndex,
            /* [retval][out] */ IAGCAsteroid **ppItem);
        
        END_INTERFACE
    } IAGCAsteroidsVtbl;

    interface IAGCAsteroids
    {
        CONST_VTBL struct IAGCAsteroidsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAGCAsteroids_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAGCAsteroids_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAGCAsteroids_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAGCAsteroids_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAGCAsteroids_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAGCAsteroids_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAGCAsteroids_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAGCAsteroids_get_Type(This,pbstrType)	\
    ( (This)->lpVtbl -> get_Type(This,pbstrType) ) 


#define IAGCAsteroids_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IAGCAsteroids_get__NewEnum(This,ppunkEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppunkEnum) ) 


#define IAGCAsteroids_get_Item(This,pvIndex,ppItem)	\
    ( (This)->lpVtbl -> get_Item(This,pvIndex,ppItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAGCAsteroids_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_AGCIDL_0000_0058 */
/* [local] */ 

#ifdef __cplusplus
  extern "C++"
  {
    /////////////////////////////////////////////////////////////////////////
    // Smart Pointer Declarations

    #if _MSC_VER >= 1100

      #include <comdef.h>

      #ifndef TC_COM_SMARTPTR_TYPEDEF
        #define TC_COM_SMARTPTR_TYPEDEF(Interface) \
          _COM_SMARTPTR_TYPEDEF(Interface, __uuidof(Interface))
      #endif // TC_COM_SMARTPTR_TYPEDEF

      TC_COM_SMARTPTR_TYPEDEF(IAGCEventSink);
      TC_COM_SMARTPTR_TYPEDEF(IAGCEventSinkSynchronous);
      TC_COM_SMARTPTR_TYPEDEF(IAGCDebugHook);
      TC_COM_SMARTPTR_TYPEDEF(IAGCGlobal);
      TC_COM_SMARTPTR_TYPEDEF(IAGCVector);
      TC_COM_SMARTPTR_TYPEDEF(IAGCVectorPrivate);
      TC_COM_SMARTPTR_TYPEDEF(IAGCOrientation);
      TC_COM_SMARTPTR_TYPEDEF(IAGCOrientationPrivate);
      TC_COM_SMARTPTR_TYPEDEF(IAGCEvent);
      TC_COM_SMARTPTR_TYPEDEF(IAGCEventCreate);
      TC_COM_SMARTPTR_TYPEDEF(IAGCGameParameters);
      TC_COM_SMARTPTR_TYPEDEF(IAGCCommand);
      TC_COM_SMARTPTR_TYPEDEF(IAGCCommandPrivate);
      TC_COM_SMARTPTR_TYPEDEF(IAGCVersionInfo);
      TC_COM_SMARTPTR_TYPEDEF(IAGCDBParams);
      TC_COM_SMARTPTR_TYPEDEF(IAGCEventLogger);
      TC_COM_SMARTPTR_TYPEDEF(IAGCEventLoggerHook);
      TC_COM_SMARTPTR_TYPEDEF(IAGCEventLoggerPrivate);
      TC_COM_SMARTPTR_TYPEDEF(IAGCRangePrivate);
      TC_COM_SMARTPTR_TYPEDEF(IAGCRangesPrivate);
      TC_COM_SMARTPTR_TYPEDEF(IAGCEventIDRange);
      TC_COM_SMARTPTR_TYPEDEF(IAGCEventIDRanges);
      TC_COM_SMARTPTR_TYPEDEF(ITCStrings);
      TC_COM_SMARTPTR_TYPEDEF(ITCPropBagOnRegKey);
      TC_COM_SMARTPTR_TYPEDEF(ITCSessionInfo);
      TC_COM_SMARTPTR_TYPEDEF(ITCSessionInfos);
      TC_COM_SMARTPTR_TYPEDEF(ITCCollectionPersistHelper);
      TC_COM_SMARTPTR_TYPEDEF(ITCUtility);
      TC_COM_SMARTPTR_TYPEDEF(IAdminSessionHelper);

      TC_COM_SMARTPTR_TYPEDEF(IAGCPrivate);
      TC_COM_SMARTPTR_TYPEDEF(IAGCCommon);
      TC_COM_SMARTPTR_TYPEDEF(IAGCCollection);
      TC_COM_SMARTPTR_TYPEDEF(IAGCBase);
      TC_COM_SMARTPTR_TYPEDEF(IAGCModel);
      TC_COM_SMARTPTR_TYPEDEF(IAGCModels);
      TC_COM_SMARTPTR_TYPEDEF(IAGCBuyable);
      TC_COM_SMARTPTR_TYPEDEF(IAGCHullType);
      TC_COM_SMARTPTR_TYPEDEF(IAGCTreasure);
      TC_COM_SMARTPTR_TYPEDEF(IAGCTreasures);
      TC_COM_SMARTPTR_TYPEDEF(IAGCDamage);
      TC_COM_SMARTPTR_TYPEDEF(IAGCScanner);
      TC_COM_SMARTPTR_TYPEDEF(IAGCProbe);
      TC_COM_SMARTPTR_TYPEDEF(IAGCProbes);
      TC_COM_SMARTPTR_TYPEDEF(IAGCGame);
      TC_COM_SMARTPTR_TYPEDEF(IAGCShip);
      TC_COM_SMARTPTR_TYPEDEF(IAGCShips);
      TC_COM_SMARTPTR_TYPEDEF(IAGCStation);
      TC_COM_SMARTPTR_TYPEDEF(IAGCStations);
      TC_COM_SMARTPTR_TYPEDEF(IAGCAleph);
      TC_COM_SMARTPTR_TYPEDEF(IAGCAlephs);
      TC_COM_SMARTPTR_TYPEDEF(IAGCSector);
      TC_COM_SMARTPTR_TYPEDEF(IAGCSectors);
      TC_COM_SMARTPTR_TYPEDEF(IAGCTeam);
      TC_COM_SMARTPTR_TYPEDEF(IAGCTeams);
      TC_COM_SMARTPTR_TYPEDEF(IAGCAsteroid);
      TC_COM_SMARTPTR_TYPEDEF(IAGCAsteroids);

    #endif // _MSC_VER >= 1100


    #if defined(AGC_HOST) || defined(AGC_MODULE)

      #include "AGCModule.h"

      extern CAGCModule _AGCModule;

      #if defined(AGC_MODULE)

        inline IAGCGlobalPtr GetAGCGlobal()
        {
          return _AGCModule.GetAGCGlobal();
        }

      #else // AGC_MODULE

        inline IAGCGlobal* GetAGCGlobal()
        {
          return _AGCModule.GetAGCGlobal();
        }

      #endif // defined(AGC_MODULE)

    #endif // defined(AGC_HOST) || defined(AGC_MODULE)

  } // extern "C++"
#endif // __cplusplus



extern RPC_IF_HANDLE __MIDL_itf_AGCIDL_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AGCIDL_0000_0058_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


