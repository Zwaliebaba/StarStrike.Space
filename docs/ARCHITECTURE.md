# Architecture Overview

This codebase is an Allegiance-style multiplayer game stack with shared simulation, separate client/server executables, and supporting libraries/tools.

## 1) Top-level architecture

At a high level:

1. **Foundation utilities** (`zlib/`, `_Utility/`) provide base types, math, containers, helpers.
2. **Shared simulation** (`Igc/`) defines core game objects and rules used by both client and server.
3. **Client runtime** (`engine/`, `effect/`, `soundengine/`, `clintlib/`, `WinTrek/`) handles rendering, effects, audio, and client networking/UI/gameplay.
4. **Server runtime** (`FedSrv/`, `sharemem/`, plus optional admin/lobby components) runs dedicated game sessions.
5. **Content pipeline/tools** (`mdlc/`, `xmunge/`, `cvh/`, `qhull/`, and other helper projects) support asset processing and development workflows.

## 2) Shared game logic boundary

`Igc/` is the critical boundary that keeps core game behavior consistent across client and server.

- Entity/state interfaces (mission, ship, sector/cluster concepts) are defined in IGC headers.
- Client and server both link against this logic so gameplay rules are not duplicated.

## 3) Networking model

Protocol messages live under `Inc/` (notably `Messages.h`) using macro-based message definitions.

- Message format changes must be coordinated carefully.
- Protocol versioning (`MSGVER`) tracks compatibility when message payloads evolve.

## 4) Rendering subsystem

The rendering stack historically targets DirectX 7-era abstractions in `engine/` and `effect/`.

- Existing code includes abstraction layers around legacy DirectDraw/Direct3D interfaces.
- Current migration plans and status are tracked in `DXMigration.md`.

## 5) Build orchestration

The root `CMakeLists.txt` defines dependency-ordered `add_subdirectory(...)` entries for:

- Foundation libs
- Core/shared libs
- Client/server binaries
- Developer tools
- Artwork/assets

The generated Visual Studio solution is organized into folders and targeted at Win32.

## 6) COM and service-adjacent components

The repo includes service/administration-related components:

- `AGC/` for COM-based admin integrations (ATL-style patterns)
- `lobby/` for matchmaking/lobby capabilities (currently optional in root CMake)
- Additional utility/service directories (`srvconfig/`, `fsmon/`, etc.) for operations tooling

## 7) Data and assets

`Artwork/` and related directories hold substantial runtime content (models, sounds, textures, UI media, mission/tutorial data).

This project is not code-only; source, binaries, tooling, and content are tightly coupled from a developer workflow perspective.
