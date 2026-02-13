# ZLibrary - Foundation utility library
# Note: dialog.cpp and dcbase.cpp are excluded per original makefile

set(ZLIB_SOURCES
    base.cpp
    color.cpp
    # dcbase.cpp excluded - only used for DREAMCAST builds
    # dialog.cpp excluded - commented out in original makefile
    event.cpp
    FTPSession.cpp
    input.cpp
    matrix.cpp
    matrix2.cpp
    orientation.cpp
    pch.cpp
    quaternion.cpp
    token.cpp
    tlist.cpp
    vector.cpp
    VersionInfo.cpp
    Win32app.cpp
    window.cpp
    zlib.cpp
    zstring.cpp
    ztime.cpp
)

set(ZLIB_HEADERS
    alloc.h
    AutoCriticalSection.h
    base.h
    cast.h
    color.h
    comobj.h
    dialog.h
    event.h
    fixdelete.h
    genericlist.h
    input.h
    main.h
    mask.h
    matrix.h
    orientation.h
    pch.h
    point.h
    quaternion.h
    rect.h
    tarray.h
    tcompare.h
    tlist.h
    TlsValue.h
    tmap.h
    token.h
    tref.h
    tstack.h
    tvector.h
    vector.h
    VersionInfo.h
    vertex.h
    Win32app.h
    window.h
    winstyles.h
    zadapt.h
    zassert.h
    zlib.h
    zmath.h
    zreg.h
    zstring.h
    ztime.h
)

add_library(ZLibrary STATIC ${ZLIB_SOURCES} ${ZLIB_HEADERS})

target_include_directories(ZLibrary
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

allegiance_set_compiler_flags(ZLibrary)
allegiance_add_pch(ZLibrary pch.h pch.cpp)

# Output to zlib subdirectory
set_target_properties(ZLibrary PROPERTIES
    OUTPUT_NAME "zlib"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/zlib
)
