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

add_dependencies(Allegiance Artwork)

# Apply common compiler flags
allegiance_set_compiler_flags(Allegiance)

# Precompiled header
target_precompile_headers(Allegiance PRIVATE pch.h)

# Include directories - only add what doesn't propagate from linked libraries
target_include_directories(Allegiance PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/lobby
    ${CMAKE_SOURCE_DIR}/Club
)

# Compile definitions
target_compile_definitions(Allegiance PRIVATE
    WINTREK
    igc_static
    IGC_SHIP
    _USRDLL
    DLL
)

# Link libraries - internal (includes propagate via PUBLIC dependencies)
target_link_libraries(Allegiance PRIVATE
    ClintLib
    Training
    SoundEngine
    Effect
)

# Link libraries - DirectX (use imported targets)
target_link_libraries(Allegiance PRIVATE
    DirectX::DirectX
    DirectX::DPlayX
)

# Link libraries - Windows system (no .lib suffix needed)
target_link_libraries(Allegiance PRIVATE
    winmm
    comctl32
    version
    ws2_32
    wininet
    urlmon
    odbc32
    odbccp32
    strmiids
    ole32
    oleaut32
    uuid
    lz32
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
    FOLDER "Executables"
    VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
)
