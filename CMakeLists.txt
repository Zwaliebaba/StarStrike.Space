cmake_minimum_required(VERSION 3.21)
project(Allegiance VERSION 1.0.0 LANGUAGES CXX C)

# ============================================================================
# Global Configuration
# ============================================================================

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Only support Win32 (x86) - fail fast if misconfigured
if(NOT CMAKE_SIZEOF_VOID_P EQUAL 4)
    message(FATAL_ERROR "Allegiance only supports 32-bit builds (Win32/x86). Use -A Win32 with Visual Studio generator.")
endif()

# Build configurations
set(CMAKE_CONFIGURATION_TYPES "Debug;Release;Test" CACHE STRING "" FORCE)

# Enable folder organization in Visual Studio Solution Explorer
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

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

# Output directories (CMake build/bin + build/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/$<CONFIG>)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/$<CONFIG>)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib/$<CONFIG>)

# ============================================================================
# CMake Modules
# ============================================================================

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

include(CompilerFlags)
include(PrecompiledHeaders)
find_package(DirectX REQUIRED)

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

# Startup project for Visual Studio
set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT Allegiance)

# Phase 7: Tools
add_subdirectory(mdlc)
add_subdirectory(xmunge)

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
