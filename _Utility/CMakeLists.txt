# Utility library
# Source files extracted from _Utility/MAKEFILE
# Note: allegdb.cpp and zauth.cpp are excluded due to missing dependencies
# (atldbcli.h, zoneauth.h, etc.)

set(UTILITY_SOURCES
    # allegdb.cpp  # Requires atldbcli.h (ATL OLE DB)
    CollisionEntry.cpp
    CollisionQueue.cpp
    CRC.cpp
    Endpoint.cpp
    HitTest.cpp
    KDnode.cpp
    KDroot.cpp
    Messages.cpp
    pch.cpp
    Utility.cpp
    # zauth.cpp    # Requires zoneauth.h (Microsoft Zone)
)

set(UTILITY_HEADERS
    CRC.h
    listwrappers.h
    pch.h
    Utility.h
    Utility.hxx
)

add_library(Utility STATIC ${UTILITY_SOURCES} ${UTILITY_HEADERS})

target_include_directories(Utility
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    PUBLIC ${ALLEGIANCE_INC_DIR}
)

target_link_libraries(Utility
    PUBLIC ZLibrary
    PUBLIC FedGuids
)

allegiance_set_compiler_flags(Utility)
allegiance_add_pch(Utility pch.h pch.cpp)

set_target_properties(Utility PROPERTIES
    OUTPUT_NAME "Utility"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/_utility
    FOLDER "Libraries/Foundation"
)
