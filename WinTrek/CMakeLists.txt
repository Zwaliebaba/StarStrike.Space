# WinTrek - Allegiance Game Client
# CMake build configuration

set(WINTREK_SOURCES
    cdkeydialog.cpp
    CharInfoScreen.cpp
    chatpane.cpp
    cmdview.cpp
    console.cpp
    consoledata.cpp
    gameoverscreen.cpp
    gamescreen.cpp
    gamesite.cpp
    gamestartingscreen.cpp
    gametypes.cpp
    hangarscreen.cpp
    indicator.cpp
    introscreen.cpp
    inventoryimage.cpp
    leaderboardscreen.cpp
    load.cpp
    loadout.cpp
    logon.cpp
    netinfo.cpp
    newgamescreen.cpp
    offline.cpp
    passworddialog.cpp
    pch.cpp
    PostTrainingSlideshow.cpp
    radarimage.cpp
    sectormap.cpp
    selpane.cpp
    Slideshow.cpp
    soundinit.cpp
    splashscreen.cpp
    SquadsScreen.cpp
    teampane.cpp
    teamscreen.cpp
    teleportpane.cpp
    # trainingscreen.cpp  # Excluded: requires AGC COM interfaces (agc.h, AllSrvModuleIDL.h)
    trainingscreen_stub.cpp  # Stub for training screen until AGC is built
    TrainingSlideshow.cpp
    trekapp.cpp
    trekctrls.cpp
    trekigc.cpp
    trekinput.cpp
    trekmdl.cpp
    treksound.cpp
    videoscreen.cpp
    WinTrek.cpp
    ZoneClubScreen.cpp
    zoneeventsscreen.cpp
    ZoneSquad.cpp
)

# Resource file
set(WINTREK_RC
    ${CMAKE_SOURCE_DIR}/Lang/Usa/WinTrek/WinTrek.rc
)

# Set resource include directories
set(CMAKE_RC_FLAGS "${CMAKE_RC_FLAGS} /I\"${CMAKE_SOURCE_DIR}/Lang/NonIntl/WinTrek\" /I\"${CMAKE_SOURCE_DIR}/Inc\"")

add_executable(Allegiance WIN32
    ${WINTREK_SOURCES}
    ${WINTREK_RC}
)

# Apply common compiler flags
allegiance_set_compiler_flags(Allegiance)

# Precompiled header
target_precompile_headers(Allegiance PRIVATE pch.h)

# Include directories
target_include_directories(Allegiance PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/Inc
    ${CMAKE_SOURCE_DIR}/zlib
    ${CMAKE_SOURCE_DIR}/_Utility
    ${CMAKE_SOURCE_DIR}/Igc
    ${CMAKE_SOURCE_DIR}/engine
    ${CMAKE_SOURCE_DIR}/effect
    ${CMAKE_SOURCE_DIR}/soundengine
    ${CMAKE_SOURCE_DIR}/clintlib
    ${CMAKE_SOURCE_DIR}/training
    ${CMAKE_SOURCE_DIR}/lobby
    ${CMAKE_SOURCE_DIR}/Club
    ${CMAKE_SOURCE_DIR}/Zone
    ${DIRECTX_INCLUDE_DIR}
)

# Compile definitions
target_compile_definitions(Allegiance PRIVATE
    WINTREK
    igc_static
    IGC_SHIP
    _USRDLL
    DLL
)

# Link libraries - internal
target_link_libraries(Allegiance PRIVATE
    ClintLib
    Training
    SoundEngine
    Effect
    Engine
    Igc
    Utility
    ZLibrary
    FedGuids
)

# Link libraries - DirectX
target_link_libraries(Allegiance PRIVATE
    ${DDRAW_LIBRARY}
    ${DSOUND_LIBRARY}
    ${DINPUT_LIBRARY}
    ${DXGUID_LIBRARY}
    ${DPLAYX_LIBRARY}
)

# Link libraries - Windows system
target_link_libraries(Allegiance PRIVATE
    winmm.lib
    comctl32.lib
    version.lib
    ws2_32.lib
    wininet.lib
    urlmon.lib
    odbc32.lib
    odbccp32.lib
    strmiids.lib
    ole32.lib
    oleaut32.lib
    uuid.lib
    lz32.lib
)

# Linker options
target_link_options(Allegiance PRIVATE
    /SUBSYSTEM:WINDOWS
    /LARGEADDRESSAWARE
)

# Output name (debug suffix)
set_target_properties(Allegiance PROPERTIES
    OUTPUT_NAME "Allegiance"
    DEBUG_POSTFIX "d"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
