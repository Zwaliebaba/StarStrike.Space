#include "pch.h"

#include <d3d9.h>

//////////////////////////////////////////////////////////////////////////////
//
// D3D9 Rasterizer — Rasterizer implementation backed by IDirect3DDevice9
//
// Replaces D3DRasterizer for the DX9 backend. Uses DrawPrimitiveUP and
// DrawIndexedPrimitiveUP instead of the DX7 DrawPrimitive API.
//
//////////////////////////////////////////////////////////////////////////////

class D3D9RasterizerImpl : public D3DRasterizer {
private:
    TRef<IDirect3DDevice9> m_pd3dDevice;
    PrivateSurface*        m_psurface;

    Rect                   m_rectClip;

    #ifdef _DEBUG
        bool m_bSurfaceLost;

        void InitializeD3DCall()
        {
            m_bSurfaceLost = false;
        }

        void D3D9Error(HRESULT hr, const char* pszCall, const char* pszFile, int line, const char* pszModule)
        {
            if (m_bSurfaceLost) {
                // ignore all errors if the surface is lost
            } else {
                if (hr == D3DERR_DEVICELOST) {
                    m_bSurfaceLost = true;
                } else {
                    DDError(hr, pszCall, pszFile, line, pszModule);
                }
            }
        }

        #define D3D9Call(hr) D3D9Error(hr, #hr, __FILE__, __LINE__, __MODULE__)
    #else
        void InitializeD3DCall() {}
        void D3D9Call(HRESULT hr) {}
    #endif

public:
    //////////////////////////////////////////////////////////////////////////////
    //
    // Constructor
    //
    //////////////////////////////////////////////////////////////////////////////

    D3D9RasterizerImpl(PrivateSurface* psurface, IDirect3DDevice9* pd3dDevice) :
        m_psurface(psurface),
        m_pd3dDevice(pd3dDevice)
    {
        InitializeD3DCall();

        if (m_pd3dDevice) {
            // Set default render states equivalent to DX7 defaults
            m_pd3dDevice->SetRenderState(D3DRS_ZENABLE, D3DZB_TRUE);
            m_pd3dDevice->SetRenderState(D3DRS_ZFUNC, D3DCMP_LESSEQUAL);
            m_pd3dDevice->SetRenderState(D3DRS_LIGHTING, FALSE);

            // Set up viewport
            UpdateViewport();
        }
    }

    bool IsValid()
    {
        return m_pd3dDevice != NULL;
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Termination
    //
    //////////////////////////////////////////////////////////////////////////////

    void Terminate() override
    {
        m_pd3dDevice = NULL;
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // D3DRasterizer interface — DX7-era accessors
    // These return NULL in the DX9 backend since the DX7 types don't exist.
    //
    //////////////////////////////////////////////////////////////////////////////

    TRef<IDirect3DDeviceX> GetD3DDeviceX() override
    {
        return NULL;
    }

    TRef<IDirect3DX> GetD3D() override
    {
        return NULL;
    }

    TRef<IDirect3DViewportX> GetViewport() override
    {
        return NULL;
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Scene
    //
    //////////////////////////////////////////////////////////////////////////////

    void BeginScene() override
    {
        if (m_pd3dDevice) {
            D3D9Call(m_pd3dDevice->BeginScene());
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
    // Viewport
    //
    //////////////////////////////////////////////////////////////////////////////

    void UpdateViewport()
    {
        if (!m_pd3dDevice)
            return;

        const WinPoint& size = m_psurface->GetSize();

        D3DVIEWPORT9 vp;
        vp.X      = 0;
        vp.Y      = 0;
        vp.Width  = (DWORD)size.X();
        vp.Height = (DWORD)size.Y();
        vp.MinZ   = 0.0f;
        vp.MaxZ   = 1.0f;

        D3D9Call(m_pd3dDevice->SetViewport(&vp));
    }

    void SetClipRect(const Rect& rectClip) override
    {
        m_rectClip = rectClip;
    }

    void ClearZBuffer() override
    {
        if (!m_pd3dDevice)
            return;

        D3DRECT rect;
        rect.x1 = (LONG)m_rectClip.XMin();
        rect.y1 = (LONG)m_rectClip.YMin();
        rect.x2 = (LONG)m_rectClip.XMax();
        rect.y2 = (LONG)m_rectClip.YMax();

        D3D9Call(m_pd3dDevice->Clear(1, &rect, D3DCLEAR_ZBUFFER, 0, 1.0f, 0));
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Attributes
    //
    //////////////////////////////////////////////////////////////////////////////

    Point GetSurfaceSize() override
    {
        return Point::Cast(m_psurface->GetSize());
    }

    bool Has3DAcceleration() override
    {
        return m_pd3dDevice != NULL;
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Render State Management
    //
    //////////////////////////////////////////////////////////////////////////////

    void SetTexture(Surface* psurfaceTextureArg) override
    {
        if (m_pd3dDevice) {
            if (psurfaceTextureArg) {
                // Texture binding will be implemented in a later phase
                // when the texture cache is migrated to DX9
                m_pd3dDevice->SetTexture(0, NULL);
            } else {
                m_pd3dDevice->SetTexture(0, NULL);
            }
        }
    }

    void SetShadeMode(ShadeMode shadeMode) override
    {
        if (!m_pd3dDevice)
            return;

        switch (shadeMode) {
            case ShadeModeNone:
            case ShadeModeCopy:
                // DX9 doesn't have TEXTUREMAPBLEND — use texture stage states
                m_pd3dDevice->SetTextureStageState(0, D3DTSS_COLOROP, D3DTOP_SELECTARG1);
                m_pd3dDevice->SetTextureStageState(0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
                break;

            case ShadeModeFlat:
                m_pd3dDevice->SetRenderState(D3DRS_SHADEMODE, D3DSHADE_FLAT);
                m_pd3dDevice->SetTextureStageState(0, D3DTSS_COLOROP, D3DTOP_MODULATE);
                m_pd3dDevice->SetTextureStageState(0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
                m_pd3dDevice->SetTextureStageState(0, D3DTSS_COLORARG2, D3DTA_DIFFUSE);
                break;

            case ShadeModeGlobalColor:
            case ShadeModeGouraud:
                m_pd3dDevice->SetRenderState(D3DRS_SHADEMODE, D3DSHADE_GOURAUD);
                m_pd3dDevice->SetTextureStageState(0, D3DTSS_COLOROP, D3DTOP_MODULATE);
                m_pd3dDevice->SetTextureStageState(0, D3DTSS_COLORARG1, D3DTA_TEXTURE);
                m_pd3dDevice->SetTextureStageState(0, D3DTSS_COLORARG2, D3DTA_DIFFUSE);
                break;

            default:
                ZError("Invalid ShadeMode");
        }
    }

    void SetBlendMode(BlendMode blendMode) override
    {
        if (!m_pd3dDevice)
            return;

        switch (blendMode) {
            case BlendModeSource:
                m_pd3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, FALSE);
                break;

            case BlendModeAdd:
                m_pd3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, TRUE);
                m_pd3dDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_ONE);
                m_pd3dDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_ONE);
                break;

            case BlendModeSourceAlpha:
                m_pd3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, TRUE);
                m_pd3dDevice->SetRenderState(D3DRS_SRCBLEND, D3DBLEND_ONE);
                m_pd3dDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
                break;

            default:
                ZError("Invalid BlendMode");
        }
    }

    void SetWrapMode(WrapMode wrapMode) override
    {
        if (!m_pd3dDevice)
            return;

        switch (wrapMode) {
            case WrapModeNone:
                m_pd3dDevice->SetSamplerState(0, D3DSAMP_ADDRESSU, D3DTADDRESS_CLAMP);
                m_pd3dDevice->SetSamplerState(0, D3DSAMP_ADDRESSV, D3DTADDRESS_CLAMP);
                break;

            case WrapModeUCylinder:
                m_pd3dDevice->SetSamplerState(0, D3DSAMP_ADDRESSU, D3DTADDRESS_WRAP);
                m_pd3dDevice->SetSamplerState(0, D3DSAMP_ADDRESSV, D3DTADDRESS_CLAMP);
                break;

            case WrapModeVCylinder:
                m_pd3dDevice->SetSamplerState(0, D3DSAMP_ADDRESSU, D3DTADDRESS_CLAMP);
                m_pd3dDevice->SetSamplerState(0, D3DSAMP_ADDRESSV, D3DTADDRESS_WRAP);
                break;

            case WrapModeTorus:
                m_pd3dDevice->SetSamplerState(0, D3DSAMP_ADDRESSU, D3DTADDRESS_WRAP);
                m_pd3dDevice->SetSamplerState(0, D3DSAMP_ADDRESSV, D3DTADDRESS_WRAP);
                break;

            default:
                ZError("Invalid WrapMode");
        }
    }

    void SetCullMode(CullMode cullMode) override
    {
        if (!m_pd3dDevice)
            return;

        switch (cullMode) {
            case CullModeNone:
                m_pd3dDevice->SetRenderState(D3DRS_CULLMODE, D3DCULL_NONE);
                break;

            case CullModeCW:
                m_pd3dDevice->SetRenderState(D3DRS_CULLMODE, D3DCULL_CW);
                break;

            case CullModeCCW:
                m_pd3dDevice->SetRenderState(D3DRS_CULLMODE, D3DCULL_CCW);
                break;

            case CullModeBoth:
                ZUnimplemented();
                break;

            default:
                ZError("Invalid CullMode");
        }
    }

    void SetZTest(bool bZTest) override
    {
        if (m_pd3dDevice) {
            m_pd3dDevice->SetRenderState(D3DRS_ZENABLE, bZTest ? D3DZB_TRUE : D3DZB_FALSE);
        }
    }

    void SetZWrite(bool bZWrite) override
    {
        if (m_pd3dDevice) {
            m_pd3dDevice->SetRenderState(D3DRS_ZWRITEENABLE, bZWrite);
        }
    }

    void SetLinearFilter(bool bLinearFilter) override
    {
        if (!m_pd3dDevice)
            return;

        if (bLinearFilter) {
            m_pd3dDevice->SetSamplerState(0, D3DSAMP_MAGFILTER, D3DTEXF_LINEAR);
            m_pd3dDevice->SetSamplerState(0, D3DSAMP_MINFILTER, D3DTEXF_LINEAR);
        } else {
            m_pd3dDevice->SetSamplerState(0, D3DSAMP_MAGFILTER, D3DTEXF_POINT);
            m_pd3dDevice->SetSamplerState(0, D3DSAMP_MINFILTER, D3DTEXF_POINT);
        }
    }

    void SetPerspectiveCorrection(bool bPerspectiveCorrection) override
    {
        // DX9 always does perspective-correct texturing — no state to set
    }

    void SetDither(bool bDither) override
    {
        if (m_pd3dDevice) {
            m_pd3dDevice->SetRenderState(D3DRS_DITHERENABLE, FALSE);
        }
    }

    void SetColorKey(bool bColorKey) override
    {
        // DX9 doesn't have hardware color keying.
        // Color key transparency is handled via alpha test.
        if (m_pd3dDevice) {
            m_pd3dDevice->SetRenderState(D3DRS_ALPHATESTENABLE, bColorKey);
            if (bColorKey) {
                m_pd3dDevice->SetRenderState(D3DRS_ALPHAREF, 0x01);
                m_pd3dDevice->SetRenderState(D3DRS_ALPHAFUNC, D3DCMP_GREATEREQUAL);
            }
        }
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Drawing — D3DLVertex (lit vertices)
    //
    //////////////////////////////////////////////////////////////////////////////

    void DrawTrianglesD3D(const D3DLVertex* pvertex, int vcount, const MeshIndex* pindex, int icount) override
    {
        if (m_pd3dDevice) {
            m_pd3dDevice->SetFVF(D3DFVF_LVERTEX);
            D3D9Call(m_pd3dDevice->DrawIndexedPrimitiveUP(
                D3DPT_TRIANGLELIST,
                0, vcount, icount / 3,
                pindex, D3DFMT_INDEX16,
                pvertex, sizeof(D3DLVertex)
            ));
        }
    }

    void DrawLinesD3D(const D3DLVertex* pvertex, int vcount, const MeshIndex* pindex, int icount) override
    {
        if (m_pd3dDevice) {
            m_pd3dDevice->SetFVF(D3DFVF_LVERTEX);
            D3D9Call(m_pd3dDevice->DrawIndexedPrimitiveUP(
                D3DPT_LINELIST,
                0, vcount, icount / 2,
                pindex, D3DFMT_INDEX16,
                pvertex, sizeof(D3DLVertex)
            ));
        }
    }

    void DrawPointsD3D(const D3DLVertex* pvertex, int vcount) override
    {
        if (m_pd3dDevice) {
            m_pd3dDevice->SetFVF(D3DFVF_LVERTEX);
            D3D9Call(m_pd3dDevice->DrawPrimitiveUP(
                D3DPT_POINTLIST,
                vcount,
                pvertex, sizeof(D3DLVertex)
            ));
        }
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Drawing — D3DVertex (untransformed, unlit vertices)
    //
    //////////////////////////////////////////////////////////////////////////////

    void DrawTrianglesD3D(const D3DVertex* pvertex, int vcount, const MeshIndex* pindex, int icount) override
    {
        if (m_pd3dDevice) {
            m_pd3dDevice->SetFVF(D3DFVF_VERTEX);
            D3D9Call(m_pd3dDevice->DrawIndexedPrimitiveUP(
                D3DPT_TRIANGLELIST,
                0, vcount, icount / 3,
                pindex, D3DFMT_INDEX16,
                pvertex, sizeof(D3DVertex)
            ));
        }
    }

    void DrawLinesD3D(const D3DVertex* pvertex, int vcount, const MeshIndex* pindex, int icount) override
    {
        if (m_pd3dDevice) {
            m_pd3dDevice->SetFVF(D3DFVF_VERTEX);
            D3D9Call(m_pd3dDevice->DrawIndexedPrimitiveUP(
                D3DPT_LINELIST,
                0, vcount, icount / 2,
                pindex, D3DFMT_INDEX16,
                pvertex, sizeof(D3DVertex)
            ));
        }
    }

    void DrawPointsD3D(const D3DVertex* pvertex, int vcount) override
    {
        if (m_pd3dDevice) {
            m_pd3dDevice->SetFVF(D3DFVF_VERTEX);
            D3D9Call(m_pd3dDevice->DrawPrimitiveUP(
                D3DPT_POINTLIST,
                vcount,
                pvertex, sizeof(D3DVertex)
            ));
        }
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Drawing — VertexScreen (pre-transformed, lit vertices)
    //
    //////////////////////////////////////////////////////////////////////////////

    void DrawTriangles(const VertexScreen* pvertex, int vcount, const MeshIndex* pindex, int icount) override
    {
        CheckVertices(pvertex, vcount);

        if (m_pd3dDevice) {
            m_pd3dDevice->SetFVF(D3DFVF_TLVERTEX);
            D3D9Call(m_pd3dDevice->DrawIndexedPrimitiveUP(
                D3DPT_TRIANGLELIST,
                0, vcount, icount / 3,
                pindex, D3DFMT_INDEX16,
                pvertex, sizeof(VertexScreen)
            ));
        }
    }

    void DrawLines(const VertexScreen* pvertex, int vcount, const MeshIndex* pindex, int icount) override
    {
        CheckVertices(pvertex, vcount);

        if (m_pd3dDevice) {
            m_pd3dDevice->SetFVF(D3DFVF_TLVERTEX);
            D3D9Call(m_pd3dDevice->DrawIndexedPrimitiveUP(
                D3DPT_LINELIST,
                0, vcount, icount / 2,
                pindex, D3DFMT_INDEX16,
                pvertex, sizeof(VertexScreen)
            ));
        }
    }

    void DrawPoints(const VertexScreen* pvertex, int vcount) override
    {
        CheckVertices(pvertex, vcount);

        if (m_pd3dDevice) {
            m_pd3dDevice->SetFVF(D3DFVF_TLVERTEX);
            D3D9Call(m_pd3dDevice->DrawPrimitiveUP(
                D3DPT_POINTLIST,
                vcount,
                pvertex, sizeof(VertexScreen)
            ));
        }
    }

    //////////////////////////////////////////////////////////////////////////////
    //
    // Helpers
    //
    //////////////////////////////////////////////////////////////////////////////

    void CheckVertices(const VertexScreen* pvertex, int vcount)
    {
        VertexScreen* pcheck = (VertexScreen*)pvertex;

        for (int index = 0; index < vcount; index++) {
            if (pcheck[index].x < m_rectClip.XMin()) {
                pcheck[index].x = m_rectClip.XMin();
            } else if (pcheck[index].x > m_rectClip.XMax()) {
                pcheck[index].x = m_rectClip.XMax();
            }

            if (pcheck[index].y < m_rectClip.YMin()) {
                pcheck[index].y = m_rectClip.YMin();
            } else if (pcheck[index].y > m_rectClip.YMax()) {
                pcheck[index].y = m_rectClip.YMax();
            }

            if (pcheck[index].z < 0) {
                pcheck[index].z = 0;
            } else if (pcheck[index].z > 1) {
                pcheck[index].z = 1;
            }
        }
    }
};

//////////////////////////////////////////////////////////////////////////////
//
// Factory
//
//////////////////////////////////////////////////////////////////////////////

TRef<D3DRasterizer> CreateD3D9Rasterizer(PrivateSurface* psurface, IDirect3DDevice9* pd3dDevice)
{
    TRef<D3D9RasterizerImpl> prasterizer = new D3D9RasterizerImpl(psurface, pd3dDevice);

    if (prasterizer->IsValid()) {
        return (D3DRasterizer*)prasterizer;
    }
    return NULL;
}
