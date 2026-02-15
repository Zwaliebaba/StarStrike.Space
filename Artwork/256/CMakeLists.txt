# Artwork/256 - Game Artwork Asset Build
# CMake build configuration
#
# Geo models (.x files) are loaded directly by the engine at runtime using
# the native X-file parser, completely bypassing the legacy D3DRM-dependent
# art pipeline (xmunge/pmesh/mdlc). The build only needs to:
#   - Copy .x files (and _static.x for LOD) to the output directory
#   - Run cvh to generate collision hull data (.cvh)
#   - Copy text .mdl files for utility geos (globe, pointer, etc.)
#
# Optional features (disabled by default, require mdlc):
#   - BMP to MDL bitmap conversion (mdlc -convert)
#   - Animation MDL compression (mdlc -compressanim)
#
# NOTE: Bitmap conversion requires mdlc which uses DirectDraw for image processing.
# This may fail in automated build environments without a graphics context.
# Set ALLEGIANCE_BUILD_BITMAPS=ON to enable bitmap conversion (requires GUI).

# Option to enable/disable bitmap conversion (requires DirectDraw)
option(ALLEGIANCE_BUILD_BITMAPS "Build bitmap MDLs using mdlc (requires DirectDraw)" OFF)

# Output directory
set(ARTWORK_DESTDIR "${ARTWORK_OUTPUT_DIR}")

# Path to mdlc (only needed for optional bitmap/animation/font features)
if(TARGET mdlc)
    set(MDLC_EXE "$<TARGET_FILE:mdlc>")
endif()

# Source directory
set(ART256_SRCDIR "${CMAKE_CURRENT_SOURCE_DIR}")

# ============================================================================
# Helper function to add bitmap conversion commands
# ============================================================================
function(add_bitmap_conversion BITMAP_NAME)
    set(INPUT_BMP "${ART256_SRCDIR}/${BITMAP_NAME}.bmp")
    set(OUTPUT_MDL "${ARTWORK_DESTDIR}/${BITMAP_NAME}bmp.mdl")

    if(EXISTS "${INPUT_BMP}")
        add_custom_command(
            OUTPUT "${OUTPUT_MDL}"
            COMMAND ${MDLC_EXE} -convert "${INPUT_BMP}" "${OUTPUT_MDL}"
            DEPENDS "${INPUT_BMP}"
            WORKING_DIRECTORY "${ART256_SRCDIR}"
            COMMENT "Converting ${BITMAP_NAME}.bmp to MDL"
            VERBATIM
        )
        list(APPEND BITMAP_OUTPUTS "${OUTPUT_MDL}")
        set(BITMAP_OUTPUTS "${BITMAP_OUTPUTS}" PARENT_SCOPE)
    endif()
endfunction()

# ============================================================================
# Helper function to add MDL copy commands
# ============================================================================
function(add_mdl_copy MDL_NAME)
    set(INPUT_MDL "${ART256_SRCDIR}/${MDL_NAME}.mdl")
    set(OUTPUT_MDL "${ARTWORK_DESTDIR}/${MDL_NAME}.mdl")

    if(EXISTS "${INPUT_MDL}")
        add_custom_command(
            OUTPUT "${OUTPUT_MDL}"
            COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INPUT_MDL}" "${OUTPUT_MDL}"
            DEPENDS "${INPUT_MDL}"
            COMMENT "Copying ${MDL_NAME}.mdl"
            VERBATIM
        )
        list(APPEND MDL_OUTPUTS "${OUTPUT_MDL}")
        set(MDL_OUTPUTS "${MDL_OUTPUTS}" PARENT_SCOPE)
    endif()
endfunction()

# ============================================================================
# Helper function: copy .x file and text MDL to output
# The engine loads text .mdl files directly at runtime, no mdlc needed.
# ============================================================================
function(add_geo_from_xfile NAME XFILE TEXTMDL)
    set(INPUT_X "${ART256_SRCDIR}/${XFILE}.x")
    set(INPUT_TEXTMDL "${ART256_SRCDIR}/${TEXTMDL}.mdl")
    set(OUTPUT_MDL "${ARTWORK_DESTDIR}/${TEXTMDL}.mdl")
    set(COPIED_X "${ARTWORK_DESTDIR}/${XFILE}.x")

    if(EXISTS "${INPUT_X}" AND EXISTS "${INPUT_TEXTMDL}")
        add_custom_command(
            OUTPUT "${COPIED_X}"
            COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INPUT_X}" "${COPIED_X}"
            DEPENDS "${INPUT_X}" "${ARTWORK_DESTDIR}/.created"
            COMMENT "Copying ${XFILE}.x"
            VERBATIM
        )
        # Copy the text MDL to the output as the final name (e.g. pointertext.mdl -> pointer.mdl)
        # The engine will parse the text MDL which calls ImportXFile() at runtime
        set(OUTPUT_FINAL "${ARTWORK_DESTDIR}/${NAME}.mdl")
        add_custom_command(
            OUTPUT "${OUTPUT_FINAL}"
            COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INPUT_TEXTMDL}" "${OUTPUT_FINAL}"
            DEPENDS "${INPUT_TEXTMDL}" "${COPIED_X}" "${ARTWORK_DESTDIR}/.created"
            COMMENT "Copying ${NAME}.mdl (text MDL)"
            VERBATIM
        )
        list(APPEND GEO_OUTPUTS "${OUTPUT_FINAL}")
        set(GEO_OUTPUTS "${GEO_OUTPUTS}" PARENT_SCOPE)
    else()
        message(STATUS "Geo skip: ${NAME} (missing ${XFILE}.x or ${TEXTMDL}.mdl)")
    endif()
endfunction()

function(add_geo_from_xfiles NAME TEXTMDL)
    set(INPUT_TEXTMDL "${ART256_SRCDIR}/${TEXTMDL}.mdl")
    set(OUTPUT_FINAL "${ARTWORK_DESTDIR}/${NAME}.mdl")
    set(COPY_DEPS "")

    if(NOT EXISTS "${INPUT_TEXTMDL}")
        message(STATUS "Geo skip: ${NAME} (missing ${TEXTMDL}.mdl)")
        return()
    endif()

    # Copy all X files
    foreach(XFILE ${ARGN})
        set(INPUT_X "${ART256_SRCDIR}/${XFILE}.x")
        set(COPIED_X "${ARTWORK_DESTDIR}/${XFILE}.x")
        if(EXISTS "${INPUT_X}")
            add_custom_command(
                OUTPUT "${COPIED_X}"
                COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INPUT_X}" "${COPIED_X}"
                DEPENDS "${INPUT_X}" "${ARTWORK_DESTDIR}/.created"
                COMMENT "Copying ${XFILE}.x"
                VERBATIM
            )
            list(APPEND COPY_DEPS "${COPIED_X}")
        endif()
    endforeach()

    # Copy text MDL as the final output name
    add_custom_command(
        OUTPUT "${OUTPUT_FINAL}"
        COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INPUT_TEXTMDL}" "${OUTPUT_FINAL}"
        DEPENDS "${INPUT_TEXTMDL}" ${COPY_DEPS} "${ARTWORK_DESTDIR}/.created"
        COMMENT "Copying ${NAME}.mdl (text MDL)"
        VERBATIM
    )
    list(APPEND GEO_OUTPUTS "${OUTPUT_FINAL}")
    set(GEO_OUTPUTS "${GEO_OUTPUTS}" PARENT_SCOPE)
endfunction()

# ============================================================================
# Read bitmap.txt and generate conversion commands (optional)
# ============================================================================
set(BITMAP_OUTPUTS "")

if(ALLEGIANCE_BUILD_BITMAPS)
    message(STATUS "Bitmap conversion ENABLED - requires DirectDraw/GUI context")
    if(EXISTS "${ART256_SRCDIR}/bitmap.txt")
        file(STRINGS "${ART256_SRCDIR}/bitmap.txt" BITMAP_LIST)
        foreach(BITMAP_NAME ${BITMAP_LIST})
            # Skip empty lines
            string(STRIP "${BITMAP_NAME}" BITMAP_NAME)
            if(NOT "${BITMAP_NAME}" STREQUAL "")
                add_bitmap_conversion(${BITMAP_NAME})
            endif()
        endforeach()
    endif()
else()
    message(STATUS "Bitmap conversion DISABLED - use -DALLEGIANCE_BUILD_BITMAPS=ON to enable")
endif()

# ============================================================================
# Read copymdl.txt and generate copy commands
# ============================================================================
set(MDL_OUTPUTS "")

if(EXISTS "${ART256_SRCDIR}/copymdl.txt")
    file(STRINGS "${ART256_SRCDIR}/copymdl.txt" MDL_LIST)
    foreach(MDL_NAME ${MDL_LIST})
        string(STRIP "${MDL_NAME}" MDL_NAME)
        if(NOT "${MDL_NAME}" STREQUAL "")
            add_mdl_copy(${MDL_NAME})
        endif()
    endforeach()
endif()

# ============================================================================
# Copy media files (wav, rtf, avi, igc, mml)
# ============================================================================
file(GLOB MEDIA_WAV_FILES "${ART256_SRCDIR}/*.wav")
file(GLOB MEDIA_RTF_FILES "${ART256_SRCDIR}/*.rtf")
file(GLOB MEDIA_AVI_FILES "${ART256_SRCDIR}/*.avi")
file(GLOB MEDIA_IGC_FILES "${ART256_SRCDIR}/*.igc")
file(GLOB MEDIA_MML_FILES "${ART256_SRCDIR}/*.mml")

set(MEDIA_FILES 
    ${MEDIA_WAV_FILES} 
    ${MEDIA_RTF_FILES} 
    ${MEDIA_AVI_FILES} 
    ${MEDIA_IGC_FILES} 
    ${MEDIA_MML_FILES}
)
list(LENGTH MEDIA_FILES MEDIA_COUNT)

# Create output directory target
add_custom_command(
    OUTPUT "${ARTWORK_DESTDIR}/.created"
    COMMAND ${CMAKE_COMMAND} -E make_directory "${ARTWORK_DESTDIR}"
    COMMAND ${CMAKE_COMMAND} -E touch "${ARTWORK_DESTDIR}/.created"
    COMMENT "Creating artwork output directory"
)

# Copy media files target - batch all copies into a single command with a stamp file
# to avoid re-running 1000+ individual copy commands on every build
set(MEDIA_STAMP "${ARTWORK_DESTDIR}/.media_copied")
set(MEDIA_COPY_CMDS "")
foreach(MEDIA_FILE ${MEDIA_FILES})
    list(APPEND MEDIA_COPY_CMDS COMMAND ${CMAKE_COMMAND} -E copy_if_different "${MEDIA_FILE}" "${ARTWORK_DESTDIR}/")
endforeach()

add_custom_command(
    OUTPUT "${MEDIA_STAMP}"
    ${MEDIA_COPY_CMDS}
    COMMAND ${CMAKE_COMMAND} -E touch "${MEDIA_STAMP}"
    DEPENDS ${MEDIA_FILES} "${ARTWORK_DESTDIR}/.created"
    COMMENT "Copying media files (${MEDIA_COUNT} files)"
    VERBATIM
)
set(MEDIA_OUTPUTS "${MEDIA_STAMP}")

# ============================================================================
# Animation MDL compression (requires bitmap outputs)
# ============================================================================
set(ANIM_OUTPUTS "")

if(ALLEGIANCE_BUILD_BITMAPS)
    # Animation compression helper
    function(add_anim_compression NAME COMP_X COMP_Y)
        set(INPUT_MDL "${ARTWORK_DESTDIR}/anim${NAME}bmp.mdl")
        set(OUTPUT_MDL "${ARTWORK_DESTDIR}/anim${NAME}.mdl")
        
        add_custom_command(
            OUTPUT "${OUTPUT_MDL}"
            COMMAND ${MDLC_EXE} -compressanim ${COMP_X} ${COMP_Y} anim${NAME}bmp anim${NAME}.mdl
            DEPENDS "${INPUT_MDL}"
            WORKING_DIRECTORY "${ARTWORK_DESTDIR}"
            COMMENT "Compressing anim${NAME}.mdl"
            VERBATIM
        )
        list(APPEND ANIM_OUTPUTS "${OUTPUT_MDL}")
        set(ANIM_OUTPUTS "${ANIM_OUTPUTS}" PARENT_SCOPE)
    endfunction()

    # Add animation compressions
    add_anim_compression(launch 4 4)
    add_anim_compression(loadout 4 4)
    add_anim_compression(invest 4 4)
    add_anim_compression(sector 2 4)
    add_anim_compression(team 1 3)
    add_anim_compression(radar 4 4)
endif()

# ============================================================================
# Font processing
# ============================================================================
set(FONT_OUTPUT "${ARTWORK_DESTDIR}/font.mdl")

if(EXISTS "${CMAKE_SOURCE_DIR}/bin/font.mdl")
    # Copy pre-built font
    add_custom_command(
        OUTPUT "${FONT_OUTPUT}"
        COMMAND ${CMAKE_COMMAND} -E copy_if_different 
            "${CMAKE_SOURCE_DIR}/bin/font.mdl" 
            "${FONT_OUTPUT}"
        DEPENDS "${CMAKE_SOURCE_DIR}/bin/font.mdl" "${ARTWORK_DESTDIR}/.created"
        COMMENT "Copying font.mdl"
        VERBATIM
    )
elseif(EXISTS "${ART256_SRCDIR}/fontsource.mdl")
    # Build font from source
    add_custom_command(
        OUTPUT "${FONT_OUTPUT}"
        COMMAND ${MDLC_EXE} "${ART256_SRCDIR}/fontsource" "${FONT_OUTPUT}"
        DEPENDS "${ART256_SRCDIR}/fontsource.mdl" "${ARTWORK_DESTDIR}/.created"
        COMMENT "Building font.mdl"
        VERBATIM
    )
endif()

# ============================================================================
# Main targets
# ============================================================================

# Target for bitmap conversion only (when enabled)
if(ALLEGIANCE_BUILD_BITMAPS AND BITMAP_OUTPUTS)
    add_custom_target(Artwork256_Bitmaps
        DEPENDS ${BITMAP_OUTPUTS}
        COMMENT "Converting all bitmaps to MDL"
    )
    if(TARGET mdlc)
        add_dependencies(Artwork256_Bitmaps mdlc)
    endif()
else()
    add_custom_target(Artwork256_Bitmaps
        COMMENT "Bitmap conversion disabled (use -DALLEGIANCE_BUILD_BITMAPS=ON)"
    )
endif()

# Target for MDL copying only
add_custom_target(Artwork256_MDLs
    DEPENDS ${MDL_OUTPUTS}
    COMMENT "Copying all MDL files"
)

# Target for media files only
add_custom_target(Artwork256_Media
    DEPENDS ${MEDIA_OUTPUTS}
    COMMENT "Copying media files"
)

# Target for animations (depends on bitmaps since anim*bmp.mdl are needed)
if(ALLEGIANCE_BUILD_BITMAPS AND ANIM_OUTPUTS)
    add_custom_target(Artwork256_Animations
        DEPENDS ${ANIM_OUTPUTS}
        COMMENT "Building animation MDLs"
    )
    add_dependencies(Artwork256_Animations Artwork256_Bitmaps)
    if(TARGET mdlc)
        add_dependencies(Artwork256_Animations mdlc)
    endif()
else()
    add_custom_target(Artwork256_Animations
        COMMENT "Animation compression disabled (requires bitmap conversion)"
    )
endif()

# Target for fonts
add_custom_target(Artwork256_Fonts
    DEPENDS "${FONT_OUTPUT}"
    COMMENT "Building fonts"
)
if(TARGET mdlc)
    add_dependencies(Artwork256_Fonts mdlc)
endif()

# Quick build (everything except Geos)
add_custom_target(Artwork256_Quick
    DEPENDS 
        Artwork256_Media 
        Artwork256_Bitmaps 
        Artwork256_MDLs 
        Artwork256_Animations 
        Artwork256_Fonts
    COMMENT "Building artwork (quick - no geos)"
)

# ============================================================================
# Geo model processing
# ============================================================================

set(GEO_OUTPUTS "")

# Paths to tools
set(CVH_EXE "$<TARGET_FILE:cvh>")
set(QHULL_EXE "$<TARGET_FILE:qhull>")

# Simple geos
add_geo_from_xfile(pointer  pointer  pointertext)
add_geo_from_xfile(cube     cube     cubetext)
add_geo_from_xfile(build    sphere   buildtext)
add_geo_from_xfile(circle   circle   circletext)
add_geo_from_xfile(globe    globe    globetext)
add_geo_from_xfile(globe1   globe1   globe1text)
add_geo_from_xfile(globe2   globe2   globe2text)
add_geo_from_xfile(globe3   globe3   globe3text)
add_geo_from_xfile(globe4   globe4   globe4text)
add_geo_from_xfile(globe5   globe5   globe5text)
add_geo_from_xfile(globe6   globe6   globe6text)
add_geo_from_xfile(globe7   globe7   globe7text)
add_geo_from_xfile(globe8   globe8   globe8text)
add_geo_from_xfile(globe9   globe9   globe9text)
add_geo_from_xfile(globe10  globe10  globe10text)

add_geo_from_xfiles(lens lenstext lens30 lens60 lens90)

# Simple geos target
if(GEO_OUTPUTS)
    add_custom_target(Artwork256_Geos
        DEPENDS ${GEO_OUTPUTS}
        COMMENT "Building simple geo models"
    )
else()
    add_custom_target(Artwork256_Geos
        COMMENT "No simple geo models to build"
    )
endif()

# ============================================================================
# Complex geo processing
# ============================================================================
# Direct X-file loading: the engine's native X-file parser loads .x files
# at runtime via GetNameSpace() fallback, bypassing the legacy D3DRM-dependent
# art pipeline (xmunge/pmesh/mdlc). We only need to:
#   1. Copy .x files (and _static.x for LOD) to the output directory
#   2. Run cvh -flatten to generate collision data (.cvh)

set(LODGEO_OUTPUTS "")

# ----------------------------------------------------------------------------
# Copy .x file(s) and generate .cvh collision hull
# Replaces both MAKEMDLNONE and MAKEMDL pipelines
# ----------------------------------------------------------------------------
function(add_geo_direct NAME)
    set(INPUT_X "${ART256_SRCDIR}/${NAME}.x")
    set(OUTPUT_X "${ARTWORK_DESTDIR}/${NAME}.x")
    set(OUTPUT_CVH "${ARTWORK_DESTDIR}/${NAME}.cvh")

    if(NOT EXISTS "${INPUT_X}")
        message(STATUS "Geo skip: ${NAME} (missing ${NAME}.x)")
        return()
    endif()

    # Collect all copy commands
    set(COPY_CMDS
        COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INPUT_X}" "${OUTPUT_X}")

    set(EXTRA_DEPS "")

    # Copy _static.x if it exists (used as LOD level by engine)
    if(EXISTS "${ART256_SRCDIR}/${NAME}_static.x")
        list(APPEND COPY_CMDS COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${ART256_SRCDIR}/${NAME}_static.x" "${ARTWORK_DESTDIR}/${NAME}_static.x")
        list(APPEND EXTRA_DEPS "${ART256_SRCDIR}/${NAME}_static.x")
    endif()

    add_custom_command(
        OUTPUT "${OUTPUT_X}" "${OUTPUT_CVH}"
        ${COPY_CMDS}
        # Generate convex hull for collision detection
        COMMAND ${CVH_EXE} -flatten ${NAME}
        # Cleanup temp files
        COMMAND ${CMAKE_COMMAND} -E rm -f
            ${NAME}.pl ${NAME}.qh
        DEPENDS cvh qhull "${INPUT_X}" ${EXTRA_DEPS} "${ARTWORK_DESTDIR}/.created"
        WORKING_DIRECTORY "${ARTWORK_DESTDIR}"
        COMMENT "Copying geo ${NAME}.x + generating collision hull"
        VERBATIM
    )
    list(APPEND LODGEO_OUTPUTS "${OUTPUT_X}" "${OUTPUT_CVH}")
    set(LODGEO_OUTPUTS "${LODGEO_OUTPUTS}" PARENT_SCOPE)
endfunction()

# ---- Geos with LOD (formerly MAKEMDL, now direct .x copy) ----

# templatess (static + static LOD)
add_geo_direct(acs02)
add_geo_direct(acs05)
add_geo_direct(acs08)
add_geo_direct(cap05)
add_geo_direct(cap500)
add_geo_direct(cap501)
add_geo_direct(cap502)
add_geo_direct(cap503)
add_geo_direct(cap504)
add_geo_direct(ss01)
add_geo_direct(ss06)
add_geo_direct(ss18)
add_geo_direct(ss19a)
add_geo_direct(ss21a)
add_geo_direct(ss22)
add_geo_direct(ss23)
add_geo_direct(ss24a)
add_geo_direct(ss27)
add_geo_direct(ss28)
add_geo_direct(ss90)
add_geo_direct(ss92)
add_geo_direct(ss93)
add_geo_direct(ss94)
add_geo_direct(ss95)
add_geo_direct(ss96)
add_geo_direct(ss97)
add_geo_direct(ss98)
add_geo_direct(ss99)
add_geo_direct(ss100)
add_geo_direct(ss101)
add_geo_direct(ss102)
add_geo_direct(ss103)
add_geo_direct(ss104)
add_geo_direct(ss105)
add_geo_direct(ss106)
add_geo_direct(ss107)
add_geo_direct(ss300)
add_geo_direct(ss301)
add_geo_direct(ss302)
add_geo_direct(ss303)
add_geo_direct(ss304)
add_geo_direct(ss305)
add_geo_direct(ss306)
add_geo_direct(ss307)
add_geo_direct(utl20)

# formerly template (full LOD)
add_geo_direct(acs19)
add_geo_direct(bom01a)
add_geo_direct(bom01b)
add_geo_direct(bom03)
add_geo_direct(bom04)
add_geo_direct(bom05)
add_geo_direct(bom05b)
add_geo_direct(bom07)
add_geo_direct(bom07b)
add_geo_direct(bom20)
add_geo_direct(bom30)
add_geo_direct(cap01)
add_geo_direct(cap02a)
add_geo_direct(cap03)
add_geo_direct(cap04)
add_geo_direct(cap06a)
add_geo_direct(cap07)
add_geo_direct(cap08)
add_geo_direct(cap09)
add_geo_direct(cap20)
add_geo_direct(cap21)
add_geo_direct(cap100)
add_geo_direct(cap101)
add_geo_direct(cap102)
add_geo_direct(cap103)
add_geo_direct(cap300)
add_geo_direct(cap301)
add_geo_direct(cap302)
add_geo_direct(cap303)
add_geo_direct(fig01)
add_geo_direct(fig07)
add_geo_direct(fig08)
add_geo_direct(fig09)
add_geo_direct(fig11)
add_geo_direct(fig13)
add_geo_direct(fig15)
add_geo_direct(fig16)
add_geo_direct(fig17)
add_geo_direct(fig20)
add_geo_direct(fig21)
add_geo_direct(fig22)
add_geo_direct(fig23)
add_geo_direct(fig24)
add_geo_direct(fig25)
add_geo_direct(fig30)
add_geo_direct(fig31)
add_geo_direct(fig32)
add_geo_direct(fig33)
add_geo_direct(fig34)
add_geo_direct(mis12)
add_geo_direct(utl01b)
add_geo_direct(utl02)
add_geo_direct(utl04)
add_geo_direct(utl06)
add_geo_direct(utl07)
add_geo_direct(utl17a)
add_geo_direct(utl18a)
add_geo_direct(utl27a)
add_geo_direct(utl27b)
add_geo_direct(utl28a)
add_geo_direct(utl94)
add_geo_direct(utl95)
add_geo_direct(utl103)
add_geo_direct(utl104)
add_geo_direct(utl105)
add_geo_direct(utl200)
add_geo_direct(utl201)
add_geo_direct(utl202)
add_geo_direct(utl203)
add_geo_direct(utl204)
add_geo_direct(utl205)
add_geo_direct(fig02ops1)
add_geo_direct(fig05ops1)
add_geo_direct(fig07ops1)
add_geo_direct(fig11ops1)
add_geo_direct(utl92a)

# formerly templatelow (LOD with low-poly fallback)
add_geo_direct(bgrnd03)
add_geo_direct(bgrnd05)
add_geo_direct(bgrnd50)
add_geo_direct(bgrnd51)
add_geo_direct(bgrnd52)
add_geo_direct(bgrnd53)
add_geo_direct(bgrnd54)
add_geo_direct(bgrnd55)
add_geo_direct(bgrnd56)
add_geo_direct(bgrnd57)
add_geo_direct(fig02)
add_geo_direct(fig03)
add_geo_direct(fig04)
add_geo_direct(fig05)
add_geo_direct(fig12)
add_geo_direct(utl19)

# formerly templatenone (with LOD pipeline)
add_geo_direct(fig02pit)

# ---- Geos without LOD (formerly MAKEMDLNONE) ----

add_geo_direct(artifact)
add_geo_direct(aleph_sphere)
add_geo_direct(belters_flagplat)
add_geo_direct(biosplat)
add_geo_direct(flag)
add_geo_direct(giga_flagplat)
add_geo_direct(ic_flagplat)
add_geo_direct(rix_flagplat)
add_geo_direct(acs14)
add_geo_direct(utl22)
add_geo_direct(utl93b)
add_geo_direct(utl91)
add_geo_direct(utl90)
add_geo_direct(utl74)
add_geo_direct(utl666)
add_geo_direct(acs01)
add_geo_direct(acs04)
add_geo_direct(acs29)
add_geo_direct(acs30)
add_geo_direct(acs34)
add_geo_direct(acs36)
add_geo_direct(acs38)
add_geo_direct(acs39)
add_geo_direct(acs40)
add_geo_direct(acs41)
add_geo_direct(acs42)
add_geo_direct(acs46)
add_geo_direct(acs48)
add_geo_direct(acs56)
add_geo_direct(acs57)
add_geo_direct(acs63)
add_geo_direct(acs64)
add_geo_direct(debris)
add_geo_direct(mis01)
add_geo_direct(mis02)
add_geo_direct(mis03)
add_geo_direct(mis05)
add_geo_direct(mis06)
add_geo_direct(mis07)
add_geo_direct(mis08)
add_geo_direct(mis09)
add_geo_direct(mis10)
add_geo_direct(mis11)
add_geo_direct(mis13)
add_geo_direct(mis14)
add_geo_direct(muzzle)
add_geo_direct(ops1)
add_geo_direct(ops2)
add_geo_direct(ss02)
add_geo_direct(ss04)
add_geo_direct(ss05)
add_geo_direct(ss08)
add_geo_direct(ss20)
add_geo_direct(utl01)
add_geo_direct(utl05)
add_geo_direct(utl10)
add_geo_direct(utl11)
add_geo_direct(utl14a)
add_geo_direct(utl23)
add_geo_direct(utl23f)
add_geo_direct(utl24)
add_geo_direct(utl25)
add_geo_direct(utl99)
add_geo_direct(utl100)
add_geo_direct(utl101)
add_geo_direct(utl102)
add_geo_direct(wep01)
add_geo_direct(wep02)
add_geo_direct(wep03)
add_geo_direct(wep04)
add_geo_direct(wep05)
add_geo_direct(wep06)
add_geo_direct(wep07)
add_geo_direct(wep08)
add_geo_direct(wep09)
add_geo_direct(wep10)
add_geo_direct(wep11)
add_geo_direct(wep12)
add_geo_direct(wep13)
add_geo_direct(wep16)
add_geo_direct(wep17)
add_geo_direct(wep18)
add_geo_direct(wep19)
add_geo_direct(wep90)
add_geo_direct(wep91)
add_geo_direct(wep92)

# Geo models target
if(LODGEO_OUTPUTS)
    add_custom_target(Artwork256_LODGeos
        DEPENDS ${LODGEO_OUTPUTS}
        COMMENT "Copying geo X files and generating collision hulls"
    )
else()
    add_custom_target(Artwork256_LODGeos
        COMMENT "No geo models to build"
    )
endif()

# ============================================================================
# Full build target
# ============================================================================
add_custom_target(Artwork256
    DEPENDS Artwork256_Quick Artwork256_Geos Artwork256_LODGeos
    COMMENT "Building all 256 artwork"
)

set_property(TARGET Artwork256_Bitmaps PROPERTY FOLDER "Assets/Artwork/256")
set_property(TARGET Artwork256_MDLs PROPERTY FOLDER "Assets/Artwork/256")
set_property(TARGET Artwork256_Media PROPERTY FOLDER "Assets/Artwork/256")
set_property(TARGET Artwork256_Animations PROPERTY FOLDER "Assets/Artwork/256")
set_property(TARGET Artwork256_Fonts PROPERTY FOLDER "Assets/Artwork/256")
set_property(TARGET Artwork256_Quick PROPERTY FOLDER "Assets/Artwork/256")
set_property(TARGET Artwork256_Geos PROPERTY FOLDER "Assets/Artwork/256")
set_property(TARGET Artwork256_LODGeos PROPERTY FOLDER "Assets/Artwork/256")
set_property(TARGET Artwork256 PROPERTY FOLDER "Assets/Artwork/256")

# ============================================================================
# Status messages
# ============================================================================
list(LENGTH BITMAP_OUTPUTS BITMAP_COUNT)
list(LENGTH MDL_OUTPUTS MDL_COUNT)
list(LENGTH GEO_OUTPUTS SIMPLE_GEO_COUNT)
list(LENGTH LODGEO_OUTPUTS LODGEO_COUNT)
message(STATUS "Artwork/256: ${BITMAP_COUNT} bitmaps, ${MDL_COUNT} MDLs, ${MEDIA_COUNT} media, ${SIMPLE_GEO_COUNT} simple geos, ${LODGEO_COUNT} LOD geos")
