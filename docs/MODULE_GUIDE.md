# Module Guide

This guide gives a practical directory-level map for navigating the repository.

## Core libraries and runtime

| Directory | Role |
|---|---|
| `zlib/` | Foundational utility library (math, containers, strings, platform helpers). |
| `_Utility/` | Additional shared utility code such as collision/message/CRC helpers. |
| `Igc/` | Internet Game Core: shared simulation and gameplay interfaces. |
| `engine/` | Core rendering/engine subsystem (legacy DX stack + migration targets). |
| `effect/` | Visual effect rendering/processing support. |
| `soundengine/` | Audio engine layer (DirectSound-era abstractions). |
| `clintlib/` | Client-side networking/gameplay support library. |
| `training/` | Training/tutorial support code and resources. |
| `sharemem/` | Shared memory utilities used by server-side components. |

## Executables and service components

| Directory | Role |
|---|---|
| `WinTrek/` | Main game client executable project. |
| `FedSrv/` | Dedicated game server project. |
| `lobby/` | Lobby/matchmaking server project (present, optional in active CMake path). |
| `AGC/` | COM-based admin/game core component(s). |
| `AllSrvUI/` | UI tools related to server configuration/administration. |
| `AutoUpdate/` | Updater-related component(s). |

## Developer and content tools

| Directory | Role |
|---|---|
| `mdlc/` | Model/content compiler tooling. |
| `xmunge/` | Data transformation/build utility. |
| `cvh/` | Geometry/mesh helper tooling. |
| `qhull/`, `qh2mesh/` | Convex hull/mesh processing utilities. |
| `mdledit/`, `mesh2pl/`, `edit/` | Editing/conversion tools for assets and content workflows. |

## Shared interfaces and definitions

| Directory | Role |
|---|---|
| `Inc/` | Shared headers including network messages, parts definitions, and common interfaces. |
| `guids/` | COM/interface GUID declarations used across projects. |
| `DX9/` | DirectX SDK headers/libs vendored for migration and compatibility. |
| `cmake/` | Custom CMake modules and helper scripts. |

## Content and data

| Directory | Role |
|---|---|
| `Artwork/` | Primary game content: textures, models, audio, UI resources, media. |
| `Lang/` | Localization and language resources. |
| `Zone/` | Zone/service-related resources and data. |
| `database/`, `databasepcg/` | Database assets/scripts/data used by server and tools. |
| `test/` | Test-related assets/utilities (legacy/manual in practice). |

## Operational guidance

When starting a task, identify which layer is affected:

1. **Shared gameplay behavior?** Start at `Igc/` and `Inc/`.
2. **Protocol/data contract changes?** Inspect `Inc/Messages.h` and versioning conventions.
3. **Client visuals/input/audio?** Focus on `WinTrek/`, `engine/`, `effect/`, `soundengine/`, `clintlib/`.
4. **Server behavior/hosting?** Focus on `FedSrv/`, `sharemem/`, and service/support directories.
5. **Asset/build pipeline issues?** Use tooling directories and `Artwork/` content traces.
