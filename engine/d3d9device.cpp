#include "pch.h"

#include <d3d9.h>

//////////////////////////////////////////////////////////////////////////////
//
// D3D9 Device — IRenderDevice implementation backed by IDirect3DDevice9
//
// This replaces the DDDevice + D3DDevice pair from the DX7 backend.
//
//////////////////////////////////////////////////////////////////////////////

class D3D9DeviceImpl : public IRenderDevice {
private:
    //////////////////////////////////////////////////////////////////////////////
    //
    // Members
    //
    //////////////////////////////////////////////////////////////////////////////

    TRef<IDirect3D9>       m_pd3d9;
    TRef<IDirect3DDevice9> m_pd3dDevice;
    TRef<PixelFormat>      m_ppfTexture;

    ZString                m_strName;
    bool                   m_b3DAcceleration;
    bool                   m_bAllow3DAcceleration;

    TVector<WinPoint>      m_modes;

    //////////////////////////////////////////////////////////////////////////////
    //
    // Display mode enumeration
    //
    //////////////////////////////////////////////////////////////////////////////

    void EnumerateModes()
    {
        if (!m_pd3d9)
            return;

        UINT adapterCount = m_pd3d9->GetAdapterCount();
        if (adapterCount == 0)
            return;

        // Enumerate modes for the default adapter in D3DFMT_R5G6B5 (16-bit)
        UINT modeCount = m_pd3d9->GetAdapterModeCount(D3DADAPTER_DEFAULT, D3DFMT_R5G6B5);

        for (UINT i = 0; i < modeCount; i++) {
            D3DDISPLAYMODE mode;
            if (SUCCEEDED(m_pd3d9->EnumAdapterModes(D3DADAPTER_DEFAULT, D3DFMT_R5G6B5, i, &mode))) {
                if (mode.Width >= 640 && mode.Height >= 480) {
                    WinPoint wp((int)mode.Width, (int)mode.Height);

                    // Avoid duplicates
                    bool bFound = false;
                    for (int j = 0; j < m_modes.GetCount(); j++) {
                        if (m_modes[j].X() == wp.X() && m_modes[j].Y() == wp.Y()) {
                            bFound = true;
                            break;
                        }
                    }
                    if (!bFound) {
                        m_modes.PushEnd(wp);
                    }
                }
            }
        }
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Texture format selection
    //
    //////////////////////////////////////////////////////////////////////////////

    void SelectTextureFormat(PrivateEngine* pengine)
    {
        if (!m_pd3d9)
            return;

        // Prefer 16-bit 565 texture format, fall back to others
        D3DFORMAT candidates[] = {
            D3DFMT_R5G6B5,
            D3DFMT_X1R5G5B5,
            D3DFMT_A1R5G5B5,
            D3DFMT_A8R8G8B8,
            D3DFMT_X8R8G8B8
        };

        for (auto fmt : candidates) {
            HRESULT hr = m_pd3d9->CheckDeviceFormat(
                D3DADAPTER_DEFAULT,
                D3DDEVTYPE_HAL,
                D3DFMT_R5G6B5,  // adapter format
                0,
                D3DRTYPE_TEXTURE,
                fmt
            );
            if (SUCCEEDED(hr)) {
                // Map D3DFORMAT to our PixelFormat
                switch (fmt) {
                    case D3DFMT_R5G6B5:
                        m_ppfTexture = pengine->GetPixelFormat(16, 0xF800, 0x07E0, 0x001F, 0x0000);
                        break;
                    case D3DFMT_X1R5G5B5:
                        m_ppfTexture = pengine->GetPixelFormat(16, 0x7C00, 0x03E0, 0x001F, 0x0000);
                        break;
                    case D3DFMT_A1R5G5B5:
                        m_ppfTexture = pengine->GetPixelFormat(16, 0x7C00, 0x03E0, 0x001F, 0x8000);
                        break;
                    case D3DFMT_A8R8G8B8:
                        m_ppfTexture = pengine->GetPixelFormat(32, 0x00FF0000, 0x0000FF00, 0x000000FF, 0xFF000000);
                        break;
                    case D3DFMT_X8R8G8B8:
                        m_ppfTexture = pengine->GetPixelFormat(32, 0x00FF0000, 0x0000FF00, 0x000000FF, 0x00000000);
                        break;
                }
                if (m_ppfTexture)
                    return;
            }
        }
    }

public:
    //////////////////////////////////////////////////////////////////////////////
    //
    // Constructor
    //
    //////////////////////////////////////////////////////////////////////////////

    D3D9DeviceImpl(
        PrivateEngine* pengine,
        IDirect3D9*    pd3d9,
        bool           bAllow3DAcceleration
    ) :
        m_pd3d9(pd3d9),
        m_bAllow3DAcceleration(bAllow3DAcceleration)
    {
        if (!m_pd3d9)
            return;

        // Get adapter identifier for device name
        D3DADAPTER_IDENTIFIER9 adapterID;
        if (SUCCEEDED(m_pd3d9->GetAdapterIdentifier(D3DADAPTER_DEFAULT, 0, &adapterID))) {
            m_strName = adapterID.Description;
        }

        // Check for 3D acceleration (HAL device)
        D3DCAPS9 caps;
        m_b3DAcceleration = SUCCEEDED(m_pd3d9->GetDeviceCaps(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, &caps));

        // Enumerate display modes
        EnumerateModes();

        // Select texture format
        SelectTextureFormat(pengine);
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Lifetime
    //
    //////////////////////////////////////////////////////////////////////////////

    bool IsValid()
    {
        return m_pd3d9 != NULL;
    }

    void Terminate() override
    {
        m_pd3dDevice = NULL;
        m_pd3d9      = NULL;
    }

    void FreeEverything() override
    {
        m_pd3dDevice = NULL;
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Device information
    //
    //////////////////////////////////////////////////////////////////////////////

    ZString GetName() override
    {
        return m_strName;
    }

    bool Has3DAcceleration() override
    {
        return m_b3DAcceleration;
    }

    bool GetAllow3DAcceleration() override
    {
        return m_b3DAcceleration && m_bAllow3DAcceleration;
    }

    void SetAllow3DAcceleration(bool bAllow) override
    {
        m_bAllow3DAcceleration = bAllow;
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Display modes
    //
    //////////////////////////////////////////////////////////////////////////////

    WinPoint NextMode(const WinPoint& size) override
    {
        int count = m_modes.GetCount();
        if (count == 0)
            return WinPoint(640, 480);

        for (int index = 0; index < count; index++) {
            if (m_modes[index].X() > size.X() ||
                m_modes[index].Y() > size.Y()) {
                return m_modes[index];
            }
        }

        return m_modes[count - 1];
    }

    WinPoint PreviousMode(const WinPoint& size) override
    {
        int count = m_modes.GetCount();
        if (count == 0)
            return WinPoint(640, 480);

        for (int index = count - 1; index > 0; index--) {
            if (m_modes[index].X() < size.X() ||
                m_modes[index].Y() < size.Y()) {
                return m_modes[index];
            }
        }

        return m_modes[0];
    }

    void EliminateModes(const WinPoint& size) override
    {
        int count = m_modes.GetCount();

        for (int index = 0; index < count; index++) {
            if (m_modes[index].X() >= size.X() &&
                m_modes[index].Y() >= size.Y()) {
                m_modes.SetCount(index);
                return;
            }
        }
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Memory queries
    //
    //////////////////////////////////////////////////////////////////////////////

    int GetTotalTextureMemory() override
    {
        // DX9 doesn't expose total texture memory easily
        // GetAvailableTextureMem returns available, not total
        if (m_pd3dDevice) {
            return (int)m_pd3dDevice->GetAvailableTextureMem();
        }
        return 0;
    }

    int GetAvailableTextureMemory() override
    {
        if (m_pd3dDevice) {
            return (int)m_pd3dDevice->GetAvailableTextureMem();
        }
        return 0;
    }

    int GetTotalVideoMemory() override
    {
        return GetTotalTextureMemory();
    }

    int GetAvailableVideoMemory() override
    {
        return GetAvailableTextureMemory();
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Texture management
    //
    //////////////////////////////////////////////////////////////////////////////

    PixelFormat* GetTextureFormat() override
    {
        return m_ppfTexture;
    }

    WinPoint GetMinTextureSize() override
    {
        return WinPoint(1, 1);
    }

    WinPoint GetMaxTextureSize() override
    {
        if (m_pd3dDevice) {
            D3DCAPS9 caps;
            if (SUCCEEDED(m_pd3dDevice->GetDeviceCaps(&caps))) {
                return WinPoint((int)caps.MaxTextureWidth, (int)caps.MaxTextureHeight);
            }
        }
        return WinPoint(256, 256);
    }

    bool IsHardwareAccelerated() override
    {
        return m_b3DAcceleration;
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Scene management
    //
    //////////////////////////////////////////////////////////////////////////////

    void BeginScene() override
    {
        if (m_pd3dDevice) {
            m_pd3dDevice->BeginScene();
        }
    }

    void EndScene() override
    {
        if (m_pd3dDevice) {
            m_pd3dDevice->EndScene();
        }
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Cooperative level
    //
    //////////////////////////////////////////////////////////////////////////////

    HRESULT TestCooperativeLevel() override
    {
        if (m_pd3dDevice) {
            return m_pd3dDevice->TestCooperativeLevel();
        }
        return E_FAIL;
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // DX9-specific accessors (for use by other DX9 backend classes)
    //
    //////////////////////////////////////////////////////////////////////////////

    IDirect3D9* GetD3D9()
    {
        return m_pd3d9;
    }

    IDirect3DDevice9* GetD3DDevice9()
    {
        return m_pd3dDevice;
    }

    void SetD3DDevice9(IDirect3DDevice9* pd3dDevice)
    {
        m_pd3dDevice = pd3dDevice;
    }
};

//////////////////////////////////////////////////////////////////////////////
//
// Factory
//
//////////////////////////////////////////////////////////////////////////////

TRef<IRenderDevice> CreateD3D9Device(PrivateEngine* pengine, IDirect3D9* pd3d9, bool bAllow3DAcceleration)
{
    TRef<D3D9DeviceImpl> pdevice = new D3D9DeviceImpl(pengine, pd3d9, bAllow3DAcceleration);

    if (pdevice->IsValid()) {
        return (IRenderDevice*)pdevice;
    }
    return NULL;
}
