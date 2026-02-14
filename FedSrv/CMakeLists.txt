# FedSrv - Allegiance Game Server
# CMake build configuration

# Main FedSrv source files
set(FEDSRV_SOURCES
    AdminEventLoggerHook.cpp
    AdminGame.cpp
    AdminGames.cpp
    AdminServer.cpp
    AdminSession.cpp
    AdminSessionClass.cpp
    AdminSessionEventSink.cpp
    AdminShip.cpp
    AdminUser.cpp
    AdminUsers.cpp
    allsrvmodule.cpp
    BitArray.cpp
    config.cpp
    DIALOGS.CPP
    dirmon.cpp
    FedSrv.CPP
    fscluster.cpp
    fslobby.cpp
    fsmission.cpp
    fsship.cpp
    fsside.cpp
    pch.cpp
    sqlhelp.cpp
    srvdbg.cpp
    srvqguids.cpp
    SWMRG.CPP
)

# External source files from fedperf
set(FEDPERF_SOURCES
    ${CMAKE_SOURCE_DIR}/fedperf/cntrmap.cpp
    ${CMAKE_SOURCE_DIR}/fedperf/collect.cpp
    ${CMAKE_SOURCE_DIR}/fedperf/pch.cpp
    ${CMAKE_SOURCE_DIR}/fedperf/perfdll.cpp
    ${CMAKE_SOURCE_DIR}/fedperf/perfutil.cpp
)

# External source files from sentinal
set(SENTINAL_SOURCES
    ${CMAKE_SOURCE_DIR}/sentinal/config.cpp
    ${CMAKE_SOURCE_DIR}/sentinal/dplaychk.cpp
    ${CMAKE_SOURCE_DIR}/sentinal/sentinal.cpp
    ${CMAKE_SOURCE_DIR}/sentinal/srvdbg.cpp
)

# Resource files
set(FEDSRV_RC
    FedSrv.RC
    ${CMAKE_SOURCE_DIR}/sentinal/sentinal.rc
)

# IDL file (for COM interface generation)
# Note: This may need special handling for MIDL compilation
set(FEDSRV_IDL
    AllSrvModuleIDL.idl
)

add_executable(AllSrv WIN32
    ${FEDSRV_SOURCES}
    ${FEDPERF_SOURCES}
    ${SENTINAL_SOURCES}
    ${FEDSRV_RC}
)

# Apply common compiler flags
allegiance_set_compiler_flags(AllSrv)

# Precompiled header
target_precompile_headers(AllSrv PRIVATE pch.h)

# Include directories
target_include_directories(AllSrv PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/Inc
    ${CMAKE_SOURCE_DIR}/zlib
    ${CMAKE_SOURCE_DIR}/_Utility
    ${CMAKE_SOURCE_DIR}/Igc
    ${CMAKE_SOURCE_DIR}/guids
    ${CMAKE_SOURCE_DIR}/Zone
    ${CMAKE_SOURCE_DIR}/AGC
    ${CMAKE_SOURCE_DIR}/fedperf
    ${CMAKE_SOURCE_DIR}/sentinal
    ${CMAKE_SOURCE_DIR}/sharemem
    ${CMAKE_SOURCE_DIR}/TCLib
    ${CMAKE_SOURCE_DIR}/TCAtl
    ${DIRECTX_INCLUDE_DIR}
)

# Compile definitions
target_compile_definitions(AllSrv PRIVATE
    FEDSRV
    igc_static
    _WIN32_WINNT=0x0400
    _ATL_STATIC_REGISTRY
)

# Enable RTTI (RuntimeTypeInfo)
target_compile_options(AllSrv PRIVATE /GR)

# Link libraries - internal
target_link_libraries(AllSrv PRIVATE
    Igc
    Utility
    ZLibrary
    FedGuids
    ShareMem
)

# Link libraries - DirectX
target_link_libraries(AllSrv PRIVATE
    ${DIRECTX_DPLAYX_LIBRARY}
    ${DIRECTX_DXGUID_LIBRARY}
)

# Link libraries - Windows system
target_link_libraries(AllSrv PRIVATE
    ws2_32.lib
    odbc32.lib
    odbccp32.lib
    comctl32.lib
    version.lib
    ole32.lib
    oleaut32.lib
    uuid.lib
    winmm.lib
)

# Linker options
target_link_options(AllSrv PRIVATE
    /SUBSYSTEM:WINDOWS
    /LARGEADDRESSAWARE
)

# Output name
set_target_properties(AllSrv PROPERTIES
    OUTPUT_NAME "AllSrv"
    DEBUG_POSTFIX "d"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
