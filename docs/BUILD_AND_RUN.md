# Build and Run Guide

This document captures practical build expectations for this repository.

## 1) Requirements

### Host OS
- Primary target: **Windows** (Win32 desktop application stack)

### Tooling
- Visual Studio 2022+ with C++ desktop workload
- CMake 3.21+
- Windows SDK that includes legacy-compatible headers/libraries used by the project

### Architecture
- The root `CMakeLists.txt` enforces **32-bit builds only**.
- Always configure with `-A Win32` when using Visual Studio generators.

## 2) Configure and Build (CMake primary)

From repository root:

```powershell
cmake -B build -G "Visual Studio 18 2026" -A Win32
cmake --build build --config Debug
cmake --build build --config Release
```

### Output layout
- Executables and runtime artifacts: `build/bin/<Config>/`
- Static libraries: `build/lib/<Config>/`

The configured solution includes major subprojects (libraries, executables, tools, and assets) in dependency order from the root CMake file.

## 3) Common build pitfalls

- **Configured for x64 by accident**  
  Symptom: configure fails with architecture error.  
  Fix: regenerate using `-A Win32`.

- **Using legacy makefiles for new changes**  
  The repo still contains legacy makefiles in many subdirectories, but CMake is the intended primary path.

- **Platform mismatch in dependencies**  
  Ensure any external libraries/tooling are available for 32-bit builds.

## 4) Running locally

This repository builds multiple binaries; typical gameplay workflows involve:

- Launching the dedicated server (`FedSrv` / `AllSrv` outputs)
- Launching the client (`WinTrek` / `Allegiance` output)
- Using content under `Artwork/` and related data folders at runtime

Because deployment and runtime layout can vary by machine/setup, treat this as a source-oriented developer repo first; produce and run binaries from the `build/bin/<Config>/` tree.

## 5) Legacy build system status

`nmake`/legacy makefiles are retained for historical reference. Use them only when specifically required for compatibility investigations.

## 6) Build validation checklist

Before considering a build change complete:

1. Reconfigure from a clean build directory.
2. Build Debug.
3. Build Release.
4. Confirm expected client/server/tool targets appear under `build/bin/<Config>/`.
