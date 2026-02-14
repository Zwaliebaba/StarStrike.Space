# xmunge - Mesh manipulation tool (LEGACY)
# Reduces, flattens, extracts, or calculates bounds for DirectX mesh files
#
# NOTE: This tool requires Direct3D Retained Mode (d3drm.lib) which was
# deprecated in DirectX 8 and removed from modern Windows SDKs.
# It can only be built if you have access to an old DirectX SDK (pre-DX8)
# or a copy of d3drm.lib.

option(BUILD_XMUNGE "Build xmunge tool (requires legacy d3drm.lib)" OFF)

if(BUILD_XMUNGE)
    # Try to find d3drm.lib
    find_library(D3DRM_LIBRARY d3drm
        PATHS
            "${ALLEGIANCE_ROOT}/DX9/Lib/x86"
            "$ENV{DXSDK_DIR}/Lib/x86"
    )

    if(D3DRM_LIBRARY)
        set(XMUNGE_SOURCES
            pch.cpp
            xmunge.cpp
        )

        set(XMUNGE_HEADERS
            pch.h
        )

        add_executable(xmunge ${XMUNGE_SOURCES} ${XMUNGE_HEADERS})

        target_include_directories(xmunge PRIVATE
            ${CMAKE_CURRENT_SOURCE_DIR}
            ${ALLEGIANCE_ROOT}/engine
            ${ALLEGIANCE_ROOT}/zlib
            ${ALLEGIANCE_ROOT}/DX9/Include
        )

        target_link_libraries(xmunge PRIVATE
            Engine
            ZLibrary
            ${D3DRM_LIBRARY}
            ${DIRECTX_LIBRARIES}
        )

        allegiance_set_compiler_flags(xmunge)
        allegiance_add_pch(xmunge pch.h pch.cpp)

        set_target_properties(xmunge PROPERTIES
            OUTPUT_NAME "xmunge"
            RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
        )
    else()
        message(WARNING "xmunge: d3drm.lib not found - Direct3D Retained Mode is required but no longer available in modern SDKs")
    endif()
else()
    message(STATUS "xmunge: Skipped (legacy tool requires d3drm.lib - use -DBUILD_XMUNGE=ON to attempt build)")
endif()
