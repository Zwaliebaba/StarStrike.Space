# Artwork - Game Asset Pipeline
# CMake build configuration
#
# This creates custom targets for processing game artwork assets.
# The artwork build requires mdlc to be built first.

# Output directory for artwork
set(ARTWORK_OUTPUT_DIR "${CMAKE_SOURCE_DIR}/objs/artwork")

# Create output directory at configure time
file(MAKE_DIRECTORY "${ARTWORK_OUTPUT_DIR}")

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
#
# Geo model processing (ship directory) is not yet migrated.
# For geo models, use the original nmake build:
#   cd Artwork/ship && nmake
