###################################################################
#
# Path
#
# NOTE: This build now uses system-installed Visual Studio.
# Run from a Visual Studio Developer Command Prompt, or run:
#   vcvarsall.bat x86
# before building.
#
###################################################################

!IFDEF WINBOOTDIR

OSPATHS=$(WINBOOTDIR)\system;$(WINBOOTDIR);$(WINBOOTDIR)\Command
OSCMDSHELL=command

!ELSE

OSPATHS=$(SYSTEMROOT)\system32;$(WINDIR)
OSCMDSHELL=cmd

!ENDIF

# Use system PATH which should include VS tools after running vcvarsall.bat
# Add local tools directories
PATH=$(PATH);$(FEDROOT)\src\setup;$(FEDROOT)\src\tools\build
