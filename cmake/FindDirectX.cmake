# Find DirectX SDK or Windows SDK DirectX components
# Sets: DIRECTX_INCLUDE_DIRS, DIRECTX_LIBRARIES
#
# Note: Allegiance requires legacy DirectX headers that are NOT included in
# the Windows SDK:
# - d3drm.h (Direct3D Retained Mode)
# - dplobby.h (DirectPlay Lobby)
# - dplay.h (DirectPlay)
#
# These require the DirectX SDK (June 2010) to be installed.
# Download from: https://www.microsoft.com/en-us/download/details.aspx?id=6812

include(FindPackageHandleStandardArgs)

# Check for legacy DirectX SDK
# First check local DX9 folder in workspace (includes DirectPlay headers)
set(LOCAL_DX9_DIR "${CMAKE_SOURCE_DIR}/DX9")
if(EXISTS "${LOCAL_DX9_DIR}/Include/dplobby.h")
    message(STATUS "Found local DX9 headers: ${LOCAL_DX9_DIR}/Include")
    set(HAVE_LOCAL_DX9 TRUE)
else()
    set(HAVE_LOCAL_DX9 FALSE)
endif()

if(DEFINED ENV{DXSDK_DIR})
    set(DXSDK_DIR "$ENV{DXSDK_DIR}")
    message(STATUS "Found DirectX SDK (from env): ${DXSDK_DIR}")
    set(HAVE_LEGACY_DXSDK TRUE)
elseif(EXISTS "C:/Program Files (x86)/Microsoft DirectX SDK (June 2010)")
    set(DXSDK_DIR "C:/Program Files (x86)/Microsoft DirectX SDK (June 2010)")
    message(STATUS "Found DirectX SDK: ${DXSDK_DIR}")
    set(HAVE_LEGACY_DXSDK TRUE)
else()
    set(HAVE_LEGACY_DXSDK FALSE)
    if(NOT HAVE_LOCAL_DX9)
        message(WARNING "DirectX SDK (June 2010) not found. Some components may not build.")
        message(WARNING "Set DXSDK_DIR environment variable or install from:")
        message(WARNING "  https://www.microsoft.com/en-us/download/details.aspx?id=6812")
    endif()
endif()

# DirectX headers are in Windows SDK since Windows 8
# Check Windows SDK include path
if(DEFINED ENV{WindowsSdkDir})
    set(WINSDK_DIR "$ENV{WindowsSdkDir}")
else()
    set(WINSDK_DIR "C:/Program Files (x86)/Windows Kits/10")
endif()

# Find include directories
set(DIRECTX_INCLUDE_SEARCH_PATHS
    "${WINSDK_DIR}/Include/${CMAKE_VS_WINDOWS_TARGET_PLATFORM_VERSION}/um"
    "${WINSDK_DIR}/Include/10.0.19041.0/um"
    "${WINSDK_DIR}/Include/um"
)

# Add local DX9 headers first (has DirectPlay)
if(HAVE_LOCAL_DX9)
    list(INSERT DIRECTX_INCLUDE_SEARCH_PATHS 0 "${LOCAL_DX9_DIR}/Include")
endif()

if(HAVE_LEGACY_DXSDK)
    list(INSERT DIRECTX_INCLUDE_SEARCH_PATHS 0 "${DXSDK_DIR}/Include")
endif()

find_path(DIRECTX_INCLUDE_DIR
    NAMES d3d9.h ddraw.h dinput.h dsound.h
    PATHS ${DIRECTX_INCLUDE_SEARCH_PATHS}
    NO_DEFAULT_PATH
)

# Find libraries
set(DIRECTX_LIB_SEARCH_PATHS
    "${WINSDK_DIR}/Lib/${CMAKE_VS_WINDOWS_TARGET_PLATFORM_VERSION}/um/x86"
    "${WINSDK_DIR}/Lib/10.0.19041.0/um/x86"
)

if(HAVE_LEGACY_DXSDK)
    list(INSERT DIRECTX_LIB_SEARCH_PATHS 0 "${DXSDK_DIR}/Lib/x86")
endif()

find_library(DDRAW_LIBRARY ddraw PATHS ${DIRECTX_LIB_SEARCH_PATHS})
find_library(DSOUND_LIBRARY dsound PATHS ${DIRECTX_LIB_SEARCH_PATHS})
find_library(DINPUT_LIBRARY dinput8 PATHS ${DIRECTX_LIB_SEARCH_PATHS})
find_library(DXGUID_LIBRARY dxguid PATHS ${DIRECTX_LIB_SEARCH_PATHS})
find_library(DPLAYX_LIBRARY dplayx PATHS ${DIRECTX_LIB_SEARCH_PATHS})

set(DIRECTX_INCLUDE_DIRS ${DIRECTX_INCLUDE_DIR})
if(HAVE_LOCAL_DX9)
    list(APPEND DIRECTX_INCLUDE_DIRS "${LOCAL_DX9_DIR}/Include")
endif()
if(HAVE_LEGACY_DXSDK)
    list(APPEND DIRECTX_INCLUDE_DIRS "${DXSDK_DIR}/Include")
endif()

set(DIRECTX_LIBRARIES
    ${DDRAW_LIBRARY}
    ${DSOUND_LIBRARY}
    ${DINPUT_LIBRARY}
    ${DXGUID_LIBRARY}
)

if(DPLAYX_LIBRARY)
    list(APPEND DIRECTX_LIBRARIES ${DPLAYX_LIBRARY})
endif()

find_package_handle_standard_args(DirectX
    REQUIRED_VARS DIRECTX_INCLUDE_DIR DDRAW_LIBRARY DSOUND_LIBRARY
)

mark_as_advanced(DIRECTX_INCLUDE_DIR DDRAW_LIBRARY DSOUND_LIBRARY DINPUT_LIBRARY DXGUID_LIBRARY DPLAYX_LIBRARY)
