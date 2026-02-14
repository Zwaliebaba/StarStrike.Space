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
set(ARTWORK_DESTDIR "${CMAKE_SOURCE_DIR}/objs/artwork")

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

# Full build target
add_custom_target(Artwork256
    DEPENDS Artwork256_Quick
    COMMENT "Building all 256 artwork"
)

# ============================================================================
# Status messages
# ============================================================================
list(LENGTH BITMAP_OUTPUTS BITMAP_COUNT)
list(LENGTH MDL_OUTPUTS MDL_COUNT)
list(LENGTH MEDIA_OUTPUTS MEDIA_COUNT)
message(STATUS "Artwork/256: ${BITMAP_COUNT} bitmaps, ${MDL_COUNT} MDLs, ${MEDIA_COUNT} media files")
