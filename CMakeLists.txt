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

# Phase 6: Executables
add_subdirectory(WinTrek)
add_subdirectory(FedSrv)
# add_subdirectory(lobby)  # Matchmaking server - not needed for standalone/LAN

# Phase 7: Tools
add_subdirectory(mdlc)
# add_subdirectory(xmunge)

# Phase 8: Artwork assets
add_subdirectory(Artwork)

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
