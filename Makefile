#############################################################################
#
# Makefile for all major Federation Components
#
# DEPRECATED: This nmake build system is maintained for legacy compatibility.
# New development should use CMake. See CMakeLists.txt.
#
#   cmake -B build -G "Visual Studio 18 2026" -A Win32
#   cmake --build build --config Debug
#
# Environment variable Requirements:
#
#    INCLUDE=foo           // can be set to anything, must be set
#    PATH=                 // must have proper nmake on path
#    FEDROOT=<path>        // MUST point to base of fed src enlistment
#
# Environment variable options:
#    ALLEGIANCE_DEV        // Set this variable to anything if you want to use a different registry key root from the installed builds
#
# nmake args:
#
#   Clean        // will delete all files in destination dir
#   Shell        // opens os-specific cmd/command shell (helps to debug build)
#   debug=       // builds a debug build (default)
#   retail=      // builds a retail build
#   training=    // builds a debug build with special testing code for training
#   test=        // retail but with the _DEBUG preprocessor symbol defined
#   VER=         // must have this argument, \\msr\federation\builds\$(VER) is created/needed
#   VERBOSE=     // if you want verbose build mode. (default is non-verbose)
#
#############################################################################

!if defined(retail)
RETAILNMAKEARGS=retail=$(RETAIL)
OBJSDIR=retail
!elseif defined(test)
RETAILNMAKEARGS=test=
OBJSDIR=test
!elseif defined(training)
RETAILNMAKEARGS=training=
OBJSDIR=debug
!else
RETAILNMAKEARGS=
OBJSDIR=debug
!endif

!if defined(VER)
VERNMAKEARGS=VER=$(VER)
!else
VERNMAKEARGS=
!endif

!if defined(VERBOSE)
VERBOSENMAKEARGS=VERBOSE=$(VERBOSE)
!else
VERBOSENMAKEARGS=
!endif

RECURSNMAKEARGS=$(RETAILNMAKEARGS) $(VERNMAKEARGS) $(VERBOSENMAKEARGS)

!if defined(VERBOSE)
NMAKE=nmake
!else
NMAKE=@nmake /NOLOGO /S /C
!endif


#############################################################################
#
# Include system path macros
#
#############################################################################

!include "path.mak"


#############################################################################
#
# All: Build all of the components of one flavor.
#
#############################################################################

All: Client AllGuardApp Server Server32 AllSrvUI32App Lobby Club AutoUpdateApp Test


#############################################################################
#
# Clean: Deletes all of the output of a flavor.
#
#############################################################################

Clean:
    $(FEDROOT)\src\tools\bin32\delnode -q $(FEDROOT)\Objs\$(OBJSDIR)

#############################################################################
#
#                 **** Is this ever used by anyone? ****
#
#############################################################################

Shell:
    $(OSCMDSHELL)


#############################################################################
#
# Full: Clean builds a flavor.
#
#############################################################################

Full: Clean All


#############################################################################
#
# Both: clean builds both flavors
#
#############################################################################

Both:
    $(NMAKE) Clean
    $(NMAKE) Clean retail=
    $(NMAKE)
    $(NMAKE) retail=

TrainingBoth:
    $(NMAKE) Clean training=
    $(NMAKE) Clean retail=
    $(NMAKE) training=
    $(NMAKE) retail=

CleanAllFlavors:
    $(NMAKE) Clean
    $(NMAKE) Clean retail=
    $(NMAKE) Clean test=

AllFlavors:
    $(NMAKE)
    $(NMAKE) retail=
    $(NMAKE) test=
    
ClientAllFlavors:
    $(NMAKE) Client
    $(NMAKE) Client retail=
    $(NMAKE) Client test=





#############################################################################
#
# ZLibrary: a general-purpose windows library
# ZLibrary_Full: cleans all dependencies and builds ZLibrary
#
#############################################################################

ZLibrary:
    @cd zlib
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

ZLibrary_Clean:
    @cd zlib
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

ZLibrary_Full: ZLibrary_Clean ZLibrary


#############################################################################
#
# Utility: Helper stuff
#
#############################################################################

Utility: ZLibrary FedGuids
    @cd _utility
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

Utility_Clean:
    @cd _utility
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

Utility_Full: Utility_Clean Utility


#############################################################################
#
# FedGuids: All Guids used by the product
#
#############################################################################

FedGuids: 
    @cd Guids
#    @echo $(RECURSNMAKEARGS)
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

FedGuids_Clean: 
    @cd Guids
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

FedGuids_Full: FedGuids_Clean FedGuids


#############################################################################
#
# MDLHeaders: Generates c++ header files from MDL source
#
#############################################################################

MDLHeaders: MDLC
    @cd artwork\256
    $(NMAKE) -f mdlheader.mak $(RECURSNMAKEARGS)
    @cd ..\..


#############################################################################
#
# Igc: Internet Game Core
#
#############################################################################

Igc: Utility MDLHeaders
    @cd Igc
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

Igc_Clean:
    @cd Igc
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

Igc_Full: Igc_Clean Igc





#############################################################################
#
# Effect: Engine/effect components library
#
#############################################################################

Effect: Engine
    @cd Effect
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

Effect_Clean:
    @cd Effect
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

Effect_Full: Effect_Clean Effect


#############################################################################
#
# Engine: Engine components library
#
#############################################################################

Engine: ZLibrary FedGuids
    @cd engine
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

Engine_Clean:
    @cd engine
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

Engine_Full: Engine_Clean Engine


#############################################################################
#
# Common: stuff both client and server need
#
#############################################################################

Common: Igc

Common_Clean: Igc_Clean

Common_Full: Common_Clean Common


#############################################################################
#
# Training: builds the offline training library.
#
#############################################################################

Training: Common
    @cd Training
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

Training_Clean:
    @cd Training
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

Training_Full: Training_Clean Training


#############################################################################
#
# Clintlib: builds the shared client library.
#
#############################################################################

Clintlib: Igc FedGuids
    @cd clintlib
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

Clintlib_Clean:
    @cd clintlib
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

Clintlib_Full: Clintlib_Clean Clintlib


#############################################################################
#
# ReloaderAPP: builds the client's Reloader app
#
#############################################################################
Reloader: ClintLib
    @cd Reloader
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

Reloader_Clean:
    @cd Reloader
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

Reloader_Full: Reloader_Clean Reloader


#############################################################################
#
# Client: builds everything but fedsrv and test
#
#############################################################################

Client: Common Effect Clintlib Training SoundEngineLib Reloader Server32
    @cd wintrek
    $(NMAKE) $(COPYCLIENT) $(RECURSNMAKEARGS) 
    @cd ..


#############################################################################
#
# SoundEngineLib: builds the sound engine component
#
#############################################################################

SoundEngineLib: ZLibrary
    @cd SoundEngine
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

SoundEngineLib_Clean:
    @cd SoundEngine
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

SoundEngineLib_Full: SoundEngineLib_Clean SoundEngineLib


#############################################################################
#
# SoundTst: builds soundtest
#
#############################################################################

SoundTst: SoundEngineLib
    @cd soundtest
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

SoundTst_Clean:
    @cd soundtest
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

SoundTst_Full: SoundTst_Clean SoundTst


#############################################################################
#
# AGC: builds the Active Game Core DLL
#
#############################################################################

AGC: TCLib Igc
    @cd AGC
#    $(NMAKE) BuildAndReg $(RECURSNMAKEARGS)
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

AGC_Clean:
    @cd AGC
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

AGC_Full: AGC_Clean AGC


#############################################################################
#
# CliConfigApp: builds the server configuration utility.
#
#############################################################################

CliConfigApp:
    @cd CliConfig
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

CliConfigApp_Clean:
    @cd CliConfig
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

CliConfigApp_Full: CliConfigApp_Clean CliConfigApp


#############################################################################
#
# SrvConfigApp: builds the server configuration utility.
#
#############################################################################

SrvConfigApp: AGC AllSrvExe
    @cd srvconfig
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

SrvConfigApp_Clean:
    @cd srvconfig
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

SrvConfigApp_Full: SrvConfigApp_Clean SrvConfigApp


#############################################################################
#
# SrvConfig32App: builds the server configuration utility.
#
#############################################################################

SrvConfig32App: AGC AllSrv32Exe
    @cd SrvConfig
    $(NMAKE) $(RECURSNMAKEARGS) ALLSRV_STANDALONE=
    @cd ..

SrvConfig32App_Clean:
    @cd SrvConfig
    $(NMAKE) clean $(RECURSNMAKEARGS) ALLSRV_STANDALONE=
    @cd ..

SrvConfigApp32_Full: SrvConfigApp32_Clean SrvConfigApp32


#############################################################################
#
# AutoUpdateApp: builds the AutoUpdate utility.
#
############################################################################
AutoUpdateApp: Clintlib
    @cd AutoUpdate
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

AutoUpdateApp_Clean:
    @cd AutoUpdate
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

AutoUpdateApp_Full: AutoUpdateApp_Clean AutoUpdateApp

#############################################################################
#
# AllSrvUIApp: builds the server configuration utility.
#
#############################################################################

AllSrvUIApp: AGC AllSrvExe
    @cd AllSrvUI
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

AllSrvUIApp_Clean:
    @cd AllSrvUI
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

AllSrvUIApp_Full: AllSrvUIApp_Clean AllSrvUIApp


#############################################################################
#
# AllSrvUI32App: builds the server configuration utility.
#
#############################################################################

AllSrvUI32App: AGC AllSrv32Exe
    @cd AllSrvUI
    $(NMAKE) $(RECURSNMAKEARGS) ALLSRV_STANDALONE=
    @cd ..

AllSrvUI32App_Clean:
    @cd AllSrvUI
    $(NMAKE) clean $(RECURSNMAKEARGS) ALLSRV_STANDALONE=
    @cd ..

AllSrvUIApp32_Full: AllSrvUIApp32_Clean AllSrvUIApp32


#############################################################################
#
# ShareMemLib: builds the shared memory library.
#
#############################################################################

ShareMemLib:
    @cd sharemem
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

ShareMemLib_Clean:
    @cd sharemem
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

ShareMemLib_Full: ShareMemLib_Clean ShareMemLib


#############################################################################
#
# FedPerfDll: builds the performance monitor DLL.
#
#############################################################################

FedPerfDll: ShareMemLib
    @cd fedperf
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

FedPerfDll_Clean:
    @cd fedperf
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

FedPerfDll_Full: FedPerfDll_Clean FedPerfDll


#############################################################################
#
# SentinalExe: builds the server sentinal application.
#
#############################################################################

SentinalExe: ZLibrary Utility IGC
    @cd sentinal
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

SentinalExe_Clean:
    @cd sentinal
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

SentinalExe_Full: SentinalExe_Clean SentinalExe


#############################################################################
#
# AllSrvExe: builds the Allegiance game server application.
#
#############################################################################

AllSrvExe: AGC Common FedPerfDll
    @cd fedsrv
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

AllSrvExe_Clean:
    @cd fedsrv
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

AllSrvExe_Full: AllSrvExe_Clean AllSrvExe


#############################################################################
#
# AllSrv32Exe: builds the Allegiance (stand-alone) game server application.
#
#############################################################################

AllSrv32Exe: AGC Common FedPerfDll
    @cd fedsrv
    $(NMAKE) $(RECURSNMAKEARGS) ALLSRV_STANDALONE=
    @cd ..

AllSrv32Exe_Clean:
    @cd fedsrv
    $(NMAKE) clean $(RECURSNMAKEARGS) ALLSRV_STANDALONE=
    @cd ..

AllSrv32Exe_Full: AllSrv32Exe_Clean AllSrv32Exe


#############################################################################
#
# Server: builds everything but client and test.
#
#############################################################################

Server: SrvConfigApp CliConfigApp SentinalExe AllSrvExe

Server_Clean: AGC Common FedPerfDll SrvConfigApp_Clean CliConfigApp_Clean SentinalExe_Clean

Server_Full: Server_Clean Server


#############################################################################
#
# Server32: builds everything but client and test (for stand-alone server).
#
#############################################################################

Server32: SrvConfig32App AllSrv32Exe

Server32_Clean: AGC Common FedPerfDll SrvConfig32App_Clean

Server32_Full: Server32_Clean Server32


#############################################################################
#
# Lobby: builds Lobby.
#
#############################################################################

Lobby: ShareMemLib Utility 
    @cd Lobby
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

Lobby_Clean:
    @cd Lobby
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

Lobby_Full: Lobby_Clean Lobby


#############################################################################
#
# Club: builds Zone Club server.
#
#############################################################################

Club: ShareMemLib Utility 
    @cd Club
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

Club_Clean:
    @cd Club
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

Club_Full: Club_Clean Club


#############################################################################
#
# MSRGuardApp: builds the MSRGuard crash guard utility.
#
#############################################################################

MSRGuardApp: ZLib TCLib
    @cd MSRGuard
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

MSRGuardApp_Clean:
    @cd MSRGuard
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

MSRGuardApp_Full: MSRGuardApp_Clean MSRGuardApp


#############################################################################
#
# AllGuardApp: builds the AllGuard crash guard utility.
#
#############################################################################

AllGuardApp: MSRGuardApp
    @cd AllGuard
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

AllGuardApp_Clean:
    @cd AllGuard
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

AllGuardApp_Full: AllGuardApp_Clean AllGuardApp


#############################################################################
#
# SymGuard: builds the Crash Guard symbol resoltion component DLL
#
#############################################################################

SymGuard: TCLib
    @cd SymGuard
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

SymGuard_Clean:
    @cd SymGuard
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..

SymGuard_Full: SymGuard_Clean SymGuard


#############################################################################
#
# Art: builds the art
#
#############################################################################

ArtBin: ConvexHull MDLC MDLEdit XMunger

Redbook: 
    @cd artwork\redbook
    -if not exist $(FEDROOT)\Objs\Redbook md $(FEDROOT)\Objs\Redbook
    @xcopy /D /Y tracks.lst $(FEDROOT)\Objs\Redbook
    @attrib -r $(FEDROOT)\Objs\Redbook\*.lst
    @xcopy /D /Y *.wav $(FEDROOT)\Objs\Redbook
    @attrib -r $(FEDROOT)\Objs\Redbook\*.wav
    @cd ..\..

Art: ArtBin Redbook
    @cd artwork\256
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..\..

TrainingArt: ArtBin
    @cd artwork\training
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..\..

SoundPac1: ArtBin
    @cd artwork\soundpac1
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..\..

DevPlayExtras: TrainingArt SoundPac1
    @echo .
    @echo \\\\\\\\\\\\\\\\\\\\\\\\\\
    @echo \\
    @echo \\ Copying extra files
    @echo \\
    @echo \\\\\\\\\\\\\\\\\\\\\\\\\\
    @xcopy /Y /D $(FEDROOT)\Objs\TrainingArt\*.* $(FEDROOT)\Objs\Artwork
    @xcopy /Y /D $(FEDROOT)\Objs\soundpac1\*.* $(FEDROOT)\Objs\Artwork

#############################################################################
#
# Fonts: builds the fonts
#
#############################################################################

Fonts: 
    @cd artwork\256
    $(NMAKE) Fonts $(RECURSNMAKEARGS)
    @cd ..\..




#############################################################################
#
# build mdl art files
#
#############################################################################

artmdl: MDLC
    @cd artwork\256
    $(NMAKE) $(RECURSNMAKEARGS) mdls
    @cd ..\..

#############################################################################
#
# build bmps
#
#############################################################################

artbmp: MDLC
    @cd artwork\256
    $(NMAKE) $(RECURSNMAKEARGS) bmps
    @cd ..\..

#############################################################################
#
# Quick Art: does a quick build of the art
#            i.e. it just copies files
#
#############################################################################

QuickArt: MDLC
    @cd artwork\256
    $(NMAKE) $(RECURSNMAKEARGS) quick
    @cd ..\..

#############################################################################
#
# CleanArt: Deletes all art output files
#
#############################################################################

CleanArt:
    $(FEDROOT)\src\tools\bin32\delnode -q $(FEDROOT)\Objs\Artwork
    $(FEDROOT)\src\tools\bin32\delnode -q $(FEDROOT)\Objs\TrainingArt
    $(FEDROOT)\src\tools\bin32\delnode -q $(FEDROOT)\Objs\SoundPac1
    $(FEDROOT)\src\tools\bin32\delnode -q $(FEDROOT)\Objs\artbuild

#############################################################################
#
# XMunge: builds XMunge
#
#############################################################################

XMunger: Engine
    @cd xmunge
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..


#############################################################################
#
# Patch: builds Patch
#
#############################################################################

Patch: FedGuids ZLibrary
    @cd patch
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..

#############################################################################
#
# cvh: builds cvh
#
#############################################################################

ConvexHull: FedGuids
    @cd cvh
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..


#############################################################################
#
# MDLC: builds MDLC
#
#############################################################################

MDLC: Effect
    @cd mdlc
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..


#############################################################################
#
# MDLEdit: builds MDLEdit
#
#############################################################################

MDLEdit: Effect
    @cd mdledit
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..


#############################################################################
#
# ME: builds me.exe
#
#############################################################################

ME: Engine
    @cd me
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..


#############################################################################
#
# TCLib: builds Test Common library
#
#############################################################################

TCLib: ZLibrary
    @cd test\TCLib
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..\..

TCLib_Clean:
    @cd test\TCLib
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..\..

TCLib_Full: TCLib_Clean TCLib


#############################################################################
#
# PigsLib: builds Pigs COM object client DLL
#
#############################################################################

PigsLib: ClintLib TCLib AGC
    @cd test\PigsLib
#    $(NMAKE) BuildAndReg $(RECURSNMAKEARGS)
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..\..

PigsLib_Clean:
    @cd test\PigsLib
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..\..

PigsLib_Full: PigsLib_Clean PigsLib


#############################################################################
#
# PigGUID: builds the GUID library for Pigs COM object client DLL
#
#############################################################################

PigGUID: PigsLib
    @cd test\PigGUID
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..\..

PigGUID_Clean:
    @cd test\PigGUID
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..\..

PigGUID_Full: PigGUID_Clean PigGUID


#############################################################################
#
# PigAccts: builds Pigs Accounts COM object server EXE
#
#############################################################################

PigAccts: TCLib AGC PigsLib PigGUID
    @cd test\PigAccts
#    $(NMAKE) BuildAndReg $(RECURSNMAKEARGS)
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..\..

PigAccts_Clean:
    @cd test\PigAccts
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..\..

PigAccts_Full: PigAccts_Clean PigAccts


#############################################################################
#
# PigSrv: builds Pigs COM object server EXE
#
#############################################################################

PigSrv: Clintlib TCLib AGC PigsLib PigGUID
    @cd test\PigSrv
#    $(NMAKE) BuildAndReg $(RECURSNMAKEARGS)
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..\..

PigSrv_Clean:
    @cd test\PigSrv
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..\..

PigSrv_Full: PigSrv_Clean PigSrv


#############################################################################
#
# PigConfig: builds Pig Server Configuration Utility EXE
#
#############################################################################

PigConfig: ZLib TCLib AGC PigsLib PigGUID
    @cd test\PigConfig
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..\..

PigConfig_Clean:
    @cd test\PigConfig
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..\..

PigConfig_Full: PigConfig_Clean PigConfig


#############################################################################
#
# Pigs: builds the entire Pigs system
# Pigs_Full: cleans all dependencies and builds Pigs
#
#############################################################################

Pigs: PigAccts PigSrv


#############################################################################
#
# Test: builds everything in test.
# Test_Full: cleans all dependencies and builds Test
#
#############################################################################

Test: Common Clintlib Pigs
    @cd techtree
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..


#############################################################################
#
# TCDeploy: builds Test Deployment COM object DLL
# TCDeploy_Full: cleans all dependencies and builds TCDeploy
# TCDeploy_Export: exports the Test Deployment COM object DLL to the network
#
# Note that these are NOT included in the Test target, since it is not part
# of the normal build process.
#
#############################################################################

TCDeploy: TCLib ZLibrary
    @cd test\TCDeploy
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..\..

TCDeploy_Clean:
    @cd test\TCDeploy
    $(NMAKE) clean $(RECURSNMAKEARGS)
    @cd ..\..

TCDeploy_Full: TCDeploy_Clean TCDeploy

TCDeploy_Export: TCDeploy
    @cd test\TCDeploy
    $(NMAKE) export $(RECURSNMAKEARGS)
    @cd ..\..


#############################################################################
#
# Cadet: builds Cadet
#
#############################################################################

Cadet: Common Effect
    @cd cadet
    $(NMAKE) $(RECURSNMAKEARGS)
    @cd ..


#############################################################################
#
# Component Object registration/unregistration targets:
#
#     RegAGC       : Registers AGC
#     UnregAGC     : Unregisters AGC
#     RegPigsLib   : Registers PigsLib
#     UnregPigsLib : Unregisters PigsLib
#     RegPigSrv    : Registers PigSrv
#     UnregPigSrv  : Unregisters PigSrv
#     RegPigAccts  : Registers PigAccts
#     UnregPigAccts: Unregisters PigAccts
#     RegPigs      : Registers PigSrv and PigAccts
#     UnregPigs    : Unregisters PigSrv and PigAccts
#
# The RegPigSrv, RegPigAccts, and RegPigs targets all make use of the
# following defines to register the corresponding COM server(s) to run under
# the user account specified:
#
#     user=[domain\]<user>  // user account name with optional domain
#                           // Can also be "Interactive User"
#     pw=[pw]               // password for the specified user account
#                           // Must be empty or not specified if
#                           // "Interactive User" is specifed for user=
#
# If these are not specified, "Interactive User" is used.
#
#############################################################################

RegAGC:
    @cd AGC
    $(NMAKE) RegServer $(RECURSNMAKEARGS)
    @cd ..

UnregAGC:
    @cd AGC
    $(NMAKE) UnregServer $(RECURSNMAKEARGS)
    @cd ..

RegPigsLib: RegAGC
    @cd test\PigsLib
    $(NMAKE) RegServer $(RECURSNMAKEARGS)
    @cd ..\..

UnregPigsLib:
    @cd test\PigsLib
    $(NMAKE) UnregServer $(RECURSNMAKEARGS)
    @cd ..\..

RegPigSrv: RegPigsLib
    @cd test\PigSrv
    $(NMAKE) RegServer $(RECURSNMAKEARGS)
    @cd ..\..

UnregPigSrv:
    @cd test\PigSrv
    $(NMAKE) UnregServer $(RECURSNMAKEARGS)
    @cd ..\..

RegPigAccts: RegPigsLib
    @cd test\PigAccts
    $(NMAKE) RegServer $(RECURSNMAKEARGS)
    @cd ..\..

UnregPigAccts:
    @cd test\PigAccts
    $(NMAKE) UnregServer $(RECURSNMAKEARGS)
    @cd ..\..

RegPigs: RegPigSrv RegPigAccts

UnregPigs: UnregPigAccts UnregPigSrv
