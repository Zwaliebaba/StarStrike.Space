# mdlc - MDL Compiler Tool
# CMake build configuration

set(MDLC_SOURCES
    mdlc.cpp
    pch.cpp
)

add_executable(mdlc
    ${MDLC_SOURCES}
)

# Apply common compiler flags
allegiance_set_compiler_flags(mdlc)

# Precompiled header
target_precompile_headers(mdlc PRIVATE pch.h)

# Include directories
target_include_directories(mdlc PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/Inc
    ${CMAKE_SOURCE_DIR}/zlib
    ${CMAKE_SOURCE_DIR}/engine
    ${CMAKE_SOURCE_DIR}/effect
    ${DIRECTX_INCLUDE_DIR}
)

# Compile definitions
target_compile_definitions(mdlc PRIVATE
    WIN32
    _CONSOLE
)

# Link libraries - internal
target_link_libraries(mdlc PRIVATE
    Effect
    Engine
    ZLibrary
    FedGuids
)

# Link libraries - DirectX
target_link_libraries(mdlc PRIVATE
    ${DDRAW_LIBRARY}
    ${DSOUND_LIBRARY}
    ${DINPUT_LIBRARY}
    ${DXGUID_LIBRARY}
    ${DPLAYX_LIBRARY}
)

# Link libraries - Windows system
target_link_libraries(mdlc PRIVATE
    winmm.lib
    comctl32.lib
    version.lib
    ws2_32.lib
    wininet.lib
    urlmon.lib
    lz32.lib
    ole32.lib
    oleaut32.lib
    uuid.lib
    delayimp.lib
)

# Linker options for console app
target_link_options(mdlc PRIVATE
    /SUBSYSTEM:CONSOLE
)

# Output to tools directory
set_target_properties(mdlc PROPERTIES
    OUTPUT_NAME "mdlc"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/objs/$<CONFIG>/mdlc"
)
