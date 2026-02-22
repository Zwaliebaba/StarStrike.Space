# StarStrike.Space (Allegiance Codebase)

This repository contains the legacy **Allegiance** multiplayer space combat codebase and assets, with ongoing modernization work (including DirectX migration work).

## What this repo contains

- A classic Win32/x86 C++ game client (`WinTrek`) and dedicated server (`FedSrv`)
- Shared game simulation logic in `Igc/` used by both client and server
- Legacy rendering and audio engines in `engine/`, `effect/`, and `soundengine/`
- Build migration from legacy `nmake` toward CMake
- A large set of runtime content in `Artwork/` and related asset folders

## Documentation map

- [`docs/BUILD_AND_RUN.md`](docs/BUILD_AND_RUN.md): environment requirements, configure/build commands, and run guidance
- [`docs/ARCHITECTURE.md`](docs/ARCHITECTURE.md): high-level architecture and subsystem interactions
- [`docs/MODULE_GUIDE.md`](docs/MODULE_GUIDE.md): module-by-module reference for major directories
- [`DXMigration.md`](DXMigration.md): DirectX backend migration plan and status

## Current build direction

Use **CMake** as the primary build system. Legacy makefiles are still present for historical compatibility but should not be the default path for new work.

## Platform expectations

- Windows-focused codebase
- 32-bit (`Win32`/x86) target
- Visual Studio + Windows SDK + CMake toolchain expected

## Notes on naming

The repository path and title may refer to *StarStrike*, but the codebase itself is structured as an Allegiance-derived project (project name and binaries in CMake are `Allegiance`, client/server outputs map to classic Allegiance components).
