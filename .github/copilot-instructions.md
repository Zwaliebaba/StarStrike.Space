# Copilot Instructions for Allegiance

## Project Overview

Allegiance is a multiplayer space combat game originally developed by Microsoft (1999). This is a **legacy Win32 codebase** targeting x86 with DirectX 7.

### Key Components
| Directory | Purpose | Output |
|-----------|---------|--------|
| `zlib/` | Foundation utilities (math, strings, containers) | ZLibrary.lib |
| `_Utility/` | Collision detection, CRC, messages | Utility.lib |
| `Igc/` | Internet Game Core - shared game logic | Igc.lib |
| `engine/` | DirectX rendering engine | Engine.lib |
| `effect/` | Visual effects | Effect.lib |
| `clintlib/` | Client networking library | ClintLib.lib |
| `WinTrek/` | Game client | Allegiance.exe |
| `FedSrv/` | Game server | AllSrv.exe / AllSrv32.exe |
| `AGC/` | Active Game Core (COM component) | AGC.dll |
| `lobby/` | Lobby server | Lobby.exe |

## Build System

### CMake (Primary)
```powershell
# Configure (one-time)
cmake -B build -G "Visual Studio 18 2026" -A Win32

# Build
cmake --build build --config Debug      # Debug build
cmake --build build --config Release    # Release build
```

The build outputs to `build/bin/{Debug|Release}/`.

### Legacy nmake (Deprecated)
The legacy nmake build system (`Makefile`, `makefile.inc`, per-project makefiles) is retained
for reference but is deprecated. Use CMake for all new development.

### Environment Requirements
- Visual Studio 2022+ with C++ Desktop workload
- Windows SDK (DirectX headers included)
- CMake 3.21+
- x86 (32-bit) build only

## Architecture Patterns

### IGC (Internet Game Core)
Core game simulation shared between client and server. Key interfaces in `Igc/igc.h`:
- `ImissionIGC` - Game mission/match state
- `IshipIGC` - Ship entity
- `IclusterIGC` - Sector/region
- `IIgcSite` - Callback interface for game events

### Network Messages
Client-server protocol defined in `Inc/Messages.h` using macros:
```cpp
DEFINE_FEDMSG(C, LOGONREQ, 1)   // Client->Server message ID 1
  FM_VAR_ITEM(CharacterName);   // Variable-length field
  USHORT fedsrvVer;             // Fixed field
END_FEDMSG
```
Message version tracked by `MSGVER` constant - increment when modifying messages or `Parts.h`.

### COM Components
`AGC/` implements COM interfaces for server administration. Uses ATL; key files:
- `AGC.idl` - Interface definitions (compiled with MIDL)
- `*.rgs` - Registry scripts for COM registration

## Coding Conventions

### Legacy Code Warning
This is 1999-era code with mixed styles. **Do not blindly copy patterns** - use modern C++ for new code where possible.

### Naming (existing codebase)
- `m_` prefix for member variables
- `p` prefix for pointers (`pShip`, `pMission`)
- Hungarian notation common (`sz` for strings, `dw` for DWORD)
- ALL_CAPS for constants and macros

### Precompiled Headers
Most projects use `pch.h`/`pch.cpp`. Include `pch.h` first in source files.

## Key Files

| Path | Description |
|------|-------------|
| `Inc/Messages.h` | Network protocol definitions |
| `Inc/Parts.h` | Ship parts/equipment definitions |
| `Igc/igc.h` | Core game interfaces (~6000 lines) |
| `zlib/zlib.h` | Foundation types and utilities |
| `CMakeLists.txt` | Root CMake build configuration |

## Dependencies

### DirectX (Legacy)
Uses DirectX 7 APIs:
- `ddraw.lib` - DirectDraw (2D rendering)
- `dsound.lib` - DirectSound (audio)
- `dinput.lib` / `dinput8.lib` - DirectInput
- `dplayx.lib` - DirectPlay (networking)
- `dxguid.lib` - DirectX GUIDs

### Windows APIs
MFC used in some tools, COM/ATL throughout.

## Testing
No automated test infrastructure. Verify changes manually by running client and server.
