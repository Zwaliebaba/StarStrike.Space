# cvh - Convex Hull generator tool
# Generates .cvh (convex hull) files from X mesh data for collision detection.
# Modes: -flatten, -extract, -bound

set(CVH_SOURCES
    pch.cpp
    main.cpp
)

set(CVH_HEADERS
    pch.h
)

add_executable(cvh ${CVH_SOURCES} ${CVH_HEADERS})

target_include_directories(cvh PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(cvh PRIVATE
    kernel32.lib
)

target_compile_definitions(cvh PRIVATE
    WIN32
    _CONSOLE
)

allegiance_set_compiler_flags(cvh)
allegiance_add_pch(cvh pch.h pch.cpp)

set_target_properties(cvh PROPERTIES
    OUTPUT_NAME "cvh"
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
    FOLDER "Tools"
)
