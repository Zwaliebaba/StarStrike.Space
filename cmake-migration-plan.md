# CMake Migration Plan (Agent-Executable)

This plan is structured for automated execution. Each task has clear inputs, outputs, and verification steps.

---

## Prerequisites

Before starting, verify the environment:

```powershell
# Check CMake is installed
cmake --version  # Requires 3.20+

# Check Visual Studio
& "${env:ProgramFiles(x86)}\Microsoft Visual Studio\Installer\vswhere.exe" -latest -property installationPath
```

---

## Task 1: Create CMake Module Directory

**Action:** Create the `cmake/` directory with foundational modules.

### Task 1.1: Create cmake/CompilerFlags.cmake

**File:** `cmake/CompilerFlags.cmake`

```cmake
# Compiler flags ported from makefile.inc
# Maps nmake CARGSFLAVOR to CMake

function(allegiance_set_compiler_flags target)
    target_compile_definitions(${target} PRIVATE
        WIN32
        _WINDOWS
        STRICT
        $<$<CONFIG:Debug>:_DEBUG;DEBUG>
        $<$<CONFIG:Release>:NDEBUG;OPTIMIZED>
        $<$<CONFIG:Test>:_DEBUG;DEBUG;OPTIMIZED>
    )

    if(DEFINED ENV{ALLEGIANCE_DEV})
        target_compile_definitions(${target} PRIVATE _ALLEGIANCE_DEV_)
    endif()

    target_compile_options(${target} PRIVATE
        /W3         # Warning level 3
        /WX         # Warnings as errors
        /Zi         # Debug info
        /EHsc       # C++ exceptions
        /Gm-        # Disable minimal rebuild
        $<$<CONFIG:Debug>:/Od /RTC1>
        $<$<CONFIG:Release>:/O2 /Oy /Ob2 /GF /Gy>
        $<$<CONFIG:Test>:/O2 /Oy /Ob2 /GF /Gy>
    )

    # MSVC runtime library
    set_property(TARGET ${target} PROPERTY
        MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL"
    )
endfunction()

# Static runtime variant
function(allegiance_set_static_runtime target)
    set_property(TARGET ${target} PROPERTY
        MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>"
    )
endfunction()
```

**Verification:** File exists at `cmake/CompilerFlags.cmake`

---

### Task 1.2: Create cmake/PrecompiledHeaders.cmake

**File:** `cmake/PrecompiledHeaders.cmake`

```cmake
# Precompiled header helper
# Usage: allegiance_add_pch(target pch_header pch_source)

function(allegiance_add_pch target pch_header pch_source)
    if(MSVC)
        target_precompile_headers(${target} PRIVATE ${pch_header})
    endif()
endfunction()
```

**Verification:** File exists at `cmake/PrecompiledHeaders.cmake`

---

### Task 1.3: Create cmake/FindDirectX.cmake

**File:** `cmake/FindDirectX.cmake`

```cmake
# Find DirectX SDK or Windows SDK DirectX components
# Sets: DIRECTX_INCLUDE_DIRS, DIRECTX_LIBRARIES

include(FindPackageHandleStandardArgs)

# DirectX headers are in Windows SDK since Windows 8
# Check Windows SDK include path
if(DEFINED ENV{WindowsSdkDir})
    set(WINSDK_DIR "$ENV{WindowsSdkDir}")
else()
    set(WINSDK_DIR "C:/Program Files (x86)/Windows Kits/10")
endif()

# Find include directory
find_path(DIRECTX_INCLUDE_DIR
    NAMES d3d9.h ddraw.h dinput.h dsound.h
    PATHS
        "${WINSDK_DIR}/Include/${CMAKE_VS_WINDOWS_TARGET_PLATFORM_VERSION}/um"
        "${WINSDK_DIR}/Include/10.0.19041.0/um"
        "${WINSDK_DIR}/Include/um"
    NO_DEFAULT_PATH
)

# Find libraries
set(DIRECTX_LIB_SEARCH_PATHS
    "${WINSDK_DIR}/Lib/${CMAKE_VS_WINDOWS_TARGET_PLATFORM_VERSION}/um/x86"
    "${WINSDK_DIR}/Lib/10.0.19041.0/um/x86"
)

find_library(DDRAW_LIBRARY ddraw PATHS ${DIRECTX_LIB_SEARCH_PATHS})
find_library(DSOUND_LIBRARY dsound PATHS ${DIRECTX_LIB_SEARCH_PATHS})
find_library(DINPUT_LIBRARY dinput8 PATHS ${DIRECTX_LIB_SEARCH_PATHS})
find_library(DXGUID_LIBRARY dxguid PATHS ${DIRECTX_LIB_SEARCH_PATHS})

set(DIRECTX_INCLUDE_DIRS ${DIRECTX_INCLUDE_DIR})
set(DIRECTX_LIBRARIES
    ${DDRAW_LIBRARY}
    ${DSOUND_LIBRARY}
    ${DINPUT_LIBRARY}
    ${DXGUID_LIBRARY}
)

find_package_handle_standard_args(DirectX
    REQUIRED_VARS DIRECTX_INCLUDE_DIR DDRAW_LIBRARY DSOUND_LIBRARY
)

mark_as_advanced(DIRECTX_INCLUDE_DIR DDRAW_LIBRARY DSOUND_LIBRARY DINPUT_LIBRARY DXGUID_LIBRARY)
```

**Verification:** File exists at `cmake/FindDirectX.cmake`

---

## Task 2: Create Root CMakeLists.txt

**File:** `CMakeLists.txt`

```cmake
cmake_minimum_required(VERSION 3.20)
project(Allegiance VERSION 1.0.0 LANGUAGES CXX C)

# ============================================================================
# Global Configuration
# ============================================================================

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Only support Win32 (x86)
if(NOT CMAKE_GENERATOR_PLATFORM)
    set(CMAKE_GENERATOR_PLATFORM "Win32" CACHE STRING "Target platform" FORCE)
endif()

# Build configurations
set(CMAKE_CONFIGURATION_TYPES "Debug;Release;Test" CACHE STRING "" FORCE)

# Custom Test configuration (Release with _DEBUG)
set(CMAKE_CXX_FLAGS_TEST "${CMAKE_CXX_FLAGS_RELEASE}" CACHE STRING "" FORCE)
set(CMAKE_C_FLAGS_TEST "${CMAKE_C_FLAGS_RELEASE}" CACHE STRING "" FORCE)
set(CMAKE_EXE_LINKER_FLAGS_TEST "${CMAKE_EXE_LINKER_FLAGS_RELEASE}" CACHE STRING "" FORCE)

# ============================================================================
# Paths
# ============================================================================

set(ALLEGIANCE_ROOT ${CMAKE_SOURCE_DIR})
set(ALLEGIANCE_INC_DIR ${ALLEGIANCE_ROOT}/Inc)
set(ALLEGIANCE_ZONE_DIR ${ALLEGIANCE_ROOT}/Zone)
set(ALLEGIANCE_GUIDS_DIR ${ALLEGIANCE_ROOT}/guids)

# Output directories (match existing objs/ structure)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${ALLEGIANCE_ROOT}/objs/$<CONFIG>)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${ALLEGIANCE_ROOT}/objs/$<CONFIG>)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${ALLEGIANCE_ROOT}/objs/$<CONFIG>)

# Per-target output subdirectories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${ALLEGIANCE_ROOT}/objs/debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${ALLEGIANCE_ROOT}/objs/retail)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_TEST ${ALLEGIANCE_ROOT}/objs/test)

# ============================================================================
# CMake Modules
# ============================================================================

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

include(CompilerFlags)
include(PrecompiledHeaders)
find_package(DirectX REQUIRED)

# ============================================================================
# Global Include Directories
# ============================================================================

include_directories(
    ${ALLEGIANCE_INC_DIR}
    ${ALLEGIANCE_ZONE_DIR}
    ${ALLEGIANCE_GUIDS_DIR}
    ${DIRECTX_INCLUDE_DIRS}
)

# ============================================================================
# Subprojects (in dependency order)
# ============================================================================

# Phase 1: Foundation libraries
add_subdirectory(zlib)
add_subdirectory(guids)
add_subdirectory(_Utility)

# Phase 2: Core game libraries
add_subdirectory(Igc)
add_subdirectory(engine)
add_subdirectory(effect)

# Phase 3: Client libraries
add_subdirectory(soundengine)
add_subdirectory(clintlib)
add_subdirectory(training)

# Phase 4: Server libraries
add_subdirectory(sharemem)

# Phase 5: COM components (uncomment when ready)
# add_subdirectory(AGC)

# Phase 6: Executables (uncomment when ready)
# add_subdirectory(WinTrek)
# add_subdirectory(FedSrv)
# add_subdirectory(lobby)

# Phase 7: Tools (uncomment when ready)
# add_subdirectory(mdlc)
# add_subdirectory(xmunge)

# ============================================================================
# Summary
# ============================================================================

message(STATUS "")
message(STATUS "=== Allegiance CMake Configuration ===")
message(STATUS "  Generator:    ${CMAKE_GENERATOR}")
message(STATUS "  Platform:     ${CMAKE_GENERATOR_PLATFORM}")
message(STATUS "  Build types:  ${CMAKE_CONFIGURATION_TYPES}")
message(STATUS "  Output dir:   ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
message(STATUS "")
```

**Verification:**
```powershell
cmake -B build -G "Visual Studio 17 2022" -A Win32
# Should complete without errors about missing CMakeLists.txt
```

---

## Task 3: Create Library CMakeLists.txt Files

### Task 3.1: zlib/CMakeLists.txt

**File:** `zlib/CMakeLists.txt`

**Action:** Read source files from existing `zlib/` directory, create CMakeLists.txt

```cmake
# ZLibrary - Foundation utility library

set(ZLIB_SOURCES
    base.cpp
    color.cpp
    dcbase.cpp
    dialog.cpp
    event.cpp
    FTPSession.cpp
    input.cpp
    matrix.cpp
    matrix2.cpp
    orientation.cpp
    pch.cpp
    quaternion.cpp
    token.cpp
    tlist.cpp
    vector.cpp
    VersionInfo.cpp
    Win32app.cpp
    window.cpp
    zlib.cpp
    zstring.cpp
    ztime.cpp
)

set(ZLIB_HEADERS
    alloc.h
    AutoCriticalSection.h
    base.h
    cast.h
    color.h
    comobj.h
    dialog.h
    event.h
    fixdelete.h
    genericlist.h
    input.h
    main.h
    mask.h
    matrix.h
    orientation.h
    pch.h
    point.h
    quaternion.h
    rect.h
    tarray.h
    tcompare.h
    tlist.h
    TlsValue.h
    tmap.h
    token.h
    tref.h
    tstack.h
    tvector.h
    vector.h
    VersionInfo.h
    vertex.h
    Win32app.h
    window.h
    winstyles.h
    zadapt.h
    zassert.h
    zlib.h
    zmath.h
    zreg.h
    zstring.h
    ztime.h
)

add_library(ZLibrary STATIC ${ZLIB_SOURCES} ${ZLIB_HEADERS})

target_include_directories(ZLibrary
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

allegiance_set_compiler_flags(ZLibrary)
allegiance_add_pch(ZLibrary pch.h pch.cpp)

# Output to zlib subdirectory
set_target_properties(ZLibrary PROPERTIES
    OUTPUT_NAME "zlib"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/zlib
)
```

**Verification:**
```powershell
cmake --build build --config Debug --target ZLibrary
# Should produce objs/debug/zlib/zlib.lib
```

---

### Task 3.2: guids/CMakeLists.txt

**File:** `guids/CMakeLists.txt`

**Action:** Read source files, create CMakeLists.txt

```cmake
# FedGuids - GUID definitions

file(GLOB GUIDS_SOURCES "*.c" "*.cpp")

add_library(FedGuids STATIC ${GUIDS_SOURCES})

target_include_directories(FedGuids
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

allegiance_set_compiler_flags(FedGuids)

set_target_properties(FedGuids PROPERTIES
    OUTPUT_NAME "guids"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/guids
)
```

---

### Task 3.3: _Utility/CMakeLists.txt

**File:** `_Utility/CMakeLists.txt`

```cmake
# Utility library

set(UTILITY_SOURCES
    allegdb.cpp
    CollisionEntry.cpp
    CollisionQueue.cpp
    CRC.cpp
    Endpoint.cpp
    HitTest.cpp
    KDnode.cpp
    KDroot.cpp
    Messages.cpp
    pch.cpp
    Utility.cpp
    zauth.cpp
)

set(UTILITY_HEADERS
    CRC.h
    listwrappers.h
    pch.h
    Utility.h
    Utility.hxx
)

add_library(Utility STATIC ${UTILITY_SOURCES} ${UTILITY_HEADERS})

target_include_directories(Utility
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    PRIVATE ${ALLEGIANCE_ROOT}/WinTrek
)

target_link_libraries(Utility
    PUBLIC ZLibrary
    PUBLIC FedGuids
)

allegiance_set_compiler_flags(Utility)
allegiance_add_pch(Utility pch.h pch.cpp)

set_target_properties(Utility PROPERTIES
    OUTPUT_NAME "Utility"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/_utility
)
```

---

### Task 3.4: Igc/CMakeLists.txt

**File:** `Igc/CMakeLists.txt`

**Action:** Read Igc directory, identify all .cpp files, create CMakeLists.txt

```cmake
# IGC - Internet Game Core

file(GLOB IGC_SOURCES "*.cpp")
file(GLOB IGC_HEADERS "*.h")

add_library(Igc STATIC ${IGC_SOURCES} ${IGC_HEADERS})

target_include_directories(Igc
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Igc
    PUBLIC Utility
    PUBLIC FedGuids
)

allegiance_set_compiler_flags(Igc)

set_target_properties(Igc PROPERTIES
    OUTPUT_NAME "igc"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/igc
)
```

---

### Task 3.5: engine/CMakeLists.txt

**File:** `engine/CMakeLists.txt`

```cmake
# Engine library

file(GLOB ENGINE_SOURCES "*.cpp")
file(GLOB ENGINE_HEADERS "*.h")

add_library(Engine STATIC ${ENGINE_SOURCES} ${ENGINE_HEADERS})

target_include_directories(Engine
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Engine
    PUBLIC ZLibrary
    PUBLIC FedGuids
    PUBLIC ${DIRECTX_LIBRARIES}
)

allegiance_set_compiler_flags(Engine)

set_target_properties(Engine PROPERTIES
    OUTPUT_NAME "engine"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/engine
)
```

---

### Task 3.6: effect/CMakeLists.txt

**File:** `effect/CMakeLists.txt`

```cmake
# Effect library

file(GLOB EFFECT_SOURCES "*.cpp")
file(GLOB EFFECT_HEADERS "*.h")

add_library(Effect STATIC ${EFFECT_SOURCES} ${EFFECT_HEADERS})

target_include_directories(Effect
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Effect
    PUBLIC Engine
)

allegiance_set_compiler_flags(Effect)

set_target_properties(Effect PROPERTIES
    OUTPUT_NAME "effect"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/effect
)
```

---

### Task 3.7: soundengine/CMakeLists.txt

**File:** `soundengine/CMakeLists.txt`

```cmake
# SoundEngine library

file(GLOB SOUNDENGINE_SOURCES "*.cpp")
file(GLOB SOUNDENGINE_HEADERS "*.h")

add_library(SoundEngine STATIC ${SOUNDENGINE_SOURCES} ${SOUNDENGINE_HEADERS})

target_include_directories(SoundEngine
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(SoundEngine
    PUBLIC ZLibrary
    PUBLIC ${DSOUND_LIBRARY}
    PUBLIC winmm
)

allegiance_set_compiler_flags(SoundEngine)

set_target_properties(SoundEngine PROPERTIES
    OUTPUT_NAME "soundengine"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/soundengine
)
```

---

### Task 3.8: clintlib/CMakeLists.txt

**File:** `clintlib/CMakeLists.txt`

```cmake
# ClintLib - Client library

file(GLOB CLINTLIB_SOURCES "*.cpp")
file(GLOB CLINTLIB_HEADERS "*.h")

add_library(ClintLib STATIC ${CLINTLIB_SOURCES} ${CLINTLIB_HEADERS})

target_include_directories(ClintLib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(ClintLib
    PUBLIC Igc
    PUBLIC FedGuids
)

allegiance_set_compiler_flags(ClintLib)

set_target_properties(ClintLib PROPERTIES
    OUTPUT_NAME "clintlib"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/clintlib
)
```

---

### Task 3.9: training/CMakeLists.txt

**File:** `training/CMakeLists.txt`

```cmake
# Training library

file(GLOB TRAINING_SOURCES "*.cpp")
file(GLOB TRAINING_HEADERS "*.h")

add_library(Training STATIC ${TRAINING_SOURCES} ${TRAINING_HEADERS})

target_include_directories(Training
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Training
    PUBLIC Igc
)

allegiance_set_compiler_flags(Training)

set_target_properties(Training PROPERTIES
    OUTPUT_NAME "training"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/training
)
```

---

### Task 3.10: sharemem/CMakeLists.txt

**File:** `sharemem/CMakeLists.txt`

```cmake
# ShareMem - Shared memory library

file(GLOB SHAREMEM_SOURCES "*.cpp")
file(GLOB SHAREMEM_HEADERS "*.h")

add_library(ShareMem STATIC ${SHAREMEM_SOURCES} ${SHAREMEM_HEADERS})

target_include_directories(ShareMem
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

allegiance_set_compiler_flags(ShareMem)

set_target_properties(ShareMem PROPERTIES
    OUTPUT_NAME "sharemem"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/sharemem
)
```

---

## Task 4: Verification Script

**File:** `cmake/verify-build.ps1`

```powershell
# Verification script for CMake migration
# Run from repository root

param(
    [string]$Config = "Debug"
)

$ErrorActionPreference = "Stop"

Write-Host "=== CMake Migration Verification ===" -ForegroundColor Cyan

# Step 1: Configure
Write-Host "`n[1/4] Configuring CMake..." -ForegroundColor Yellow
cmake -B build -G "Visual Studio 17 2022" -A Win32
if ($LASTEXITCODE -ne 0) { throw "CMake configure failed" }

# Step 2: Build libraries
Write-Host "`n[2/4] Building libraries ($Config)..." -ForegroundColor Yellow
$targets = @("ZLibrary", "FedGuids", "Utility", "Igc", "Engine", "Effect", "SoundEngine", "ClintLib", "Training", "ShareMem")

foreach ($target in $targets) {
    Write-Host "  Building $target..." -NoNewline
    cmake --build build --config $Config --target $target 2>&1 | Out-Null
    if ($LASTEXITCODE -eq 0) {
        Write-Host " OK" -ForegroundColor Green
    } else {
        Write-Host " FAILED" -ForegroundColor Red
        cmake --build build --config $Config --target $target
        throw "Build failed for $target"
    }
}

# Step 3: Verify outputs
Write-Host "`n[3/4] Verifying outputs..." -ForegroundColor Yellow
$configDir = switch ($Config) {
    "Debug" { "debug" }
    "Release" { "retail" }
    "Test" { "test" }
}

$expectedLibs = @(
    "objs/$configDir/zlib/zlib.lib",
    "objs/$configDir/guids/guids.lib",
    "objs/$configDir/_utility/Utility.lib",
    "objs/$configDir/igc/igc.lib",
    "objs/$configDir/engine/engine.lib",
    "objs/$configDir/effect/effect.lib",
    "objs/$configDir/soundengine/soundengine.lib",
    "objs/$configDir/clintlib/clintlib.lib",
    "objs/$configDir/training/training.lib",
    "objs/$configDir/sharemem/sharemem.lib"
)

foreach ($lib in $expectedLibs) {
    if (Test-Path $lib) {
        Write-Host "  [OK] $lib" -ForegroundColor Green
    } else {
        Write-Host "  [MISSING] $lib" -ForegroundColor Red
    }
}

# Step 4: Compare with nmake (if exists)
Write-Host "`n[4/4] Summary" -ForegroundColor Yellow
Write-Host "  CMake build completed successfully!" -ForegroundColor Green
Write-Host "  Next steps:"
Write-Host "    - Uncomment executable targets in root CMakeLists.txt"
Write-Host "    - Add AGC COM component"
Write-Host "    - Add WinTrek client executable"
```

**Verification:** Run `.\cmake\verify-build.ps1 -Config Debug`

---

## Task 5: Executable Targets (Phase 2)

### Task 5.1: WinTrek/CMakeLists.txt (Client)

**File:** `WinTrek/CMakeLists.txt`

**Prerequisite:** All library tasks complete

```cmake
# Allegiance Client

file(GLOB WINTREK_SOURCES "*.cpp")
file(GLOB WINTREK_HEADERS "*.h")

add_executable(Allegiance WIN32
    ${WINTREK_SOURCES}
    ${WINTREK_HEADERS}
    Allegiance.rc
)

target_include_directories(Allegiance PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Allegiance PRIVATE
    ClintLib
    Training
    SoundEngine
    Effect
    Engine
    Igc
    Utility
    ZLibrary
    FedGuids
    # DirectX
    ddraw
    dsound
    dinput8
    dxguid
    dplayx
    # Windows
    winmm
    comctl32
    version
    ws2_32
    wininet
    urlmon
    odbc32
    odbccp32
)

allegiance_set_compiler_flags(Allegiance)

set_target_properties(Allegiance PROPERTIES
    OUTPUT_NAME "Allegiance"
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/wintrek
)
```

---

## Execution Order Summary

Execute tasks in this order:

| Order | Task | File(s) to Create | Depends On |
|-------|------|-------------------|------------|
| 1 | Create cmake directory | `cmake/` folder | - |
| 2 | CompilerFlags module | `cmake/CompilerFlags.cmake` | Task 1 |
| 3 | PrecompiledHeaders module | `cmake/PrecompiledHeaders.cmake` | Task 1 |
| 4 | FindDirectX module | `cmake/FindDirectX.cmake` | Task 1 |
| 5 | Root CMakeLists | `CMakeLists.txt` | Tasks 2-4 |
| 6 | ZLibrary | `zlib/CMakeLists.txt` | Task 5 |
| 7 | FedGuids | `guids/CMakeLists.txt` | Task 5 |
| 8 | Utility | `_Utility/CMakeLists.txt` | Tasks 6-7 |
| 9 | Igc | `Igc/CMakeLists.txt` | Task 8 |
| 10 | Engine | `engine/CMakeLists.txt` | Tasks 6-7 |
| 11 | Effect | `effect/CMakeLists.txt` | Task 10 |
| 12 | SoundEngine | `soundengine/CMakeLists.txt` | Task 6 |
| 13 | ClintLib | `clintlib/CMakeLists.txt` | Task 9 |
| 14 | Training | `training/CMakeLists.txt` | Task 9 |
| 15 | ShareMem | `sharemem/CMakeLists.txt` | Task 5 |
| 16 | Verify Phase 1 | Run `cmake/verify-build.ps1` | Tasks 6-15 |
| 17 | WinTrek (Client) | `WinTrek/CMakeLists.txt` | Task 16 |

---

## Agent Instructions

For each task:

1. **Read** the file specification above
2. **Create** the file using `create_file` tool  
3. **Verify** by running the verification command in terminal
4. **Fix** any errors before proceeding to next task

After completing all library tasks (1-15), run full verification:

```powershell
cmake -B build -G "Visual Studio 17 2022" -A Win32
cmake --build build --config Debug
```

Expected success criteria:
- All `.lib` files generated in `objs/debug/` subdirectories
- No CMake configuration errors
- No compilation errors for Debug configuration
