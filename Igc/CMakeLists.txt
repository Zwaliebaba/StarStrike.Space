# IGC - Internet Game Core

file(GLOB IGC_SOURCES "*.cpp")
file(GLOB IGC_HEADERS "*.h")

add_library(Igc STATIC ${IGC_SOURCES} ${IGC_HEADERS})

target_include_directories(Igc
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
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
