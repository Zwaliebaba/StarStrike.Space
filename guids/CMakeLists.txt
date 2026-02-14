# FedGuids - GUID definitions
# Contains DirectPlay and other COM GUIDs

file(GLOB GUIDS_SOURCES "*.c" "*.cpp")

add_library(FedGuids STATIC ${GUIDS_SOURCES})

target_include_directories(FedGuids
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    PUBLIC ${ALLEGIANCE_INC_DIR}
)

# FedGuids needs DirectX includes for dplay.h etc
target_link_libraries(FedGuids
    PUBLIC DirectX::DXGuid
)

allegiance_set_compiler_flags(FedGuids)

set_target_properties(FedGuids PROPERTIES
    OUTPUT_NAME "guids"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/guids
)
