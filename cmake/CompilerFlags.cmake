# Compiler flags ported from makefile.inc
# Maps nmake CARGSFLAVOR to CMake

function(allegiance_set_compiler_flags target)
    target_compile_definitions(${target} PRIVATE
        WIN32
        _WINDOWS
        STRICT
        DIRECTINPUT_VERSION=0x0700
        # Suppress deprecation warnings for legacy C runtime functions
        _CRT_SECURE_NO_WARNINGS
        _CRT_NONSTDC_NO_DEPRECATE
        _CRT_NON_CONFORMING_SWPRINTFS
        $<$<CONFIG:Debug>:_DEBUG;DEBUG>
        $<$<CONFIG:Release>:NDEBUG;OPTIMIZED>
        $<$<CONFIG:Test>:_DEBUG;DEBUG;OPTIMIZED>
    )

    if(DEFINED ENV{ALLEGIANCE_DEV})
        target_compile_definitions(${target} PRIVATE _ALLEGIANCE_DEV_)
    endif()

    target_compile_options(${target} PRIVATE
        /W3         # Warning level 3
        /WX-        # Disable warnings as errors (legacy code has many warnings)
        /Zi         # Debug info
        /FS         # Force synchronous PDB writes (parallel compilation)
        /EHsc       # C++ exceptions
        /Gm-        # Disable minimal rebuild
        /permissive # Enable permissive mode for legacy code patterns
        /wd4244     # Disable conversion warnings (float/double)
        /wd4267     # Disable size_t to int conversion warnings
        /wd4996     # Disable deprecated function warnings
        /FI${CMAKE_SOURCE_DIR}/cmake/allegiance_compat.h  # Force-include compatibility header
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
