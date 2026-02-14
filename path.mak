###################################################################
#
# Path
#
# NOTE: This build now uses system-installed Visual Studio.
# Run from a Visual Studio Developer Command Prompt, or run:
#   vcvarsall.bat x86
# before building.
#
# DEPRECATED: This nmake build system is maintained for legacy
# compatibility. New development should use CMake.
#
###################################################################

OSPATHS=$(SYSTEMROOT)\system32;$(WINDIR)
OSCMDSHELL=cmd

# Use system PATH which should include VS tools after running vcvarsall.bat
# Add local tools directories
PATH=$(PATH);$(FEDROOT)\src\setup;$(FEDROOT)\src\tools\build
