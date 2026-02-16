# Engine library
# Source files extracted from engine/makefile (non-DREAMCAST build)

set(ENGINE_SOURCES
    dderror.cpp
    dinput.cpp
    videoimage.cpp
    geometry.cpp
    bspgeo.cpp
    image.cpp
    bounds.cpp
    surface.cpp
    ddsurface.cpp
    font.cpp
    raster.cpp
    device3d.cpp      # Non-Dreamcast version (not dcdevice3d.cpp)
    context.cpp
    d3ddevice.cpp
    dddevice.cpp
    engine.cpp
    material.cpp
    palette.cpp
    transform.cpp
    transform2.cpp
    keyframe.cpp
    xfile.cpp
    mdl.cpp
    mdlbin.cpp
    caption.cpp
    engineapp.cpp
    enginewindow.cpp
    value.cpp
    namespace.cpp
    modeler.cpp
    pixelformat.cpp
    camera.cpp
    viewport.cpp
    pane.cpp
    toppane.cpp
    button.cpp
    controls.cpp
    popup.cpp
    menu.cpp
    paneimage.cpp
    frameimage.cpp
    pch.cpp
)

file(GLOB ENGINE_HEADERS "*.h")

add_library(Engine STATIC ${ENGINE_SOURCES} ${ENGINE_HEADERS})

target_include_directories(Engine
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Engine
    PUBLIC ZLibrary
    PUBLIC FedGuids
    PUBLIC DirectX::DirectX
)

allegiance_set_compiler_flags(Engine)
allegiance_add_pch(Engine pch.h pch.cpp)

set_target_properties(Engine PROPERTIES
    OUTPUT_NAME "engine"
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/engine
    FOLDER "Libraries/Core"
)
