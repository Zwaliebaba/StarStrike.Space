# DirectX Migration Plan: DX7 ? DX9

## Current Architecture

The engine uses a layered abstraction over DirectDraw 4 / Direct3D 3 (DX7-era APIs).

| Layer | Files | DX7 Dependency | Status |
|-------|-------|----------------|--------|
| Type aliases | `engine/enginep.h` | `IDirectDraw4`, `IDirect3D3`, `IDirect3DDevice3`, etc. | Pending |
| DDDevice | `engine/dddevice.cpp` | `IDirectDrawX` for surface creation, mode enumeration, cooperative levels | Pending |
| D3DDevice | `engine/d3ddevice.cpp` | `IDirect3DDeviceX` for texture format enumeration | Pending |
| DDSurface | `engine/ddsurface.cpp` | `IDirectDrawSurfaceX` for video memory surfaces, locks, blts | Pending |
| Rasterizer | `engine/raster.cpp` | `IDirect3DDeviceX`, `IDirect3DViewportX` for rendering | Pending |
| PixelFormat | `engine/pixelformat.h` / `engine/pixelformat.cpp` | ~~`DDPIXELFORMAT` struct~~ | ? Decoupled |
| Surface | `engine/surface.cpp` | ~~x86 inline `__asm` blts~~, ~~legacy 16-bit pixel assumptions~~ | ? Decoupled |
| Engine | `engine/engine.cpp` | `DirectDrawCreate`, `IDirectDrawClipper`, fullscreen mode switching | Pending |
| Context | `engine/context.cpp` | Render state management via D3D interfaces | ?? Partial |
| ~~Software Rasterizer~~ | ~~`engine/softraster.cpp`~~ | ~~x86 inline `__asm` software fallback~~ | ? Removed |

The DX9 SDK headers and libs are already available in `DX9/Include/` and `DX9/Lib/`.

---

## Phase 1: Decouple API-Specific Code Behind Interfaces

**Goal:** Isolate all DirectX API calls behind clean abstract interfaces so the rest of the engine is backend-agnostic.

- [ ] **1.1 — Create `IRenderDevice` interface** (replaces `DDDevice` + `D3DDevice`)
  - Combines surface creation, device caps, texture management, scene begin/end
  - New file: `engine/renderdevice.h`

- [ ] **1.2 — Create `IVideoSurface9` implementation** (replaces `DDSurface`)
  - Wraps `IDirect3DSurface9` / `IDirect3DTexture9` instead of `IDirectDrawSurfaceX`
  - Implements the existing `VideoSurface` interface

- [ ] **1.3 — Create `IRasterizer9` implementation** (replaces `D3DRasterizer`)
  - Uses `IDirect3DDevice9::DrawPrimitiveUP` / `DrawIndexedPrimitiveUP`
  - Implements the existing `Rasterizer` interface

- [x] **1.4 — Abstract `PixelFormat` away from `DDPIXELFORMAT`**
  - ~~Replace `DDPIXELFORMAT m_ddpf` member with engine-owned fields~~
  - Add a conversion helper `D3DFORMAT ToD3D9Format()` for DX9 path
  - ~~Keep `GetDDPF()` for backward compatibility during transition~~
  - Completed: `PixelFormat` now stores `m_bits`, `m_redMask`, `m_greenMask`, `m_blueMask`, `m_alphaMask`, `m_flags` directly. `GetDDPF()` constructs a `DDPIXELFORMAT` on demand for DX7 callers. Added `Equivalent()` overload with raw fields. Also fixed a pre-existing bug where `Equivalent()` compared `dwGBitMask` twice instead of comparing `dwBBitMask`.

---

## Phase 2: Simplify Surface and Remove Inline ASM

**Goal:** Remove hardcoded 16-bit assumptions and x86 inline assembly from the software paths.

- [x] **2.1 — `surface.cpp` – `UnclippedFill`**
  - ~~Replace 16-bit-only fill with branching on `PixelBytes()` (2, 3, 4)~~
  - Completed: supports 16-bit (`WORD`), 24-bit (byte triplet), and 32-bit (`DWORD`)

- [x] **2.2 — `surface.cpp` – `UnclippedBltHandled`**
- ~~Replace inline `__asm` color-key blt with a C++ loop~~
- ~~Use `memcpy` for the no-color-key path instead of `rep movsd` asm~~
- ~~Support 16-bit, 24-bit, and 32-bit pixel formats uniformly~~
- Completed: replaced all inline asm with C++ loops for color-key blt (2/3/4-byte) and `memcpy` for non-color-key blt.

- [x] **2.3 — `surface.cpp` – `BltConvert`**
- ~~Generalize beyond 555?565 conversion~~
- ~~DX9 typically uses 32-bit `D3DFMT_A8R8G8B8`~~
- Completed: added same-format fast path (`memcpy`), kept 555?565 fast path, generic `GetColor`/`SetColor` fallback handles all cross-format conversions (16?32, 24?32, etc.).

- [x] **2.4 — `softraster.cpp` – software rasterizer**
  - ~~Replace inline asm with C++ equivalents or intrinsics~~
  - ~~DX9 hardware path will bypass this entirely~~
  - Completed: removed `softraster.cpp` entirely. `context.cpp` now always uses `CreateD3DRasterizer`; null result is handled gracefully.

---

## Phase 3: Implement DX9 Backend

**Goal:** Create a parallel DX9 implementation behind the abstracted interfaces.

| New File | Replaces | Key DX9 APIs |
|----------|----------|--------------|
| `engine/d3d9device.cpp` | `dddevice.cpp` + `d3ddevice.cpp` | `IDirect3D9::CreateDevice`, `IDirect3DDevice9` |
| `engine/d3d9surface.cpp` | `ddsurface.cpp` | `IDirect3DTexture9`, `IDirect3DSurface9`, `LockRect`/`UnlockRect` |
| `engine/d3d9raster.cpp` | `raster.cpp` | `DrawPrimitiveUP`, `DrawIndexedPrimitiveUP`, render states |
| `engine/d3d9engine.cpp` | Parts of `engine.cpp` | `Direct3DCreate9`, backbuffer/swap chain, `Present` |

Key changes:

- [ ] **3.1 — No more DirectDraw**
  - DX9 handles both 2D and 3D through `IDirect3DDevice9`

- [ ] **3.2 — No more `IDirectDrawClipper`**
  - Use `IDirect3DDevice9::Present` with window handle

- [ ] **3.3 — No more separate viewport object**
  - Use `IDirect3DDevice9::SetViewport`

- [ ] **3.4 — Textures are first-class**
  - `IDirect3DTexture9` replaces the `IDirectDrawSurfaceX` + `IDirect3DTextureX` combo

---

## Phase 4: Update Engine Initialization

**Goal:** Replace `DirectDrawCreate` / `DirectDrawEnumerate` with DX9 equivalents.

- [ ] **4.1 — `engine.cpp` – `EngineImpl`**
  - Replace `DirectDrawCreate` ? `Direct3DCreate9(D3D_SDK_VERSION)`
  - Replace display mode enumeration (`EnumDisplayModes`) ? `IDirect3D9::EnumAdapterModes`
  - Replace cooperative level / fullscreen ? `D3DPRESENT_PARAMETERS` with `Windowed`/`BackBufferFormat`
  - Replace `Flip()` ? `IDirect3DDevice9::Present()`
  - Replace gamma via `IDirectDrawGammaControl` ? `IDirect3DDevice9::SetGammaRamp`

- [ ] **4.2 — Update `enginep.h` type aliases**
  - Either switch the `typedef`s from DX7 to DX9, or (preferred) use `#ifdef`/build config to select backend

---

## Phase 5: Update CMake and Link Libraries

- [ ] **5.1 — `engine/CMakeLists.txt`**
  - Add the new DX9 source files
  - Link `d3d9.lib` from `DX9/Lib/` instead of `ddraw.lib`, `d3dim.lib`
  - Keep old files compilable behind a `#ifdef USEDX7` guard during transition

- [ ] **5.2 — Root `CMakeLists.txt`**
  - Add `DX9/Include` to the include path
  - Add `DX9/Lib` to the library path
  - Add a CMake option: `option(USE_DX9 "Use Direct3D 9 backend" ON)`

---

## Phase 6: Cleanup

- [ ] **6.1** — Remove `dddevice.cpp`, `d3ddevice.cpp`, `ddsurface.cpp` once DX9 backend is stable
- [ ] **6.2** — Remove `DDPIXELFORMAT` dependency from `PixelFormat`
- [ ] **6.3** — Remove DX7 SDK includes from `enginep.h`
- [x] **6.4** — ~~Remove `softraster.cpp` inline asm (or the entire file if software rendering is no longer needed)~~ — Removed
- [ ] **6.5** — Remove legacy DX7 headers (`DX9/Include/ddraw.h`, `DX9/Include/d3d.h`, etc.)

---

## Next Steps

Phase 2 is now complete. The next items to tackle are:

1. **Phase 1.1** — Create `IRenderDevice` interface
2. **Phase 1.2** — Create `IVideoSurface9` implementation
3. **Phase 1.3** — Create `IRasterizer9` implementation

---

## Completed Items

| Item | Description | Files Changed |
|------|-------------|---------------|
| 1.4 | `PixelFormat` decoupled from `DDPIXELFORMAT`, now uses engine-owned fields | `pixelformat.h`, `pixelformat.cpp` |
| 2.1 | `UnclippedFill` — added 16/24/32-bit pixel format support | `surface.cpp` |
| 2.2 | `UnclippedBltHandled` — replaced inline asm with C++ loops and `memcpy` | `surface.cpp` |
| 2.3 | `BltConvert` — added same-format fast path, kept 555?565, generic fallback | `surface.cpp` |
| 2.4 / 6.4 | Removed `softraster.cpp` — software rasterizer no longer needed | `softraster.cpp` (deleted), `context.cpp`, `enginep.h`, `CMakeLists.txt` |

### Bug Fixes (found during migration)

| Description | Files Changed |
|-------------|---------------|
| Fixed swapped `h`/`w` in `AnimatedImage` constructor | `image.cpp` |
| Fixed `Equivalent()` comparing `dwGBitMask` twice instead of `dwBBitMask` | `pixelformat.cpp` |
