# Agent Guidance for Allegiance

## Mission
- Maintain and modernize the Allegiance multiplayer space combat game.
- Respect existing architecture while improving code quality where possible.
- Follow the CMake migration plan when working on build system changes.

## Project Structure
- `zlib/`: Foundation utilities (strings, containers, math, windowing).
- `_Utility/`: Collision detection, CRC, networking messages.
- `Igc/`: Internet Game Core - core game simulation shared by client/server.
- `engine/` + `effect/`: DirectX 7 rendering engine.
- `clintlib/`: Client-side networking and game logic.
- `WinTrek/`: Game client (Allegiance.exe).
- `FedSrv/`: Game server (AllSrv.exe).
- `AGC/`: Active Game Core COM component for server admin.
- `lobby/`: Lobby server for matchmaking.

## Key Patterns

### IGC Architecture
The `Igc/` library defines the core game simulation with interfaces like `ImissionIGC`, `IshipIGC`, `IclusterIGC`. Both client and server link against IGC for consistent game logic.

### Network Protocol
Messages in `Inc/Messages.h` use `DEFINE_FEDMSG` macros. The `MSGVER` constant must be incremented when changing message structures.

### COM Components
`AGC/` uses ATL for COM. When modifying interfaces:
1. Edit the `.idl` file
2. Rebuild to regenerate type library
3. Update `.rgs` files if adding new components

## Build Guidance

### CMake (Primary)
```powershell
# Configure (one-time)
cmake -B build -G "Visual Studio 18 2026" -A Win32

# Build
cmake --build build --config Debug      # Debug build
cmake --build build --config Release    # Release build
```

### Legacy nmake (Deprecated)
The legacy nmake build system (`Makefile`, `makefile.inc`, per-project makefiles) is retained
for reference but is deprecated. Do not invest in nmake improvements.

## Coding Expectations
- This is legacy 1999 code - use judgment when modernizing.
- Prefer modern C++ for new code, but match local style when patching existing code.
- Precompiled headers (`pch.h`) are used in most projects.
- `m_` prefix for member variables, `p` prefix for pointers.
- No automated tests - verify changes by running client/server.

## Agent Workflow
1. Understand the change scope (client-only, server-only, or IGC/shared).
2. Check if `MSGVER` or `Parts.h` changes are needed.
3. Build with CMake to verify compilation.

## Key Files Reference
- `Inc/Messages.h` - Network protocol
- `Igc/igc.h` - Core game interfaces
- `CMakeLists.txt` - Root CMake build configuration
- `.github/copilot-instructions.md` - Detailed instructions
