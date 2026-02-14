

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for AGC.idl:
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


#ifndef __AGC_h__
#define __AGC_h__

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

#ifndef __AGCInterfaces_FWD_DEFINED__
#define __AGCInterfaces_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCInterfaces AGCInterfaces;
#else
typedef struct AGCInterfaces AGCInterfaces;
#endif /* __cplusplus */

#endif 	/* __AGCInterfaces_FWD_DEFINED__ */


#ifndef __AGCGlobal_FWD_DEFINED__
#define __AGCGlobal_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCGlobal AGCGlobal;
#else
typedef struct AGCGlobal AGCGlobal;
#endif /* __cplusplus */

#endif 	/* __AGCGlobal_FWD_DEFINED__ */


#ifndef __AGCVector_FWD_DEFINED__
#define __AGCVector_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCVector AGCVector;
#else
typedef struct AGCVector AGCVector;
#endif /* __cplusplus */

#endif 	/* __AGCVector_FWD_DEFINED__ */


#ifndef __AGCOrientation_FWD_DEFINED__
#define __AGCOrientation_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCOrientation AGCOrientation;
#else
typedef struct AGCOrientation AGCOrientation;
#endif /* __cplusplus */

#endif 	/* __AGCOrientation_FWD_DEFINED__ */


#ifndef __AGCEvent_FWD_DEFINED__
#define __AGCEvent_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCEvent AGCEvent;
#else
typedef struct AGCEvent AGCEvent;
#endif /* __cplusplus */

#endif 	/* __AGCEvent_FWD_DEFINED__ */


#ifndef __AGCGameParameters_FWD_DEFINED__
#define __AGCGameParameters_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCGameParameters AGCGameParameters;
#else
typedef struct AGCGameParameters AGCGameParameters;
#endif /* __cplusplus */

#endif 	/* __AGCGameParameters_FWD_DEFINED__ */


#ifndef __AGCCommand_FWD_DEFINED__
#define __AGCCommand_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCCommand AGCCommand;
#else
typedef struct AGCCommand AGCCommand;
#endif /* __cplusplus */

#endif 	/* __AGCCommand_FWD_DEFINED__ */


#ifndef __AGCVersionInfo_FWD_DEFINED__
#define __AGCVersionInfo_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCVersionInfo AGCVersionInfo;
#else
typedef struct AGCVersionInfo AGCVersionInfo;
#endif /* __cplusplus */

#endif 	/* __AGCVersionInfo_FWD_DEFINED__ */


#ifndef __AGCDBParams_FWD_DEFINED__
#define __AGCDBParams_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCDBParams AGCDBParams;
#else
typedef struct AGCDBParams AGCDBParams;
#endif /* __cplusplus */

#endif 	/* __AGCDBParams_FWD_DEFINED__ */


#ifndef __AGCEventLogger_FWD_DEFINED__
#define __AGCEventLogger_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCEventLogger AGCEventLogger;
#else
typedef struct AGCEventLogger AGCEventLogger;
#endif /* __cplusplus */

#endif 	/* __AGCEventLogger_FWD_DEFINED__ */


#ifndef __AGCEventIDRange_FWD_DEFINED__
#define __AGCEventIDRange_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCEventIDRange AGCEventIDRange;
#else
typedef struct AGCEventIDRange AGCEventIDRange;
#endif /* __cplusplus */

#endif 	/* __AGCEventIDRange_FWD_DEFINED__ */


#ifndef __AGCEventIDRanges_FWD_DEFINED__
#define __AGCEventIDRanges_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCEventIDRanges AGCEventIDRanges;
#else
typedef struct AGCEventIDRanges AGCEventIDRanges;
#endif /* __cplusplus */

#endif 	/* __AGCEventIDRanges_FWD_DEFINED__ */


#ifndef __TCMarshalByValue_FWD_DEFINED__
#define __TCMarshalByValue_FWD_DEFINED__

#ifdef __cplusplus
typedef class TCMarshalByValue TCMarshalByValue;
#else
typedef struct TCMarshalByValue TCMarshalByValue;
#endif /* __cplusplus */

#endif 	/* __TCMarshalByValue_FWD_DEFINED__ */


#ifndef __TCStrings_FWD_DEFINED__
#define __TCStrings_FWD_DEFINED__

#ifdef __cplusplus
typedef class TCStrings TCStrings;
#else
typedef struct TCStrings TCStrings;
#endif /* __cplusplus */

#endif 	/* __TCStrings_FWD_DEFINED__ */


#ifndef __TCNullStream_FWD_DEFINED__
#define __TCNullStream_FWD_DEFINED__

#ifdef __cplusplus
typedef class TCNullStream TCNullStream;
#else
typedef struct TCNullStream TCNullStream;
#endif /* __cplusplus */

#endif 	/* __TCNullStream_FWD_DEFINED__ */


#ifndef __TCPropBagOnRegKey_FWD_DEFINED__
#define __TCPropBagOnRegKey_FWD_DEFINED__

#ifdef __cplusplus
typedef class TCPropBagOnRegKey TCPropBagOnRegKey;
#else
typedef struct TCPropBagOnRegKey TCPropBagOnRegKey;
#endif /* __cplusplus */

#endif 	/* __TCPropBagOnRegKey_FWD_DEFINED__ */


#ifndef __TCUtility_FWD_DEFINED__
#define __TCUtility_FWD_DEFINED__

#ifdef __cplusplus
typedef class TCUtility TCUtility;
#else
typedef struct TCUtility TCUtility;
#endif /* __cplusplus */

#endif 	/* __TCUtility_FWD_DEFINED__ */


#ifndef __AdminSessionHelper_FWD_DEFINED__
#define __AdminSessionHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class AdminSessionHelper AdminSessionHelper;
#else
typedef struct AdminSessionHelper AdminSessionHelper;
#endif /* __cplusplus */

#endif 	/* __AdminSessionHelper_FWD_DEFINED__ */


#ifndef __AGCBase_FWD_DEFINED__
#define __AGCBase_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCBase AGCBase;
#else
typedef struct AGCBase AGCBase;
#endif /* __cplusplus */

#endif 	/* __AGCBase_FWD_DEFINED__ */


#ifndef __AGCModel_FWD_DEFINED__
#define __AGCModel_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCModel AGCModel;
#else
typedef struct AGCModel AGCModel;
#endif /* __cplusplus */

#endif 	/* __AGCModel_FWD_DEFINED__ */


#ifndef __AGCModels_FWD_DEFINED__
#define __AGCModels_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCModels AGCModels;
#else
typedef struct AGCModels AGCModels;
#endif /* __cplusplus */

#endif 	/* __AGCModels_FWD_DEFINED__ */


#ifndef __AGCHullType_FWD_DEFINED__
#define __AGCHullType_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCHullType AGCHullType;
#else
typedef struct AGCHullType AGCHullType;
#endif /* __cplusplus */

#endif 	/* __AGCHullType_FWD_DEFINED__ */


#ifndef __AGCDamage_FWD_DEFINED__
#define __AGCDamage_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCDamage AGCDamage;
#else
typedef struct AGCDamage AGCDamage;
#endif /* __cplusplus */

#endif 	/* __AGCDamage_FWD_DEFINED__ */


#ifndef __AGCScanner_FWD_DEFINED__
#define __AGCScanner_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCScanner AGCScanner;
#else
typedef struct AGCScanner AGCScanner;
#endif /* __cplusplus */

#endif 	/* __AGCScanner_FWD_DEFINED__ */


#ifndef __AGCProbe_FWD_DEFINED__
#define __AGCProbe_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCProbe AGCProbe;
#else
typedef struct AGCProbe AGCProbe;
#endif /* __cplusplus */

#endif 	/* __AGCProbe_FWD_DEFINED__ */


#ifndef __AGCProbes_FWD_DEFINED__
#define __AGCProbes_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCProbes AGCProbes;
#else
typedef struct AGCProbes AGCProbes;
#endif /* __cplusplus */

#endif 	/* __AGCProbes_FWD_DEFINED__ */


#ifndef __AGCGame_FWD_DEFINED__
#define __AGCGame_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCGame AGCGame;
#else
typedef struct AGCGame AGCGame;
#endif /* __cplusplus */

#endif 	/* __AGCGame_FWD_DEFINED__ */


#ifndef __AGCShip_FWD_DEFINED__
#define __AGCShip_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCShip AGCShip;
#else
typedef struct AGCShip AGCShip;
#endif /* __cplusplus */

#endif 	/* __AGCShip_FWD_DEFINED__ */


#ifndef __AGCShips_FWD_DEFINED__
#define __AGCShips_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCShips AGCShips;
#else
typedef struct AGCShips AGCShips;
#endif /* __cplusplus */

#endif 	/* __AGCShips_FWD_DEFINED__ */


#ifndef __AGCStation_FWD_DEFINED__
#define __AGCStation_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCStation AGCStation;
#else
typedef struct AGCStation AGCStation;
#endif /* __cplusplus */

#endif 	/* __AGCStation_FWD_DEFINED__ */


#ifndef __AGCStations_FWD_DEFINED__
#define __AGCStations_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCStations AGCStations;
#else
typedef struct AGCStations AGCStations;
#endif /* __cplusplus */

#endif 	/* __AGCStations_FWD_DEFINED__ */


#ifndef __AGCAleph_FWD_DEFINED__
#define __AGCAleph_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCAleph AGCAleph;
#else
typedef struct AGCAleph AGCAleph;
#endif /* __cplusplus */

#endif 	/* __AGCAleph_FWD_DEFINED__ */


#ifndef __AGCAlephs_FWD_DEFINED__
#define __AGCAlephs_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCAlephs AGCAlephs;
#else
typedef struct AGCAlephs AGCAlephs;
#endif /* __cplusplus */

#endif 	/* __AGCAlephs_FWD_DEFINED__ */


#ifndef __AGCSector_FWD_DEFINED__
#define __AGCSector_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCSector AGCSector;
#else
typedef struct AGCSector AGCSector;
#endif /* __cplusplus */

#endif 	/* __AGCSector_FWD_DEFINED__ */


#ifndef __AGCSectors_FWD_DEFINED__
#define __AGCSectors_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCSectors AGCSectors;
#else
typedef struct AGCSectors AGCSectors;
#endif /* __cplusplus */

#endif 	/* __AGCSectors_FWD_DEFINED__ */


#ifndef __AGCTeam_FWD_DEFINED__
#define __AGCTeam_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCTeam AGCTeam;
#else
typedef struct AGCTeam AGCTeam;
#endif /* __cplusplus */

#endif 	/* __AGCTeam_FWD_DEFINED__ */


#ifndef __AGCTeams_FWD_DEFINED__
#define __AGCTeams_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCTeams AGCTeams;
#else
typedef struct AGCTeams AGCTeams;
#endif /* __cplusplus */

#endif 	/* __AGCTeams_FWD_DEFINED__ */


#ifndef __AGCAsteroid_FWD_DEFINED__
#define __AGCAsteroid_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCAsteroid AGCAsteroid;
#else
typedef struct AGCAsteroid AGCAsteroid;
#endif /* __cplusplus */

#endif 	/* __AGCAsteroid_FWD_DEFINED__ */


#ifndef __AGCAsteroids_FWD_DEFINED__
#define __AGCAsteroids_FWD_DEFINED__

#ifdef __cplusplus
typedef class AGCAsteroids AGCAsteroids;
#else
typedef struct AGCAsteroids AGCAsteroids;
#endif /* __cplusplus */

#endif 	/* __AGCAsteroids_FWD_DEFINED__ */


/* header files for imported files */
#include "AGCIDL.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __AGCLib_LIBRARY_DEFINED__
#define __AGCLib_LIBRARY_DEFINED__

/* library AGCLib */
/* [helpstring][version][uuid] */ 










EXTERN_C const IID LIBID_AGCLib;

EXTERN_C const CLSID CLSID_AGCInterfaces;

#ifdef __cplusplus

class DECLSPEC_UUID("1E700618-E334-4b54-9A54-040F65D2B9FF")
AGCInterfaces;
#endif

EXTERN_C const CLSID CLSID_AGCGlobal;

#ifdef __cplusplus

class DECLSPEC_UUID("08118086-1FE1-11d3-AF03-0000F810C3F4")
AGCGlobal;
#endif

EXTERN_C const CLSID CLSID_AGCVector;

#ifdef __cplusplus

class DECLSPEC_UUID("12249214-13B5-11d3-8B5E-00C04F681633")
AGCVector;
#endif

EXTERN_C const CLSID CLSID_AGCOrientation;

#ifdef __cplusplus

class DECLSPEC_UUID("C8204960-3999-11d3-A51D-00C04F68DEB0")
AGCOrientation;
#endif

EXTERN_C const CLSID CLSID_AGCEvent;

#ifdef __cplusplus

class DECLSPEC_UUID("AA18A676-14A7-11d3-8B5F-00C04F681633")
AGCEvent;
#endif

EXTERN_C const CLSID CLSID_AGCGameParameters;

#ifdef __cplusplus

class DECLSPEC_UUID("F9E52A78-EBA4-11D2-8B4B-00C04F681633")
AGCGameParameters;
#endif

EXTERN_C const CLSID CLSID_AGCCommand;

#ifdef __cplusplus

class DECLSPEC_UUID("4272AD82-FF3F-11d2-A50F-00C04F68DEB0")
AGCCommand;
#endif

EXTERN_C const CLSID CLSID_AGCVersionInfo;

#ifdef __cplusplus

class DECLSPEC_UUID("9942F23D-B460-4bf0-8B2C-7B003A43F37C")
AGCVersionInfo;
#endif

EXTERN_C const CLSID CLSID_AGCDBParams;

#ifdef __cplusplus

class DECLSPEC_UUID("85A50536-6442-41bc-B011-2BFD93CFB5A3")
AGCDBParams;
#endif

EXTERN_C const CLSID CLSID_AGCEventLogger;

#ifdef __cplusplus

class DECLSPEC_UUID("9EBFAA09-2793-4a50-8F57-1D7B26A307F3")
AGCEventLogger;
#endif

EXTERN_C const CLSID CLSID_AGCEventIDRange;

#ifdef __cplusplus

class DECLSPEC_UUID("1537A87B-910E-4258-9C77-79554AA3C839")
AGCEventIDRange;
#endif

EXTERN_C const CLSID CLSID_AGCEventIDRanges;

#ifdef __cplusplus

class DECLSPEC_UUID("C63EFD2A-8763-44f4-A1CF-BEFB992482DA")
AGCEventIDRanges;
#endif

EXTERN_C const CLSID CLSID_TCMarshalByValue;

#ifdef __cplusplus

class DECLSPEC_UUID("8962E244-CD81-11d2-9646-00C04F68DEB0")
TCMarshalByValue;
#endif

EXTERN_C const CLSID CLSID_TCStrings;

#ifdef __cplusplus

class DECLSPEC_UUID("8962E245-CD81-11d2-9646-00C04F68DEB0")
TCStrings;
#endif

EXTERN_C const CLSID CLSID_TCNullStream;

#ifdef __cplusplus

class DECLSPEC_UUID("8962E248-CD81-11d2-9646-00C04F68DEB0")
TCNullStream;
#endif

EXTERN_C const CLSID CLSID_TCPropBagOnRegKey;

#ifdef __cplusplus

class DECLSPEC_UUID("8962E246-CD81-11d2-9646-00C04F68DEB0")
TCPropBagOnRegKey;
#endif

EXTERN_C const CLSID CLSID_TCUtility;

#ifdef __cplusplus

class DECLSPEC_UUID("E9EE9E82-ED3A-11d2-A50B-00C04F68DEB0")
TCUtility;
#endif

EXTERN_C const CLSID CLSID_AdminSessionHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("859E6E3A-875D-4b0d-8775-E7C533E9EBEF")
AdminSessionHelper;
#endif

EXTERN_C const CLSID CLSID_AGCBase;

#ifdef __cplusplus

class DECLSPEC_UUID("CFA3F5F2-0A42-11D3-8B58-00C04F681633")
AGCBase;
#endif

EXTERN_C const CLSID CLSID_AGCModel;

#ifdef __cplusplus

class DECLSPEC_UUID("DF2F4B4D-0A42-11D3-8B58-00C04F681633")
AGCModel;
#endif

EXTERN_C const CLSID CLSID_AGCModels;

#ifdef __cplusplus

class DECLSPEC_UUID("FF8126CC-1ED2-43c5-B07E-D7B2E8487EE5")
AGCModels;
#endif

EXTERN_C const CLSID CLSID_AGCHullType;

#ifdef __cplusplus

class DECLSPEC_UUID("6E5B27C8-2ED9-11d3-A51C-00C04F68DEB0")
AGCHullType;
#endif

EXTERN_C const CLSID CLSID_AGCDamage;

#ifdef __cplusplus

class DECLSPEC_UUID("E9004E6F-0A42-11D3-8B58-00C04F681633")
AGCDamage;
#endif

EXTERN_C const CLSID CLSID_AGCScanner;

#ifdef __cplusplus

class DECLSPEC_UUID("F56824BB-0A42-11D3-8B58-00C04F681633")
AGCScanner;
#endif

EXTERN_C const CLSID CLSID_AGCProbe;

#ifdef __cplusplus

class DECLSPEC_UUID("A23C1044-ED2D-4f80-813B-FBB5DE7B8CFB")
AGCProbe;
#endif

EXTERN_C const CLSID CLSID_AGCProbes;

#ifdef __cplusplus

class DECLSPEC_UUID("BB92CE8C-CC20-497a-B7CC-26F29E1D8877")
AGCProbes;
#endif

EXTERN_C const CLSID CLSID_AGCGame;

#ifdef __cplusplus

class DECLSPEC_UUID("4F860D2E-0A42-11D3-8B58-00C04F681633")
AGCGame;
#endif

EXTERN_C const CLSID CLSID_AGCShip;

#ifdef __cplusplus

class DECLSPEC_UUID("5C271C62-0A42-11D3-8B58-00C04F681633")
AGCShip;
#endif

EXTERN_C const CLSID CLSID_AGCShips;

#ifdef __cplusplus

class DECLSPEC_UUID("5BEA791C-1EBF-11d3-8B63-00C04F681633")
AGCShips;
#endif

EXTERN_C const CLSID CLSID_AGCStation;

#ifdef __cplusplus

class DECLSPEC_UUID("88400BB2-026B-11D3-8B55-00C04F681633")
AGCStation;
#endif

EXTERN_C const CLSID CLSID_AGCStations;

#ifdef __cplusplus

class DECLSPEC_UUID("7A0159B4-0272-11D3-8B55-00C04F681633")
AGCStations;
#endif

EXTERN_C const CLSID CLSID_AGCAleph;

#ifdef __cplusplus

class DECLSPEC_UUID("46AF05A8-0325-11D3-8B57-00C04F681633")
AGCAleph;
#endif

EXTERN_C const CLSID CLSID_AGCAlephs;

#ifdef __cplusplus

class DECLSPEC_UUID("991B6C06-026B-11D3-8B55-00C04F681633")
AGCAlephs;
#endif

EXTERN_C const CLSID CLSID_AGCSector;

#ifdef __cplusplus

class DECLSPEC_UUID("338DA8FE-EBA5-11D2-8B4B-00C04F681633")
AGCSector;
#endif

EXTERN_C const CLSID CLSID_AGCSectors;

#ifdef __cplusplus

class DECLSPEC_UUID("4214FD6E-EBA5-11D2-8B4B-00C04F681633")
AGCSectors;
#endif

EXTERN_C const CLSID CLSID_AGCTeam;

#ifdef __cplusplus

class DECLSPEC_UUID("5C2B1828-EBA5-11D2-8B4B-00C04F681633")
AGCTeam;
#endif

EXTERN_C const CLSID CLSID_AGCTeams;

#ifdef __cplusplus

class DECLSPEC_UUID("7151948E-EBA5-11D2-8B4B-00C04F681633")
AGCTeams;
#endif

EXTERN_C const CLSID CLSID_AGCAsteroid;

#ifdef __cplusplus

class DECLSPEC_UUID("12430BFC-38B5-11d3-A51D-00C04F68DEB0")
AGCAsteroid;
#endif

EXTERN_C const CLSID CLSID_AGCAsteroids;

#ifdef __cplusplus

class DECLSPEC_UUID("12430BFD-38B5-11d3-A51D-00C04F68DEB0")
AGCAsteroids;
#endif
#endif /* __AGCLib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_AGC_0000_0001 */
/* [local] */ 

/////////////////////////////////////////////////////////////////////////////
// CATID Declarations

#ifdef __cplusplus
  ///////////////////////////////////////////////////////////////////////////
  // {6394A435-0B27-11D3-8B58-00C04F681633}
  extern "C" const __declspec(selectany) GUID CATID_AGC =
    {0x6394A435,0xB27,0x11D3,{0x8B,0x58,0x00,0xC0,0x4F,0x68,0x16,0x33}};
#endif // __cplusplus



extern RPC_IF_HANDLE __MIDL_itf_AGC_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AGC_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


