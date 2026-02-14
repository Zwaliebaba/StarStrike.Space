# FedSrv - Allegiance Game Server
# CMake build configuration

# Main FedSrv source files
set(FEDSRV_SOURCES
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
    AGCGuids.cpp
)

# AGC interface GUIDs - include the .c file via a wrapper cpp
# The MIDL-generated .c file can't use C++ PCH directly

# External source files from test/TCLib (worker threads, tracing, etc.)
set(TCLIB_SOURCES
    ${CMAKE_SOURCE_DIR}/test/TCLib/TCLib.cpp
    ${CMAKE_SOURCE_DIR}/test/TCLib/WorkerThread.cpp
    ${CMAKE_SOURCE_DIR}/test/TCLib/TCThread.cpp
    ${CMAKE_SOURCE_DIR}/test/TCLib/UtilityThread.cpp
    ${CMAKE_SOURCE_DIR}/test/TCLib/DynaLib.cpp
    ${CMAKE_SOURCE_DIR}/test/TCLib/StrManip.cpp
)

# External source files from fedperf
set(FEDPERF_SOURCES
    ${CMAKE_SOURCE_DIR}/fedperf/cntrmap.cpp
    ${CMAKE_SOURCE_DIR}/fedperf/collect.cpp
    ${CMAKE_SOURCE_DIR}/fedperf/pch.cpp
    ${CMAKE_SOURCE_DIR}/fedperf/perfdll.cpp
    ${CMAKE_SOURCE_DIR}/fedperf/perfutil.cpp
)

# Note: sentinal sources are not included - FedSrv has its own config.cpp and srvdbg.cpp
# sentinal is a separate standalone monitoring utility

# Resource files
set(FEDSRV_RC
    FedSrv.RC
)

# IDL file (for COM interface generation)
# Note: This may need special handling for MIDL compilation
set(FEDSRV_IDL
    AllSrvModuleIDL.idl
)

add_executable(AllSrv WIN32
    ${FEDSRV_SOURCES}
    ${FEDPERF_SOURCES}
    ${TCLIB_SOURCES}
    ${FEDSRV_RC}
)

# Apply common compiler flags
allegiance_set_compiler_flags(AllSrv)

# Precompiled header
target_precompile_headers(AllSrv PRIVATE pch.h)

# Include directories - only add what doesn't propagate from linked libraries
target_include_directories(AllSrv PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/AGC
    ${CMAKE_SOURCE_DIR}/fedperf
    ${CMAKE_SOURCE_DIR}/sentinal
    ${CMAKE_SOURCE_DIR}/lobby
    ${CMAKE_SOURCE_DIR}/test/Inc
    ${CMAKE_SOURCE_DIR}/test/TCLib
    ${CMAKE_SOURCE_DIR}/test/TCAtl
)

# Compile definitions
target_compile_definitions(AllSrv PRIVATE
    FEDSRV
    igc_static
    _WIN32_WINNT=0x0501
    _ATL_STATIC_REGISTRY
    ALLSRV_STANDALONE  # Bypass legacy Zone authentication
    AGC_HOST           # Enable AGC hosting support
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

# Link libraries - DirectX (use imported targets)
target_link_libraries(AllSrv PRIVATE
    DirectX::DPlayX
    DirectX::DXGuid
)

# Link libraries - Windows system (no .lib suffix needed)
target_link_libraries(AllSrv PRIVATE
    ws2_32
    odbc32
    odbccp32
    comctl32
    version
    ole32
    oleaut32
    uuid
    winmm
    netapi32
    wininet
)

# Linker options
target_link_options(AllSrv PRIVATE
    /SUBSYSTEM:CONSOLE
    /LARGEADDRESSAWARE
)

# Output name
set_target_properties(AllSrv PROPERTIES
    OUTPUT_NAME "AllSrv"
    DEBUG_POSTFIX "d"
    FOLDER "Executables"
    VS_DEBUGGER_WORKING_DIRECTORY "$<TARGET_FILE_DIR:AllSrv>"
)
