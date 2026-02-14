# IGC - Internet Game Core
# Core game simulation shared between client and server

set(IGC_SOURCES
    afterburnerIGC.cpp
    asteroidigc.cpp
    bucketigc.cpp
    buoyigc.cpp
    chaffigc.cpp
    chafftypeigc.cpp
    civilizationigc.cpp
    cloakigc.cpp
    clusterIGC.cpp
    common.cpp
    developmentigc.cpp
    dispenserigc.cpp
    dronetypeigc.cpp
    hullTypeIGC.cpp
    launchertypeigc.cpp
    magazineigc.cpp
    mapmakerigc.cpp
    mineigc.cpp
    minetypeigc.cpp
    missileigc.cpp
    missiletypeigc.cpp
    missionigc.cpp
    modelIGC.cpp
    packigc.cpp
    partTypeIGC.cpp
    pch.cpp
    private.cpp
    probeigc.cpp
    probetypeigc.cpp
    projectileIGC.cpp
    projectileTypeIGC.cpp
    shieldIGC.cpp
    shipIGC.cpp
    sideigc.cpp
    stationIGC.cpp
    stationtypeigc.cpp
    treasureIGC.cpp
    treasuresetigc.cpp
    warpIGC.cpp
    weaponIGC.cpp
)

set(IGC_HEADERS
    afterburnerIGC.h
    asteroidigc.h
    bucketigc.h
    buildingeffectigc.h
    buoyigc.h
    chaffigc.h
    chafftypeigc.h
    civilizationigc.h
    cloakigc.h
    clusterIGC.h
    developmentigc.h
    dispenserigc.h
    dronetypeigc.h
    hullTypeIGC.h
    igc.h
    launchertypeigc.h
    magazineigc.h
    mapmakerigc.h
    mineigc.h
    minetypeigc.h
    missileigc.h
    missiletypeigc.h
    missionigc.h
    modelIGC.h
    packigc.h
    partTypeIGC.h
    pch.h
    private.h
    probeigc.h
    probetypeigc.h
    projectileIGC.h
    projectileTypeIGC.h
    shieldIGC.h
    shipIGC.h
    sideigc.h
    sounds.h
    stationIGC.h
    stationtypeigc.h
    treasureIGC.h
    treasuresetigc.h
    warpIGC.h
    weaponIGC.h
)

add_library(Igc STATIC ${IGC_SOURCES} ${IGC_HEADERS})

target_include_directories(Igc
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    PUBLIC ${ALLEGIANCE_INC_DIR}
)

target_link_libraries(Igc
    PUBLIC Utility
    PUBLIC FedGuids
)

allegiance_set_compiler_flags(Igc)

set_target_properties(Igc PROPERTIES
    OUTPUT_NAME "igc"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/igc
)
