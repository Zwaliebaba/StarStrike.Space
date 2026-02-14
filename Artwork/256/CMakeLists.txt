# Artwork/256 - Game Artwork Asset Build
# CMake build configuration
#
# This replicates the nmake artwork build using CMake custom commands.
# - Converts BMP files to MDL using mdlc -convert
# - Copies MDL source files to output
# - Compresses animation MDLs using mdlc -compressanim
# - Copies media files (wav, rtf, avi, igc, mml)
#
# NOTE: Bitmap conversion requires mdlc which uses DirectDraw for image processing.
# This may fail in automated build environments without a graphics context.
# Set ALLEGIANCE_BUILD_BITMAPS=ON to enable bitmap conversion (requires GUI).
# By default, only MDL copying and media file copying are performed.

# Option to enable/disable bitmap conversion (requires DirectDraw)
option(ALLEGIANCE_BUILD_BITMAPS "Build bitmap MDLs using mdlc (requires DirectDraw)" OFF)

# Output directory
set(ARTWORK_DESTDIR "${ARTWORK_OUTPUT_DIR}")

# Path to mdlc (generator expression for build config)
set(MDLC_EXE "$<TARGET_FILE:mdlc>")

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
            DEPENDS mdlc "${INPUT_BMP}"
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

# Create output directory target
add_custom_command(
    OUTPUT "${ARTWORK_DESTDIR}/.created"
    COMMAND ${CMAKE_COMMAND} -E make_directory "${ARTWORK_DESTDIR}"
    COMMAND ${CMAKE_COMMAND} -E touch "${ARTWORK_DESTDIR}/.created"
    COMMENT "Creating artwork output directory"
)

# Copy media files target
set(MEDIA_OUTPUTS "")
foreach(MEDIA_FILE ${MEDIA_FILES})
    get_filename_component(MEDIA_FILENAME "${MEDIA_FILE}" NAME)
    set(OUTPUT_FILE "${ARTWORK_DESTDIR}/${MEDIA_FILENAME}")
    add_custom_command(
        OUTPUT "${OUTPUT_FILE}"
        COMMAND ${CMAKE_COMMAND} -E copy_if_different "${MEDIA_FILE}" "${OUTPUT_FILE}"
        DEPENDS "${MEDIA_FILE}" "${ARTWORK_DESTDIR}/.created"
        COMMENT "Copying ${MEDIA_FILENAME}"
        VERBATIM
    )
    list(APPEND MEDIA_OUTPUTS "${OUTPUT_FILE}")
endforeach()

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
            DEPENDS mdlc "${INPUT_MDL}"
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
        DEPENDS mdlc "${ART256_SRCDIR}/fontsource.mdl" "${ARTWORK_DESTDIR}/.created"
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
set(XMUNGE_EXE "$<TARGET_FILE:xmunge>")
set(CVH_EXE "$<TARGET_FILE:cvh>")
set(PMESH_DIR "${CMAKE_SOURCE_DIR}/Artwork/tools/pmesh.dx6")
set(TOOLS_DIR "${CMAKE_SOURCE_DIR}/Artwork/tools")
set(GEN_SOURCE_MDL "${TOOLS_DIR}/gen_source_mdl.cmake")

# ============================================================================
# Simple geos: X file + texture MDL -> mdlc -optimize (no xmunge needed)
# ============================================================================

function(add_geo_from_xfile NAME XFILE TEXTMDL)
    set(INPUT_X "${ART256_SRCDIR}/${XFILE}.x")
    set(INPUT_TEXTMDL "${ART256_SRCDIR}/${TEXTMDL}.mdl")
    set(OUTPUT_MDL "${ARTWORK_DESTDIR}/${NAME}.mdl")
    set(COPIED_X "${ARTWORK_DESTDIR}/${XFILE}.x")
    set(COPIED_TEXTMDL "${ARTWORK_DESTDIR}/${TEXTMDL}.mdl")

    if(EXISTS "${INPUT_X}" AND EXISTS "${INPUT_TEXTMDL}")
        add_custom_command(
            OUTPUT "${COPIED_X}"
            COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INPUT_X}" "${COPIED_X}"
            DEPENDS "${INPUT_X}" "${ARTWORK_DESTDIR}/.created"
            COMMENT "Copying ${XFILE}.x"
            VERBATIM
        )
        add_custom_command(
            OUTPUT "${COPIED_TEXTMDL}"
            COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INPUT_TEXTMDL}" "${COPIED_TEXTMDL}"
            DEPENDS "${INPUT_TEXTMDL}" "${ARTWORK_DESTDIR}/.created"
            COMMENT "Copying ${TEXTMDL}.mdl"
            VERBATIM
        )
        add_custom_command(
            OUTPUT "${OUTPUT_MDL}"
            COMMAND ${MDLC_EXE} -optimize ${TEXTMDL} ${NAME}
            DEPENDS mdlc "${COPIED_X}" "${COPIED_TEXTMDL}"
            WORKING_DIRECTORY "${ARTWORK_DESTDIR}"
            COMMENT "Building geo ${NAME}.mdl from ${XFILE}.x"
            VERBATIM
        )
        list(APPEND GEO_OUTPUTS "${OUTPUT_MDL}")
        set(GEO_OUTPUTS "${GEO_OUTPUTS}" PARENT_SCOPE)
    else()
        message(STATUS "Geo skip: ${NAME} (missing ${XFILE}.x or ${TEXTMDL}.mdl)")
    endif()
endfunction()

function(add_geo_from_xfiles NAME TEXTMDL)
    set(INPUT_TEXTMDL "${ART256_SRCDIR}/${TEXTMDL}.mdl")
    set(OUTPUT_MDL "${ARTWORK_DESTDIR}/${NAME}.mdl")
    set(COPIED_TEXTMDL "${ARTWORK_DESTDIR}/${TEXTMDL}.mdl")
    set(COPY_DEPS "")

    if(NOT EXISTS "${INPUT_TEXTMDL}")
        message(STATUS "Geo skip: ${NAME} (missing ${TEXTMDL}.mdl)")
        return()
    endif()

    add_custom_command(
        OUTPUT "${COPIED_TEXTMDL}"
        COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INPUT_TEXTMDL}" "${COPIED_TEXTMDL}"
        DEPENDS "${INPUT_TEXTMDL}" "${ARTWORK_DESTDIR}/.created"
        COMMENT "Copying ${TEXTMDL}.mdl"
        VERBATIM
    )
    list(APPEND COPY_DEPS "${COPIED_TEXTMDL}")

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

    add_custom_command(
        OUTPUT "${OUTPUT_MDL}"
        COMMAND ${MDLC_EXE} ${TEXTMDL} ${NAME}.mdl
        DEPENDS mdlc ${COPY_DEPS}
        WORKING_DIRECTORY "${ARTWORK_DESTDIR}"
        COMMENT "Building geo ${NAME}.mdl"
        VERBATIM
    )
    list(APPEND GEO_OUTPUTS "${OUTPUT_MDL}")
    set(GEO_OUTPUTS "${GEO_OUTPUTS}" PARENT_SCOPE)
endfunction()

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
# Complex geo processing (requires xmunge + cvh + pmesh)
# ============================================================================
# MAKEMDLNONE pipeline: xmunge -flatten, template gen, mdlc -optimize, cvh -flatten
# MAKEMDL pipeline:     full LOD with xmunge, pmesh, cvh

set(LODGEO_OUTPUTS "")

if(TARGET xmunge)

# ----------------------------------------------------------------------------
# MAKEMDLNONE: Geos without LOD
# Pipeline: copy .x -> xmunge -flatten -> gen source MDL -> mdlc -optimize -> cvh -flatten
# ----------------------------------------------------------------------------
function(add_geo_nolod NAME FRAME)
    set(INPUT_X "${ART256_SRCDIR}/${NAME}.x")
    set(OUTPUT_MDL "${ARTWORK_DESTDIR}/${NAME}.mdl")
    set(TEMPLATE "${TOOLS_DIR}/templatenone.mdl")

    if(NOT EXISTS "${INPUT_X}")
        message(STATUS "Geo skip (nolod): ${NAME} (missing ${NAME}.x)")
        return()
    endif()

    add_custom_command(
        OUTPUT "${OUTPUT_MDL}"
        # Copy X file
        COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INPUT_X}" "${ARTWORK_DESTDIR}/${NAME}.x"
        # Flatten
        COMMAND ${XMUNGE_EXE} -flatten ${FRAME} ${NAME}.x ${NAME}flat.x
        # Generate source MDL from template
        COMMAND ${CMAKE_COMMAND}
            -DTEMPLATE=${TEMPLATE}
            -DNAME=${NAME} -DFRAME=${FRAME}
            -DOUTPUT=${NAME}source.mdl
            -P "${GEN_SOURCE_MDL}"
        # Optimize
        COMMAND ${MDLC_EXE} -optimize ${NAME}source ${NAME}
        # Convex hull
        COMMAND ${CVH_EXE} -flatten ${NAME}
        # Cleanup temp files
        COMMAND ${CMAKE_COMMAND} -E rm -f
            ${NAME}source.mdl ${NAME}flat.x
            ${NAME}.pl ${NAME}.qh
        DEPENDS xmunge cvh mdlc "${INPUT_X}" "${ARTWORK_DESTDIR}/.created"
        WORKING_DIRECTORY "${ARTWORK_DESTDIR}"
        COMMENT "Building geo ${NAME}.mdl (no LOD)"
        VERBATIM
    )
    list(APPEND LODGEO_OUTPUTS "${OUTPUT_MDL}")
    set(LODGEO_OUTPUTS "${LODGEO_OUTPUTS}" PARENT_SCOPE)
endfunction()

# ----------------------------------------------------------------------------
# MAKEMDL: Geos with LOD
# Pipeline: copy files -> xmunge -flatten -> pmesh convpm -> xmunge -reduce ->
#           gen source MDL -> mdlc -optimize -> xmunge -extract -> cvh
# ----------------------------------------------------------------------------
function(add_geo_lod NAME TEMPLATE_NAME FRAME)
    set(INPUT_X "${ART256_SRCDIR}/${NAME}.x")
    set(OUTPUT_MDL "${ARTWORK_DESTDIR}/${NAME}.mdl")
    set(TEMPLATE "${TOOLS_DIR}/${TEMPLATE_NAME}.mdl")

    if(NOT EXISTS "${INPUT_X}")
        message(STATUS "Geo skip (lod): ${NAME} (missing ${NAME}.x)")
        return()
    endif()

    # Determine if _bound.x exists
    set(HAS_BOUND FALSE)
    if(EXISTS "${ART256_SRCDIR}/${NAME}_bound.x")
        set(HAS_BOUND TRUE)
    endif()

    # Determine if _static.x exists separately
    set(HAS_STATIC FALSE)
    if(EXISTS "${ART256_SRCDIR}/${NAME}_static.x")
        set(HAS_STATIC TRUE)
    endif()

    # Build the copy commands list
    set(COPY_CMDS "")
    # Always copy main X file
    list(APPEND COPY_CMDS COMMAND ${CMAKE_COMMAND} -E copy_if_different "${INPUT_X}" "${ARTWORK_DESTDIR}/${NAME}.x")
    # Copy or create _static.x
    if(HAS_STATIC)
        list(APPEND COPY_CMDS COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${ART256_SRCDIR}/${NAME}_static.x" "${ARTWORK_DESTDIR}/${NAME}_static.x")
    else()
        list(APPEND COPY_CMDS COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${INPUT_X}" "${ARTWORK_DESTDIR}/${NAME}_static.x")
    endif()
    # Copy -low.x
    if(EXISTS "${ART256_SRCDIR}/${NAME}-low.x")
        list(APPEND COPY_CMDS COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${ART256_SRCDIR}/${NAME}-low.x" "${ARTWORK_DESTDIR}/${NAME}-low.x")
    endif()
    # Copy _bound.x if it exists
    if(HAS_BOUND)
        list(APPEND COPY_CMDS COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${ART256_SRCDIR}/${NAME}_bound.x" "${ARTWORK_DESTDIR}/${NAME}_bound.x")
    endif()

    # CVH command depends on whether _bound.x exists
    if(HAS_BOUND)
        set(CVH_CMDS
            COMMAND ${XMUNGE_EXE} -bound ${FRAME} ${NAME}_bound.x ${NAME}
            COMMAND ${CVH_EXE} -bound ${NAME}
        )
    else()
        set(CVH_CMDS
            COMMAND ${CVH_EXE} -extract ${NAME}
        )
    endif()

    add_custom_command(
        OUTPUT "${OUTPUT_MDL}"
        # Copy source files
        ${COPY_CMDS}
        # Flatten static mesh
        COMMAND ${XMUNGE_EXE} -flatten ${FRAME} ${NAME}_static.x ${NAME}flat.x
        # Progressive mesh: xtobm -> fmesh -> meshsimp -> rlines -> fprog -> pmtopmx -> pmxtox
        COMMAND "${PMESH_DIR}/xtobm.exe" ${NAME}flat.x
        COMMAND "${PMESH_DIR}/fmesh.exe" ${NAME}flat.m
            -gmerge -genus -triangulate -genus -fixvertices -fixfaces
            -rmcomp 0 -renormalizenor -genus -nice > ${NAME}flat.nice.m
        COMMAND "${PMESH_DIR}/meshsimp.exe" ${NAME}flat.nice.m
            -prog ${NAME}flat.prog -simplify > ${NAME}flat.base.m
        COMMAND "${PMESH_DIR}/rlines.exe" ${NAME}flat.prog > ${NAME}flat.rprog
        COMMAND "${PMESH_DIR}/fprog.exe"
            -fbase ${NAME}flat.base.m -fprog ${NAME}flat.rprog -pm > ${NAME}flat.pm
        COMMAND "${PMESH_DIR}/pmtopmx.exe" ${NAME}flat.pm
        COMMAND "${PMESH_DIR}/pmxtox.exe" ${NAME}flat.pmx
        # Reduce mesh for LOD levels
        COMMAND ${XMUNGE_EXE} -reduce 0.5  ${NAME}flat_pm.x ${NAME}_a.x
        COMMAND ${XMUNGE_EXE} -reduce 0.01 ${NAME}flat_pm.x ${NAME}_b.x
        # Generate source MDL from template
        COMMAND ${CMAKE_COMMAND}
            -DTEMPLATE=${TEMPLATE}
            -DNAME=${NAME} -DFRAME=${FRAME}
            -DOUTPUT=${NAME}source.mdl
            -P "${GEN_SOURCE_MDL}"
        # Optimize
        COMMAND ${MDLC_EXE} -optimize ${NAME}source ${NAME}
        # Extract weapon frames
        COMMAND ${XMUNGE_EXE} -extract ${FRAME} ${NAME}.x ${NAME}
        # Convex hull
        ${CVH_CMDS}
        # Cleanup temp files
        COMMAND ${CMAKE_COMMAND} -E rm -f
            ${NAME}source.mdl ${NAME}_static.x ${NAME}.x ${NAME}-low.x
            ${NAME}flat.x ${NAME}flat_pm.x ${NAME}_a.x ${NAME}_b.x ${NAME}_c.x
            ${NAME}.pl ${NAME}_bound.pl ${NAME}.qh ${NAME}_bound.qh ${NAME}.dat
            ${NAME}flat.m ${NAME}flat.nice.m ${NAME}flat.base.m
            ${NAME}flat.prog ${NAME}flat.rprog ${NAME}flat.pm ${NAME}flat.pmx
        DEPENDS xmunge cvh mdlc "${INPUT_X}" "${ARTWORK_DESTDIR}/.created"
        WORKING_DIRECTORY "${ARTWORK_DESTDIR}"
        COMMENT "Building geo ${NAME}.mdl (LOD, ${TEMPLATE_NAME})"
        VERBATIM
    )
    list(APPEND LODGEO_OUTPUTS "${OUTPUT_MDL}")
    set(LODGEO_OUTPUTS "${LODGEO_OUTPUTS}" PARENT_SCOPE)
endfunction()

# ---- Geos with LOD (MAKEMDL) ----

# templatess (static + static LOD)
add_geo_lod(acs02    templatess 1)
add_geo_lod(acs05    templatess 1)
add_geo_lod(acs08    templatess 1)
add_geo_lod(cap05    templatess 1)
add_geo_lod(cap500   templatess 1)
add_geo_lod(cap501   templatess 1)
add_geo_lod(cap502   templatess 1)
add_geo_lod(cap503   templatess 1)
add_geo_lod(cap504   templatess 1)
add_geo_lod(ss01     templatess 1)
add_geo_lod(ss06     templatess 1)
add_geo_lod(ss18     templatess 1)
add_geo_lod(ss19a    templatess 1)
add_geo_lod(ss21a    templatess 1)
add_geo_lod(ss22     templatess 1)
add_geo_lod(ss23     templatess 1)
add_geo_lod(ss24a    templatess 1)
add_geo_lod(ss27     templatess 1)
add_geo_lod(ss28     templatess 1)
add_geo_lod(ss90     templatess 1)
add_geo_lod(ss92     templatess 1)
add_geo_lod(ss93     templatess 1)
add_geo_lod(ss94     templatess 1)
add_geo_lod(ss95     templatess 1)
add_geo_lod(ss96     templatess 1)
add_geo_lod(ss97     templatess 1)
add_geo_lod(ss98     templatess 1)
add_geo_lod(ss99     templatess 1)
add_geo_lod(ss100    templatess 1)
add_geo_lod(ss101    templatess 1)
add_geo_lod(ss102    templatess 1)
add_geo_lod(ss103    templatess 1)
add_geo_lod(ss104    templatess 1)
add_geo_lod(ss105    templatess 1)
add_geo_lod(ss106    templatess 1)
add_geo_lod(ss107    templatess 1)
add_geo_lod(ss300    templatess 1)
add_geo_lod(ss301    templatess 1)
add_geo_lod(ss302    templatess 1)
add_geo_lod(ss303    templatess 1)
add_geo_lod(ss304    templatess 1)
add_geo_lod(ss305    templatess 1)
add_geo_lod(ss306    templatess 1)
add_geo_lod(ss307    templatess 1)
add_geo_lod(utl20    templatess 1)

# template (full LOD: static + reduced a + reduced b)
add_geo_lod(acs19    template   1)
add_geo_lod(bom01a   template   44)
add_geo_lod(bom01b   template   32)
add_geo_lod(bom03    template   20)
add_geo_lod(bom04    template   60)
add_geo_lod(bom05    template   95)
add_geo_lod(bom05b   template   95)
add_geo_lod(bom07    template   60)
add_geo_lod(bom07b   template   60)
add_geo_lod(bom20    template   1)
add_geo_lod(bom30    template   1)
add_geo_lod(cap01    template   60)
add_geo_lod(cap02a   template   1)
add_geo_lod(cap03    template   1)
add_geo_lod(cap04    template   1)
add_geo_lod(cap06a   template   1)
add_geo_lod(cap07    template   1)
add_geo_lod(cap08    template   1)
add_geo_lod(cap09    template   1)
add_geo_lod(cap20    template   1)
add_geo_lod(cap21    template   1)
add_geo_lod(cap100   template   1)
add_geo_lod(cap101   template   1)
add_geo_lod(cap102   template   1)
add_geo_lod(cap103   template   1)
add_geo_lod(cap300   template   1)
add_geo_lod(cap301   template   1)
add_geo_lod(cap302   template   1)
add_geo_lod(cap303   template   1)
add_geo_lod(fig01    template   40)
add_geo_lod(fig07    template   58)
add_geo_lod(fig08    template   59)
add_geo_lod(fig09    template   59)
add_geo_lod(fig11    template   59)
add_geo_lod(fig13    template   60)
add_geo_lod(fig15    template   60)
add_geo_lod(fig16    template   60)
add_geo_lod(fig17    template   60)
add_geo_lod(fig20    template   1)
add_geo_lod(fig21    template   1)
add_geo_lod(fig22    template   1)
add_geo_lod(fig23    template   1)
add_geo_lod(fig24    template   1)
add_geo_lod(fig25    template   1)
add_geo_lod(fig30    template   1)
add_geo_lod(fig31    template   1)
add_geo_lod(fig32    template   1)
add_geo_lod(fig33    template   1)
add_geo_lod(fig34    template   1)
add_geo_lod(mis12    template   15)
add_geo_lod(utl01b   template   1)
add_geo_lod(utl02    template   1)
add_geo_lod(utl04    template   1)
add_geo_lod(utl06    template   1)
add_geo_lod(utl07    template   1)
add_geo_lod(utl17a   template   1)
add_geo_lod(utl18a   template   1)
add_geo_lod(utl27a   template   49)
add_geo_lod(utl27b   template   49)
add_geo_lod(utl28a   template   1)
add_geo_lod(utl94    template   1)
add_geo_lod(utl95    template   1)
add_geo_lod(utl103   template   1)
add_geo_lod(utl104   template   1)
add_geo_lod(utl105   template   1)
add_geo_lod(utl200   template   1)
add_geo_lod(utl201   template   1)
add_geo_lod(utl202   template   1)
add_geo_lod(utl203   template   1)
add_geo_lod(utl204   template   1)
add_geo_lod(utl205   template   1)
add_geo_lod(fig02ops1 template  1)
add_geo_lod(fig05ops1 template  1)
add_geo_lod(fig07ops1 template  1)
add_geo_lod(fig11ops1 template  1)
add_geo_lod(utl92a   template   1)

# templatelow (LOD with low-poly fallback)
add_geo_lod(bgrnd03  templatelow 1)
add_geo_lod(bgrnd05  templatelow 1)
add_geo_lod(bgrnd50  templatelow 1)
add_geo_lod(bgrnd51  templatelow 1)
add_geo_lod(bgrnd52  templatelow 1)
add_geo_lod(bgrnd53  templatelow 1)
add_geo_lod(bgrnd54  templatelow 1)
add_geo_lod(bgrnd55  templatelow 1)
add_geo_lod(bgrnd56  templatelow 1)
add_geo_lod(bgrnd57  templatelow 1)
add_geo_lod(fig02    templatelow 76)
add_geo_lod(fig03    templatelow 30)
add_geo_lod(fig04    templatelow 57)
add_geo_lod(fig05    templatelow 61)
add_geo_lod(fig12    templatelow 47)
add_geo_lod(utl19    templatelow 1)

# templatenone (with LOD pipeline but no-lod template)
add_geo_lod(fig02pit templatenone 57)

# ---- Geos without LOD (MAKEMDLNONE) ----

add_geo_nolod(artifact          1)
add_geo_nolod(aleph_sphere      1)
add_geo_nolod(belters_flagplat  1)
add_geo_nolod(biosplat          1)
add_geo_nolod(flag              1)
add_geo_nolod(giga_flagplat     1)
add_geo_nolod(ic_flagplat       1)
add_geo_nolod(rix_flagplat      1)
add_geo_nolod(acs14             1)
add_geo_nolod(utl22             1)
add_geo_nolod(utl93b            1)
add_geo_nolod(utl91             1)
add_geo_nolod(utl90             1)
add_geo_nolod(utl74             1)
add_geo_nolod(utl666            1)
add_geo_nolod(acs01             75)
add_geo_nolod(acs04             1)
add_geo_nolod(acs29             1)
add_geo_nolod(acs30             1)
add_geo_nolod(acs34             1)
add_geo_nolod(acs36             1)
add_geo_nolod(acs38             1)
add_geo_nolod(acs39             1)
add_geo_nolod(acs40             1)
add_geo_nolod(acs41             1)
add_geo_nolod(acs42             1)
add_geo_nolod(acs46             1)
add_geo_nolod(acs48             1)
add_geo_nolod(acs56             1)
add_geo_nolod(acs57             1)
add_geo_nolod(acs63             1)
add_geo_nolod(acs64             1)
add_geo_nolod(debris            1)
add_geo_nolod(mis01             1)
add_geo_nolod(mis02             1)
add_geo_nolod(mis03             1)
add_geo_nolod(mis05             1)
add_geo_nolod(mis06             1)
add_geo_nolod(mis07             1)
add_geo_nolod(mis08             1)
add_geo_nolod(mis09             1)
add_geo_nolod(mis10             1)
add_geo_nolod(mis11             1)
add_geo_nolod(mis13             15)
add_geo_nolod(mis14             15)
add_geo_nolod(muzzle            15)
add_geo_nolod(ops1              1)
add_geo_nolod(ops2              1)
add_geo_nolod(ss02              1)
add_geo_nolod(ss04              1)
add_geo_nolod(ss05              1)
add_geo_nolod(ss08              1)
add_geo_nolod(ss20              1)
add_geo_nolod(utl01             1)
add_geo_nolod(utl05             1)
add_geo_nolod(utl10             1)
add_geo_nolod(utl11             1)
add_geo_nolod(utl14a            1)
add_geo_nolod(utl23             1)
add_geo_nolod(utl23f            1)
add_geo_nolod(utl24             1)
add_geo_nolod(utl25             1)
add_geo_nolod(utl99             1)
add_geo_nolod(utl100            1)
add_geo_nolod(utl101            1)
add_geo_nolod(utl102            1)
add_geo_nolod(wep01             1)
add_geo_nolod(wep02             1)
add_geo_nolod(wep03             1)
add_geo_nolod(wep04             1)
add_geo_nolod(wep05             1)
add_geo_nolod(wep06             1)
add_geo_nolod(wep07             1)
add_geo_nolod(wep08             1)
add_geo_nolod(wep09             1)
add_geo_nolod(wep10             1)
add_geo_nolod(wep11             1)
add_geo_nolod(wep12             1)
add_geo_nolod(wep13             1)
add_geo_nolod(wep16             1)
add_geo_nolod(wep17             1)
add_geo_nolod(wep18             1)
add_geo_nolod(wep19             1)
add_geo_nolod(wep90             1)
add_geo_nolod(wep91             1)
add_geo_nolod(wep92             1)

# LOD geos target
if(LODGEO_OUTPUTS)
    add_custom_target(Artwork256_LODGeos
        DEPENDS ${LODGEO_OUTPUTS}
        COMMENT "Building LOD geo models"
    )
else()
    add_custom_target(Artwork256_LODGeos
        COMMENT "No LOD geo models to build"
    )
endif()

else()  # xmunge not available
    message(STATUS "LOD geo build DISABLED (requires -DBUILD_XMUNGE=ON with d3drm.lib)")
    add_custom_target(Artwork256_LODGeos
        COMMENT "LOD geo build disabled (requires xmunge)"
    )
endif()  # TARGET xmunge

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
list(LENGTH MEDIA_OUTPUTS MEDIA_COUNT)
list(LENGTH GEO_OUTPUTS SIMPLE_GEO_COUNT)
list(LENGTH LODGEO_OUTPUTS LODGEO_COUNT)
message(STATUS "Artwork/256: ${BITMAP_COUNT} bitmaps, ${MDL_COUNT} MDLs, ${MEDIA_COUNT} media, ${SIMPLE_GEO_COUNT} simple geos, ${LODGEO_COUNT} LOD geos")
