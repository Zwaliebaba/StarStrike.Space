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

# ============================================================================
# MIDL Compilation - Generate COM GUID definition files (_i.c) from IDL
# ============================================================================
# These _i.c files are #included by allsrvmodule.cpp and AGCGuids.cpp.
# The generated files mirror the source tree layout under ${MIDL_OUTPUT_DIR}
# so that relative #include paths (e.g. "../Inc/AGCIDL_i.c") resolve correctly
# when ${MIDL_OUTPUT_DIR}/FedSrv is added as an include directory.

find_program(MIDL_EXECUTABLE midl
    HINTS "$ENV{WindowsSdkDir}/bin/${CMAKE_VS_WINDOWS_TARGET_PLATFORM_VERSION}/x86"
)
if(NOT MIDL_EXECUTABLE)
    message(FATAL_ERROR "MIDL compiler not found. Ensure Windows SDK is installed.")
endif()

set(MIDL_OUTPUT_DIR ${CMAKE_BINARY_DIR}/midl)

# AGCIDL.idl ? Inc/AGCIDL_i.c (AGC interface GUIDs)
set(AGCIDL_I_C ${MIDL_OUTPUT_DIR}/Inc/AGCIDL_i.c)
add_custom_command(
    OUTPUT ${AGCIDL_I_C}
    COMMAND ${CMAKE_COMMAND} -E make_directory "${MIDL_OUTPUT_DIR}/Inc"
    COMMAND ${MIDL_EXECUTABLE} /nologo
        /header NUL /proxy NUL /dlldata NUL
        /iid "${AGCIDL_I_C}"
        /I "${CMAKE_SOURCE_DIR}/AGC"
        "${CMAKE_SOURCE_DIR}/Inc/AGCIDL.idl"
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/Inc
    DEPENDS
        ${CMAKE_SOURCE_DIR}/Inc/AGCIDL.idl
        ${CMAKE_SOURCE_DIR}/AGC/AGCEventsIDL.idl
    COMMENT "MIDL: AGCIDL.idl -> AGCIDL_i.c"
    VERBATIM
)

# AGC.idl ? AGC/AGC_i.c (AGC COM class GUIDs)
set(AGC_I_C ${MIDL_OUTPUT_DIR}/AGC/AGC_i.c)
add_custom_command(
    OUTPUT ${AGC_I_C}
    COMMAND ${CMAKE_COMMAND} -E make_directory "${MIDL_OUTPUT_DIR}/AGC"
    COMMAND ${MIDL_EXECUTABLE} /nologo
        /header NUL /proxy NUL /dlldata NUL
        /iid "${AGC_I_C}"
        /I "${CMAKE_SOURCE_DIR}/Inc"
        /I "${CMAKE_SOURCE_DIR}/AGC"
        "${CMAKE_SOURCE_DIR}/AGC/AGC.idl"
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/AGC
    DEPENDS
        ${CMAKE_SOURCE_DIR}/AGC/AGC.idl
        ${CMAKE_SOURCE_DIR}/Inc/AGCIDL.idl
        ${CMAKE_SOURCE_DIR}/AGC/AGCEventsIDL.idl
    COMMENT "MIDL: AGC.idl -> AGC_i.c"
    VERBATIM
)

# AllSrvModuleIDL.idl ? FedSrv/AllSrvModuleIDL_i.c (FedSrv COM interfaces)
set(ALLSRV_I_C ${MIDL_OUTPUT_DIR}/FedSrv/AllSrvModuleIDL_i.c)
add_custom_command(
    OUTPUT ${ALLSRV_I_C}
    COMMAND ${CMAKE_COMMAND} -E make_directory "${MIDL_OUTPUT_DIR}/FedSrv"
    COMMAND ${MIDL_EXECUTABLE} /nologo
        /header NUL /proxy NUL /dlldata NUL
        /iid "${ALLSRV_I_C}"
        /I "${CMAKE_SOURCE_DIR}/Inc"
        /I "${CMAKE_SOURCE_DIR}/AGC"
        "${CMAKE_CURRENT_SOURCE_DIR}/AllSrvModuleIDL.idl"
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    DEPENDS
        ${CMAKE_CURRENT_SOURCE_DIR}/AllSrvModuleIDL.idl
        ${CMAKE_SOURCE_DIR}/Inc/AGCIDL.idl
        ${CMAKE_SOURCE_DIR}/AGC/AGCEventsIDL.idl
    COMMENT "MIDL: AllSrvModuleIDL.idl -> AllSrvModuleIDL_i.c"
    VERBATIM
)

# Target to ensure all MIDL outputs are generated before compilation
add_custom_target(MidlGenerated DEPENDS
    ${AGCIDL_I_C}
    ${AGC_I_C}
    ${ALLSRV_I_C}
)
set_target_properties(MidlGenerated PROPERTIES FOLDER "Generated")

# ============================================================================
# AllSrv Executable
# ============================================================================

add_executable(AllSrv WIN32
    ${FEDSRV_SOURCES}
    ${FEDPERF_SOURCES}
    ${TCLIB_SOURCES}
    ${FEDSRV_RC}
)

# Ensure MIDL runs before AllSrv compiles
add_dependencies(AllSrv MidlGenerated)

# Apply common compiler flags
allegiance_set_compiler_flags(AllSrv)

# Precompiled header
target_precompile_headers(AllSrv PRIVATE pch.h)

# Include directories - only add what doesn't propagate from linked libraries
target_include_directories(AllSrv PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${MIDL_OUTPUT_DIR}/FedSrv    # MIDL-generated _i.c files (mirrors source tree layout)
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
