# Training library

file(GLOB TRAINING_SOURCES "*.cpp")
file(GLOB TRAINING_HEADERS "*.h")

add_library(Training STATIC ${TRAINING_SOURCES} ${TRAINING_HEADERS})

target_include_directories(Training
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    PRIVATE ${CMAKE_SOURCE_DIR}/lobby
    PRIVATE ${CMAKE_SOURCE_DIR}/Club
    PRIVATE ${CMAKE_SOURCE_DIR}/WinTrek
    PRIVATE ${CMAKE_SOURCE_DIR}/engine
    PRIVATE ${CMAKE_SOURCE_DIR}/soundengine
    PRIVATE ${CMAKE_SOURCE_DIR}/effect
    PRIVATE ${CMAKE_SOURCE_DIR}/clintlib
)

target_link_libraries(Training
    PUBLIC Igc
)

allegiance_set_compiler_flags(Training)

set_target_properties(Training PROPERTIES
    OUTPUT_NAME "training"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/training
)
