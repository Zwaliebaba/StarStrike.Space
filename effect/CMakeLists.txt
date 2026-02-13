# Effect library

file(GLOB EFFECT_SOURCES "*.cpp")
file(GLOB EFFECT_HEADERS "*.h")

add_library(Effect STATIC ${EFFECT_SOURCES} ${EFFECT_HEADERS})

target_include_directories(Effect
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    PRIVATE ${CMAKE_SOURCE_DIR}/soundengine
)

target_link_libraries(Effect
    PUBLIC Engine
)

allegiance_set_compiler_flags(Effect)

set_target_properties(Effect PROPERTIES
    OUTPUT_NAME "effect"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/effect
)
