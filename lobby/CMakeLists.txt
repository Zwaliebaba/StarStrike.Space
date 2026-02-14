# Lobby - Allegiance Lobby Server
# CMake build configuration

set(LOBBY_SOURCES
    AutoUpdate.cpp
    broadcast.cpp
    client.cpp
    lobby.cpp
    lobbyapp.cpp
    lobbyevents.cpp
    lobqguids.cpp
    mission.cpp
    pch.cpp
    server.cpp
    zgameinfo.cpp
)

# Resource file
set(LOBBY_RC
    alllobby.rc
)

add_executable(Lobby WIN32
    ${LOBBY_SOURCES}
    ${LOBBY_RC}
)

# Apply common compiler flags
allegiance_set_compiler_flags(Lobby)

# Precompiled header
target_precompile_headers(Lobby PRIVATE pch.h)

# Include directories
target_include_directories(Lobby PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/Inc
    ${CMAKE_SOURCE_DIR}/zlib
    ${CMAKE_SOURCE_DIR}/_Utility
    ${CMAKE_SOURCE_DIR}/guids
    ${CMAKE_SOURCE_DIR}/Zone
    ${CMAKE_SOURCE_DIR}/sharemem
    ${CMAKE_SOURCE_DIR}/TCLib
    ${CMAKE_SOURCE_DIR}/TCAtl
    ${DIRECTX_INCLUDE_DIR}
)

# Compile definitions
target_compile_definitions(Lobby PRIVATE
    LOBBY
    _WIN32_WINNT=0x0400
    _ATL_STATIC_REGISTRY
)

# Enable RTTI (RuntimeTypeInfo)
target_compile_options(Lobby PRIVATE /GR)

# Link libraries - internal
target_link_libraries(Lobby PRIVATE
    Utility
    ZLibrary
    FedGuids
    ShareMem
)

# Link libraries - DirectX
target_link_libraries(Lobby PRIVATE
    ${DIRECTX_DPLAYX_LIBRARY}
    ${DIRECTX_DXGUID_LIBRARY}
)

# Link libraries - Windows system
target_link_libraries(Lobby PRIVATE
    ws2_32.lib
    odbc32.lib
    odbccp32.lib
    ole32.lib
    oleaut32.lib
    uuid.lib
    winmm.lib
)

# Linker options
target_link_options(Lobby PRIVATE
    /SUBSYSTEM:WINDOWS
    /LARGEADDRESSAWARE
)

# Output name
set_target_properties(Lobby PROPERTIES
    OUTPUT_NAME "Lobby"
    DEBUG_POSTFIX "d"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
