# SoundEngine library

file(GLOB SOUNDENGINE_SOURCES "*.cpp")
file(GLOB SOUNDENGINE_HEADERS "*.h")

add_library(SoundEngine STATIC ${SOUNDENGINE_SOURCES} ${SOUNDENGINE_HEADERS})

target_include_directories(SoundEngine
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(SoundEngine
    PUBLIC ZLibrary
    PUBLIC ${DSOUND_LIBRARY}
    PUBLIC winmm
)

allegiance_set_compiler_flags(SoundEngine)

set_target_properties(SoundEngine PROPERTIES
    OUTPUT_NAME "soundengine"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/soundengine
)
