# ShareMem - Shared memory library

file(GLOB SHAREMEM_SOURCES "*.cpp")
file(GLOB SHAREMEM_HEADERS "*.h")

add_library(ShareMem STATIC ${SHAREMEM_SOURCES} ${SHAREMEM_HEADERS})

target_include_directories(ShareMem
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    PUBLIC ${ALLEGIANCE_INC_DIR}
    PUBLIC ${ALLEGIANCE_ZONE_DIR}
)

allegiance_set_compiler_flags(ShareMem)

set_target_properties(ShareMem PROPERTIES
    OUTPUT_NAME "sharemem"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/sharemem
)
