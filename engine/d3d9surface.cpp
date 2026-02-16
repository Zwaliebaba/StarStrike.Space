#include "pch.h"

#include <d3d9.h>

//////////////////////////////////////////////////////////////////////////////
//
// D3D9VideoSurface — VideoSurface implementation backed by IDirect3DSurface9
//
// Replaces DDSurface for the DX9 backend. Wraps an IDirect3DSurface9
// (or IDirect3DTexture9) and implements lock/unlock, blt, and fill
// operations using DX9 APIs.
//
//////////////////////////////////////////////////////////////////////////////

class D3D9VideoSurface : public VideoSurface {
private:
    //////////////////////////////////////////////////////////////////////////////
    //
    // Members
    //
    //////////////////////////////////////////////////////////////////////////////

    TRef<IDirect3DDevice9>  m_pd3dDevice;
    TRef<IDirect3DSurface9> m_pd3dSurface;
    TRef<IDirect3DTexture9> m_pd3dTexture;
    TRef<PixelFormat>       m_ppf;

    WinPoint                m_size;
    int                     m_pitch;
    SurfaceType             m_stype;
    BYTE*                   m_pLockedBits;
    bool                    m_bLocked;
    Color                   m_colorKey;
    bool                    m_bColorKey;

public:
    //////////////////////////////////////////////////////////////////////////////
    //
    // Constructor — create a new DX9 surface
    //
    //////////////////////////////////////////////////////////////////////////////

    D3D9VideoSurface(
        IDirect3DDevice9* pd3dDevice,
        const WinPoint&   size,
        PixelFormat*      ppf,
        SurfaceType       stype
    ) :
        m_pd3dDevice(pd3dDevice),
        m_size(size),
        m_ppf(ppf),
        m_stype(stype),
        m_pitch(0),
        m_pLockedBits(NULL),
        m_bLocked(false),
        m_bColorKey(false)
    {
        if (!m_pd3dDevice)
            return;

        D3DFORMAT d3dfmt = PixelFormatToD3DFormat(ppf);

        //
        // Create as texture if power-of-two and not a render target
        //
        bool bTextureSize =
               size.X() == (int)NextPowerOf2((DWORD)size.X())
            && size.Y() == (int)NextPowerOf2((DWORD)size.Y());

        if (bTextureSize && !stype.Test(SurfaceTypeVideo())) {
            HRESULT hr = m_pd3dDevice->CreateTexture(
                size.X(), size.Y(),
                1,             // mip levels
                0,             // usage
                d3dfmt,
                D3DPOOL_MANAGED,
                &m_pd3dTexture,
                NULL
            );

            if (SUCCEEDED(hr) && m_pd3dTexture) {
                m_pd3dTexture->GetSurfaceLevel(0, &m_pd3dSurface);
            }
        }

        //
        // Fall back to offscreen plain surface
        //
        if (!m_pd3dSurface) {
            m_pd3dDevice->CreateOffscreenPlainSurface(
                size.X(), size.Y(),
                d3dfmt,
                D3DPOOL_SYSTEMMEM,
                &m_pd3dSurface,
                NULL
            );
        }
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Constructor — wrap an existing DX9 surface (e.g. back buffer)
    //
    //////////////////////////////////////////////////////////////////////////////

    D3D9VideoSurface(
        IDirect3DDevice9*  pd3dDevice,
        IDirect3DSurface9* pd3dSurface,
        PixelFormat*       ppf,
        SurfaceType        stype
    ) :
        m_pd3dDevice(pd3dDevice),
        m_pd3dSurface(pd3dSurface),
        m_ppf(ppf),
        m_stype(stype),
        m_pitch(0),
        m_pLockedBits(NULL),
        m_bLocked(false),
        m_bColorKey(false)
    {
        if (m_pd3dSurface) {
            D3DSURFACE_DESC desc;
            m_pd3dSurface->GetDesc(&desc);
            m_size = WinPoint((int)desc.Width, (int)desc.Height);
        }
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Destructor
    //
    //////////////////////////////////////////////////////////////////////////////

    ~D3D9VideoSurface()
    {
        if (m_bLocked && m_pd3dSurface) {
            m_pd3dSurface->UnlockRect();
        }
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Validation
    //
    //////////////////////////////////////////////////////////////////////////////

    bool IsValid()
    {
        return m_pd3dSurface != NULL;
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Helpers
    //
    //////////////////////////////////////////////////////////////////////////////

    static D3DFORMAT PixelFormatToD3DFormat(PixelFormat* ppf)
    {
        if (!ppf)
            return D3DFMT_UNKNOWN;

        DWORD bits = ppf->PixelBits();
        DWORD red  = ppf->RedMask();
        DWORD green = ppf->GreenMask();
        DWORD blue = ppf->BlueMask();
        DWORD alpha = ppf->AlphaMask();

        if (bits == 16) {
            if (red == 0xF800 && green == 0x07E0 && blue == 0x001F)
                return D3DFMT_R5G6B5;
            if (red == 0x7C00 && green == 0x03E0 && blue == 0x001F && alpha == 0x8000)
                return D3DFMT_A1R5G5B5;
            if (red == 0x7C00 && green == 0x03E0 && blue == 0x001F)
                return D3DFMT_X1R5G5B5;
        } else if (bits == 32) {
            if (red == 0x00FF0000 && green == 0x0000FF00 && blue == 0x000000FF) {
                if (alpha == 0xFF000000)
                    return D3DFMT_A8R8G8B8;
                return D3DFMT_X8R8G8B8;
            }
        } else if (bits == 24) {
            if (red == 0xFF0000 && green == 0x00FF00 && blue == 0x0000FF)
                return D3DFMT_R8G8B8;
        }

        return D3DFMT_UNKNOWN;
    }

    IDirect3DTexture9* GetTexture9() { return m_pd3dTexture; }
    IDirect3DSurface9* GetSurface9() { return m_pd3dSurface; }

    //////////////////////////////////////////////////////////////////////////////
    //
    // VideoSurface interface
    //
    //////////////////////////////////////////////////////////////////////////////

    SurfaceType GetSurfaceType() override
    {
        return m_stype;
    }

    const WinPoint& GetSize() override
    {
        return m_size;
    }

    int GetPitch() override
    {
        return m_pitch;
    }

    PixelFormat* GetPixelFormat() override
    {
        return m_ppf;
    }

    BYTE* GetPointer() override
    {
        if (m_bLocked)
            return m_pLockedBits;

        if (!m_pd3dSurface)
            return NULL;

        D3DLOCKED_RECT lockedRect;
        HRESULT hr = m_pd3dSurface->LockRect(&lockedRect, NULL, 0);
        if (FAILED(hr))
            return NULL;

        m_pLockedBits = (BYTE*)lockedRect.pBits;
        m_pitch = lockedRect.Pitch;
        m_bLocked = true;

        return m_pLockedBits;
    }

    void ReleasePointer() override
    {
        if (m_bLocked && m_pd3dSurface) {
            m_pd3dSurface->UnlockRect();
            m_bLocked = false;
            m_pLockedBits = NULL;
        }
    }

    bool IsMemoryShared() override
    {
        return false;
    }

    void SetColorKey(const Color& color) override
    {
        m_colorKey = color;
        m_bColorKey = true;
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Stretch Blt
    //
    //////////////////////////////////////////////////////////////////////////////

    void UnclippedBlt(
        const WinRect& rectTarget,
        VideoSurface*  pvideoSurfaceSource,
        const WinRect& rectSource,
        bool           bHasColorKey
    ) override
    {
        if (!m_pd3dDevice || !m_pd3dSurface)
            return;

        D3D9VideoSurface* pSrc = static_cast<D3D9VideoSurface*>(pvideoSurfaceSource);
        if (!pSrc || !pSrc->m_pd3dSurface)
            return;

        RECT rcSrc  = { rectSource.XMin(),  rectSource.YMin(),  rectSource.XMax(),  rectSource.YMax()  };
        RECT rcDest = { rectTarget.XMin(), rectTarget.YMin(), rectTarget.XMax(), rectTarget.YMax() };

        m_pd3dDevice->StretchRect(
            pSrc->m_pd3dSurface, &rcSrc,
            m_pd3dSurface, &rcDest,
            D3DTEXF_NONE
        );
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Regular Blts
    //
    //////////////////////////////////////////////////////////////////////////////

    void UnclippedBlt(
        const WinRect&       rectTarget,
        IDirectDrawSurfaceX* pddsSource,
        const WinPoint&      pointSource,
        bool                 bHasColorKey
    ) override
    {
        // DX9 path: not used — this overload exists only for DX7 callers.
        // During the transition, callers that still pass IDirectDrawSurfaceX*
        // should go through the DDSurface path.
    }

    void UnclippedBlt(
        const WinRect& rectTarget,
        VideoSurface*  pvideoSurfaceSource,
        const WinPoint& pointSource
    ) override
    {
        if (!m_pd3dDevice || !m_pd3dSurface)
            return;

        D3D9VideoSurface* pSrc = static_cast<D3D9VideoSurface*>(pvideoSurfaceSource);
        if (!pSrc || !pSrc->m_pd3dSurface)
            return;

        RECT rcSrc = {
            pointSource.X(),
            pointSource.Y(),
            pointSource.X() + (rectTarget.XMax() - rectTarget.XMin()),
            pointSource.Y() + (rectTarget.YMax() - rectTarget.YMin())
        };

        POINT ptDest = { rectTarget.XMin(), rectTarget.YMin() };

        m_pd3dDevice->UpdateSurface(
            pSrc->m_pd3dSurface, &rcSrc,
            m_pd3dSurface, &ptDest
        );
    }

    void UnclippedFill(const WinRect& rectTarget, Pixel pixel) override
    {
        if (!m_pd3dDevice || !m_pd3dSurface)
            return;

        RECT rc = { rectTarget.XMin(), rectTarget.YMin(), rectTarget.XMax(), rectTarget.YMax() };

        // Convert pixel value to D3DCOLOR (ARGB)
        D3DCOLOR d3dColor = (D3DCOLOR)pixel.Value();

        m_pd3dDevice->ColorFill(m_pd3dSurface, &rc, d3dColor);
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // GDI blts
    //
    //////////////////////////////////////////////////////////////////////////////

    void BitBltFromDC(HDC hdc) override
    {
        if (!m_pd3dSurface)
            return;

        HDC hdcSurface = NULL;
        if (SUCCEEDED(m_pd3dSurface->GetDC(&hdcSurface))) {
            ::BitBlt(hdcSurface, 0, 0, m_size.X(), m_size.Y(), hdc, 0, 0, SRCCOPY);
            m_pd3dSurface->ReleaseDC(hdcSurface);
        }
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Scene (called from Context)
    //
    //////////////////////////////////////////////////////////////////////////////

    void BeginScene() override
    {
        // Nothing needed for DX9 surfaces
    }

    void EndScene() override
    {
        // Nothing needed for DX9 surfaces
    }
};

//////////////////////////////////////////////////////////////////////////////
//
// Factory
//
//////////////////////////////////////////////////////////////////////////////

TRef<VideoSurface> CreateD3D9VideoSurface(
    IDirect3DDevice9* pd3dDevice,
    const WinPoint&   size,
    PixelFormat*      ppf,
    SurfaceType       stype
) {
    TRef<D3D9VideoSurface> psurface = new D3D9VideoSurface(pd3dDevice, size, ppf, stype);

    if (psurface->IsValid()) {
        return (VideoSurface*)psurface;
    }
    return NULL;
}

TRef<VideoSurface> CreateD3D9VideoSurface(
    IDirect3DDevice9*  pd3dDevice,
    IDirect3DSurface9* pd3dSurface,
    PixelFormat*       ppf,
    SurfaceType        stype
) {
    TRef<D3D9VideoSurface> psurface = new D3D9VideoSurface(pd3dDevice, pd3dSurface, ppf, stype);

    if (psurface->IsValid()) {
        return (VideoSurface*)psurface;
    }
    return NULL;
}
