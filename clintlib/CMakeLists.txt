# ClintLib - Client library

file(GLOB CLINTLIB_SOURCES "*.cpp")
file(GLOB CLINTLIB_HEADERS "*.h")

# Exclude files with incompatible legacy APIs
list(FILTER CLINTLIB_SOURCES EXCLUDE REGEX "networkgame\\.cpp$")

add_library(ClintLib STATIC ${CLINTLIB_SOURCES} ${CLINTLIB_HEADERS})

target_include_directories(ClintLib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    PRIVATE ${CMAKE_SOURCE_DIR}/lobby
    PRIVATE ${CMAKE_SOURCE_DIR}/Club
)

target_link_libraries(ClintLib
    PUBLIC Igc
    PUBLIC Engine
    PUBLIC FedGuids
)

allegiance_set_compiler_flags(ClintLib)

set_target_properties(ClintLib PROPERTIES
    OUTPUT_NAME "clintlib"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/clintlib
)
