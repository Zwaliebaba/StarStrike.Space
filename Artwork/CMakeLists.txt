# Artwork - Game Asset Pipeline
# CMake build configuration
#
# This creates custom targets for processing game artwork assets.
# Geo models (.x files) are loaded directly by the engine at runtime.
# Only cvh/qhull are needed at build time for collision hull generation.

# Output directory for artwork
set(ARTWORK_OUTPUT_DIR "${CMAKE_BINARY_DIR}/bin/$<CONFIG>/artwork")

# Create output directory at build time
add_custom_command(
    OUTPUT "${ARTWORK_OUTPUT_DIR}/.created"
    COMMAND ${CMAKE_COMMAND} -E make_directory "${ARTWORK_OUTPUT_DIR}"
    COMMAND ${CMAKE_COMMAND} -E touch "${ARTWORK_OUTPUT_DIR}/.created"
    COMMENT "Creating artwork output directory"
)

add_custom_target(ArtworkOutputDir
    DEPENDS "${ARTWORK_OUTPUT_DIR}/.created"
)
set_property(TARGET ArtworkOutputDir PROPERTY FOLDER "Assets/Artwork")

# ============================================================================
# Subdirectories
# ============================================================================

# 256 directory contains the main artwork pipeline
add_subdirectory(256)

# ============================================================================
# Copy IGC files from root artwork directory
# ============================================================================
add_custom_target(ArtworkRootCopy ALL
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_CURRENT_SOURCE_DIR}/team2.igc"
        "${CMAKE_CURRENT_SOURCE_DIR}/team4.igc"
        "${ARTWORK_OUTPUT_DIR}/"
    DEPENDS ArtworkOutputDir
    COMMENT "Copying root artwork files"
    VERBATIM
)
set_property(TARGET ArtworkRootCopy PROPERTY FOLDER "Assets/Artwork")

# ============================================================================
# Main Artwork target (aggregates all artwork builds)
# ============================================================================
add_custom_target(Artwork
    DEPENDS ArtworkRootCopy Artwork256
    COMMENT "Building all artwork assets"
)
set_property(TARGET Artwork PROPERTY FOLDER "Assets/Artwork")

# Note: The full artwork pipeline includes:
# - Bitmap conversion (BMP -> MDL via mdlc -convert)
# - MDL file copying
# - Animation compression (mdlc -compressanim)  
# - Media file copying (wav, rtf, avi, igc, mml)
# - Font processing
# - Simple geo model processing (X file -> MDL via mdlc -optimize)
# - LOD geo model processing (xmunge + pmesh + cvh pipeline)
#   Requires -DBUILD_XMUNGE=ON with d3drm.lib available
