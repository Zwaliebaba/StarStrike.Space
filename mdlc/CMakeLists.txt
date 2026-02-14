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
    DirectX::DirectX
    DirectX::DPlayX
)

# Link libraries - Windows system
target_link_libraries(mdlc PRIVATE
    winmm
    comctl32
    version
    ws2_32
    wininet
    urlmon
    lz32
    ole32
    oleaut32
    uuid
    delayimp
)

# Linker options for console app
target_link_options(mdlc PRIVATE
    /SUBSYSTEM:CONSOLE
)

# Output to tools directory
set_target_properties(mdlc PROPERTIES
    OUTPUT_NAME "mdlc"
    FOLDER "Tools"
    VS_DEBUGGER_WORKING_DIRECTORY "$<TARGET_FILE_DIR:mdlc>"
)
