/*-------------------------------------------------------------------------
 * pch.cpp
 * 
 * Precompiled header for fedsrv
 * 
 * Owner: 
 * 
 * Copyright 1986-1998 Microsoft Corporation, All Rights Reserved
 *-----------------------------------------------------------------------*/

#include "pch.h"

#include <atlbase.h>

// Modern ATL has static registry support built-in, statreg.cpp not needed
#ifdef _ATL_STATIC_REGISTRY
#include <statreg.h>
#endif

// atlimpl.cpp is not needed in modern ATL (functionality is in headers)
// #include <atlimpl.cpp>

#include <../TCAtl/UserAcct.cpp>
