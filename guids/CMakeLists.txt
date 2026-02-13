# FedGuids - GUID definitions

file(GLOB GUIDS_SOURCES "*.c" "*.cpp")

add_library(FedGuids STATIC ${GUIDS_SOURCES})

target_include_directories(FedGuids
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

allegiance_set_compiler_flags(FedGuids)

set_target_properties(FedGuids PROPERTIES
    OUTPUT_NAME "guids"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/guids
)
