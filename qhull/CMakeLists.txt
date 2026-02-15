# qhull - Convex Hull computation library and tool
# Originally from The Geometry Center, University of Minnesota
# Used by cvh to compute convex hulls for collision detection

set(QHULL_SOURCES
    unix.c
    qhull.c
    geom.c
    geom2.c
    global.c
    io.c
    mem.c
    merge.c
    poly.c
    poly2.c
    set.c
    stat.c
    user.c
)

set(QHULL_HEADERS
    qhull.h
    qhull_a.h
    geom.h
    io.h
    mem.h
    merge.h
    poly.h
    set.h
    stat.h
    user.h
)

add_executable(qhull ${QHULL_SOURCES} ${QHULL_HEADERS})

target_include_directories(qhull PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_definitions(qhull PRIVATE
    _CRT_SECURE_NO_WARNINGS
    __STDC__
)

# Disable precompiled headers for this pure C project
set_target_properties(qhull PROPERTIES
    OUTPUT_NAME "qhull"
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
    FOLDER "Tools"
)
