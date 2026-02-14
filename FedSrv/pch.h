/*-------------------------------------------------------------------------
 * pch.h
 * 
 * Headers for fedsrv
 * 
 * Owner: 
 * 
 * Copyright 1986-1998 Microsoft Corporation, All Rights Reserved
 *-----------------------------------------------------------------------*/
#ifndef _FEDSRV_PCH_
#define _FEDSRV_PCH_

// Prevent MsHTML.h from being included - it conflicts with zlib's IEventTarget
#define __mshtml_h__

// Required C++ headers before ATL
#include <new>
#include <exception>

// ALLSRV_STANDALONE mode is now the default - Zone authentication removed
#ifndef ALLSRV_STANDALONE
  #define ALLSRV_STANDALONE
#endif

#define _ATL_STATIC_REGISTRY

// browse info overflow warnings for STL objects
#pragma warning(disable : 4786)

// Standard C Includes
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <memory.h>
// Standard C++ Includes
#include <algorithm>
#include <map>
#include <set>
#include <vector>

// Windows Includes
#include <windows.h>
#include <commctrl.h>
#include <sqlext.h>
#include <dplobby.h>

// ZLib Includes
#if !defined(ALLSRV_STANDALONE)
  #define __MODULE__ "AllSrv"
#else // !defined(ALLSRV_STANDALONE)
  #define __MODULE__ "AllSrv32"
#endif // !defined(ALLSRV_STANDALONE)
#include <guids.h>
#include <zlib.h>
                     
#include "resource.h"
#include <utility.h>
#include <igc.h>

#include "..\AGC\GameParamData.h"

//#include <atlbase.h>
//extern CServiceModule _Module;
//#include <atlcom.h>

// ZoneAuthDecrypt.h only needed for non-standalone (Zone authentication)
#if !defined(ALLSRV_STANDALONE)
  #include <ZoneAuthDecrypt.h>
#endif

// ATL is incompatible with the 'new' macro from zlib/alloc.h
#ifdef _DebugNewDefined_
  #undef new
#endif

// This also includes <atlbase.h> and <atlcom.h>
#include "AllSrvModule.h"

#include <TCLib.h>
#include <AutoHandle.h>

#include <TCAtl.h>
#include <ObjectMap.h>
#include <UserAcct.h>
#include <TCThread.h>

// NOTE: Debug 'new' macro is disabled for FedSrv due to ATL incompatibility


#include "Zone.h"

#include <messagesAll.h>
#include <Messages.h>
#include <MessagesLS.h>

#include "SWMRG.h"
#include "BitArray.h"
#include "point.h"
#include "srvdbg.h"

#include "sharemem.h"
#include "config.h"
#include "counters.h"
#include "srvqueries.h" // and allegdb.h
#include "dirmon.h"

#include "AllSrvModuleIDL.h" 
#include "AdminUtil.h" 
#include "fsside.h"
#include "fscluster.h"
#include "fsmission.h"
#include "fedsrvsql.h"
#include "zauth.h"
#include "fedsrv.h"
extern Global g;
#include "fsship.h"

#include "AdminGame.h"
#include "AdminGames.h"
#include "AdminSession.h"


#include "AdminUser.h"
#include "AdminUsers.h"
#include "AdminServer.h"
#include "AdminShip.h"

#include "dbgutil.h"


#include "regkey.h"


/////////////////////////////////////////////////////////////////////////////
// This is included very last since it conflicts with <atlwin.h>, included
// indirectly by <TCAtl.h>.
//
#include <windowsx.h> // For GlobalAllocPtr and GlobalFreePtr


/////////////////////////////////////////////////////////////////////////////

#endif // _FEDSRV_PCH_

