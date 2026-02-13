@echo off
setlocal enabledelayedexpansion

::############################################################################
::
:: Allegiance Build Script
::
:: This script sets up the Visual Studio build environment and invokes nmake.
::
:: Prerequisites:
::   - Visual Studio 2019 or 2022 with C++ Desktop workload
::   - Windows SDK (included with VS C++ workload)
::
:: Usage:
::   build.cmd [target] [options]
::
:: Options:
::   debug=1      Build debug version (default)
::   retail=1     Build retail/release version
::   test=1       Build retail with _DEBUG defined
::   VERBOSE=1    Verbose build output
::
:: Targets:
::   (none)       Build main client and server
::   Client       Build game client only
::   Server       Build game server only
::   AllExes      Build all executables
::   Clean        Clean build outputs
::   Shell        Open a shell with build environment
::
:: Examples:
::   build.cmd                     Build debug client/server
::   build.cmd retail=1            Build retail version
::   build.cmd Client debug=1      Build debug client only
::   build.cmd Clean               Clean all build outputs
::
::############################################################################

:: Always set up VS environment to ensure proper INCLUDE/LIB paths
:: This is necessary even if cl.exe is on PATH, as INCLUDE may be incomplete

:: Find Visual Studio installation
set "VSWHERE=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
if not exist "%VSWHERE%" (
    echo ERROR: Visual Studio not found.
    echo Please install Visual Studio 2019 or 2022 with C++ Desktop workload.
    exit /b 1
)

:: Get VS installation path (prefer VS2022, then VS2019)
for /f "usebackq tokens=*" %%i in (`"%VSWHERE%" -latest -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath`) do (
    set "VSINSTALLDIR=%%i"
)

if not defined VSINSTALLDIR (
    echo ERROR: Visual Studio with C++ tools not found.
    echo Please install Visual Studio 2019 or 2022 with C++ Desktop workload.
    exit /b 1
)

:: Call vcvarsall.bat for x86 (this is a 32-bit project)
set "VCVARSALL=%VSINSTALLDIR%\VC\Auxiliary\Build\vcvarsall.bat"
if not exist "%VCVARSALL%" (
    echo ERROR: vcvarsall.bat not found at %VCVARSALL%
    exit /b 1
)

echo Setting up Visual Studio environment...
call "%VCVARSALL%" x86
if errorlevel 1 (
    echo ERROR: Failed to initialize Visual Studio environment
    exit /b 1
)

:: Set FEDROOT to the parent directory (build outputs go to FEDROOT\Objs)
:: Set FEDSRC to the actual source directory
set "FEDSRC=%~dp0"
if "%FEDSRC:~-1%"=="\" set "FEDSRC=%FEDSRC:~0,-1%"
for %%i in ("%FEDSRC%\..") do set "FEDROOT=%%~fi"

:: INCLUDE must be set (vcvarsall should have done this)
if not defined INCLUDE (
    echo ERROR: INCLUDE environment variable not set.
    echo This usually means vcvarsall.bat failed.
    exit /b 1
)

:: Display configuration
echo.
echo ============================================
echo   Allegiance Build Configuration
echo ============================================
echo   FEDROOT:    %FEDROOT%
echo   FEDSRC:     %FEDSRC%
echo   VS Path:    %VSINSTALLDIR%
echo   Platform:   x86
echo ============================================
echo.

:: Change to source directory and run nmake
cd /d "%FEDSRC%"
if errorlevel 1 (
    echo ERROR: Cannot change to %FEDSRC%
    exit /b 1
)

:: Pass all arguments to nmake
echo Running: nmake %*
echo.
nmake %*

exit /b %errorlevel%
