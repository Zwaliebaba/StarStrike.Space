#include "pch.h"

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

PixelFormat::PixelFormat(
    int   bits,
    DWORD redMask,
    DWORD greenMask,
    DWORD blueMask,
    DWORD alphaMask
) :
    m_bits(bits),
    m_redMask(redMask),
    m_greenMask(greenMask),
    m_blueMask(blueMask),
    m_alphaMask(alphaMask),
    m_flags(DDPF_RGB),
    m_bSoftwareTexture(false)
{
}

DDPIXELFORMAT PixelFormat::GetDDPF() const
{
    DDPIXELFORMAT ddpf;
    memset(&ddpf, 0, sizeof(ddpf));
    ddpf.dwSize            = sizeof(DDPIXELFORMAT);
    ddpf.dwFlags           = m_flags;
    ddpf.dwFourCC          = 0;
    ddpf.dwRGBBitCount     = m_bits;
    ddpf.dwRBitMask        = m_redMask;
    ddpf.dwGBitMask        = m_greenMask;
    ddpf.dwBBitMask        = m_blueMask;
    ddpf.dwRGBAlphaBitMask = m_alphaMask;
    return ddpf;
}

DWORD PixelFormat::RedSize()    const { return RedMask()   >> RedShift();   }
DWORD PixelFormat::GreenSize()  const { return GreenMask() >> GreenShift(); }
DWORD PixelFormat::BlueSize()   const { return BlueMask()  >> BlueShift();  }
DWORD PixelFormat::AlphaSize()  const { return AlphaMask() >> AlphaShift(); }

DWORD PixelFormat::RedShift()   const { return GetShift(RedMask());   }
DWORD PixelFormat::GreenShift() const { return GetShift(GreenMask()); }
DWORD PixelFormat::BlueShift()  const { return GetShift(BlueMask());  }
DWORD PixelFormat::AlphaShift() const { return GetShift(AlphaMask()); }

Pixel PixelFormat::MakePixel(DWORD red, DWORD green, DWORD blue) const
{
    return Pixel::Create(
          ((red   << RedShift()  ) & RedMask()  )
        | ((green << GreenShift()) & GreenMask())
        | ((blue  << BlueShift() ) & BlueMask() ));
}

Pixel PixelFormat::MakePixel(const Color& color) const
{
    return
        MakePixel(
            int(color.GetRed()   * RedSize()  ),
            int(color.GetGreen() * GreenSize()),
            int(color.GetBlue()  * BlueSize() )
        );

    // !!! this causes all of the artwork to change slightly
    //     since the rounding mode is different

    /*
    return
        MakePixel(
            MakeInt(color.GetRed()   * RedSize()  ),
            MakeInt(color.GetGreen() * GreenSize()),
            MakeInt(color.GetBlue()  * BlueSize() )
        );
    */
}

Color PixelFormat::MakeColor(Pixel pixel) const
{
    return
        Color(
            (float)((pixel.Value() &   RedMask()) >>   RedShift()) /   RedSize(),
            (float)((pixel.Value() & GreenMask()) >> GreenShift()) / GreenSize(),
            (float)((pixel.Value() &  BlueMask()) >>  BlueShift()) /  BlueSize()
        );
}

void PixelFormat::SetPixel(BYTE* pb, Pixel pixel) const
{
    switch (PixelBytes()) {
        case 1:         *pb = (BYTE)(pixel.Value()); break;
        case 2:  *(WORD*)pb = (WORD)(pixel.Value()); break;
        case 3:
            pb[0] = (BYTE)(((pixel.Value()) >>  0) & 0xff);
            pb[1] = (BYTE)(((pixel.Value()) >>  8) & 0xff);
            pb[2] = (BYTE)(((pixel.Value()) >> 16) & 0xff);
            break;
        case 4: *(DWORD*)pb = (pixel.Value()); break;
    }
}

Pixel PixelFormat::GetPixel(const BYTE* pb) const
{
    switch (PixelBytes()) {
        case 1: return Pixel::Create(*pb);
        case 2: return Pixel::Create(*(WORD*)pb);
        case 3:
            return
                Pixel::Create(
                      (DWORD(pb[0]) <<  0)
                    | (DWORD(pb[1]) <<  8)
                    | (DWORD(pb[2]) << 16)
                );
        case 4: return Pixel::Create(*(DWORD*)pb);
    }

    return Pixel::Create(0);
}

void PixelFormat::SetColor(BYTE* pb, const Color& color) const
{
    SetPixel(pb, MakePixel(color));
}

Color PixelFormat::GetColor(const BYTE* pb) const
{
    return MakeColor(GetPixel(pb));
}

bool PixelFormat::ValidGDIFormat() const
{
    BitMask mask(m_flags);

    //
    // gdi doesn't support alpha
    //

    if (mask.Test(BitMask(DDPF_ALPHA | DDPF_ALPHAPIXELS))) {
        return false;
    }

    if (m_bits == 8) {
        //
        // 8 bpp must be palettized
        //

        return mask.Test(BitMask(DDPF_PALETTEINDEXED8));
    } else if (m_bits > 8) {
        //
        // 16 bpp must be RGB
        //

        return mask.Test(BitMask(DDPF_RGB));
    }

    //
    // less than 8 bpp not supported
    //

    return false;
}

bool PixelFormat::Equivalent(const DDPIXELFORMAT& ddpf) const
{
    return Equivalent(
        ddpf.dwRGBBitCount,
        ddpf.dwFlags,
        ddpf.dwRBitMask,
        ddpf.dwGBitMask,
        ddpf.dwBBitMask,
        ddpf.dwRGBAlphaBitMask
    );
}

bool PixelFormat::Equivalent(DWORD bits, DWORD flags, DWORD redMask, DWORD greenMask, DWORD blueMask, DWORD alphaMask) const
{
    return
           m_flags     == flags
        && m_bits      == bits
        && m_redMask   == redMask
        && m_greenMask == greenMask
        && m_blueMask  == blueMask
        && m_alphaMask == alphaMask;
}

//////////////////////////////////////////////////////////////////////////////
//
// DX9 format conversion
//
//////////////////////////////////////////////////////////////////////////////

// D3DFORMAT values from d3d9types.h — duplicated here so we don't
// require the DX9 SDK headers in every translation unit.
static const int D3DFMT_R5G6B5_VALUE   = 23;
static const int D3DFMT_X1R5G5B5_VALUE = 24;
static const int D3DFMT_A1R5G5B5_VALUE = 25;
static const int D3DFMT_R8G8B8_VALUE   = 20;
static const int D3DFMT_A8R8G8B8_VALUE = 21;
static const int D3DFMT_X8R8G8B8_VALUE = 22;
static const int D3DFMT_UNKNOWN_VALUE  = 0;

int PixelFormat::ToD3D9Format() const
{
    if (m_bits == 16) {
        if (m_redMask == 0xF800 && m_greenMask == 0x07E0 && m_blueMask == 0x001F)
            return D3DFMT_R5G6B5_VALUE;
        if (m_redMask == 0x7C00 && m_greenMask == 0x03E0 && m_blueMask == 0x001F) {
            if (m_alphaMask == 0x8000)
                return D3DFMT_A1R5G5B5_VALUE;
            return D3DFMT_X1R5G5B5_VALUE;
        }
    } else if (m_bits == 24) {
        if (m_redMask == 0xFF0000 && m_greenMask == 0x00FF00 && m_blueMask == 0x0000FF)
            return D3DFMT_R8G8B8_VALUE;
    } else if (m_bits == 32) {
        if (m_redMask == 0x00FF0000 && m_greenMask == 0x0000FF00 && m_blueMask == 0x000000FF) {
            if (m_alphaMask == 0xFF000000)
                return D3DFMT_A8R8G8B8_VALUE;
            return D3DFMT_X8R8G8B8_VALUE;
        }
    }

    return D3DFMT_UNKNOWN_VALUE;
}

//////////////////////////////////////////////////////////////////////////////
//
// constructor
//
//////////////////////////////////////////////////////////////////////////////

bool FillDDPF(
    DDPixelFormat& ddpf,
    IDirectDrawX* pdd,
    HDC hdc,
    HBITMAP hbitmap,
    IDirectDrawPalette** pppalette
) {
    BYTE        ajBitmapInfo[sizeof(BITMAPINFO) + 3 * sizeof(DWORD)];
    BITMAPINFO* pbmi = (BITMAPINFO*)ajBitmapInfo;
    BOOL        bRet = FALSE;

    memset(pbmi, 0, sizeof(ajBitmapInfo));
    pbmi->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    ZVerify(::GetDIBits(hdc, hbitmap, 0, 0, NULL, pbmi, DIB_RGB_COLORS));

    ddpf.dwFlags           = DDPF_RGB;
    ddpf.dwRGBBitCount     = pbmi->bmiHeader.biBitCount;
    ddpf.dwRGBAlphaBitMask = 0;

    switch(pbmi->bmiHeader.biCompression) {
        //
        // Default DIB format.  Color masks are implicit for each bit depth.
        //

        case BI_RGB:
            switch (ddpf.dwRGBBitCount) {
                case 4:
                case 8:
                {
                    ddpf.dwFlags |= ((ddpf.dwRGBBitCount == 4) ? DDPF_PALETTEINDEXED4 : DDPF_PALETTEINDEXED8);

                    //
                    // Create a palette for the surface
                    //

                    RGBQUAD prgb[256];
                    int ncolors = GetDIBColorTable(hdc, 0, 256, prgb);

                    ZAssert(ncolors == (1 << ddpf.dwRGBBitCount));

                    PALETTEENTRY ppe[256];

                    //
                    // convert BGR to RGB
                    //

                    for (int index = 0; index < ncolors; index++) {
                        ppe[index].peRed   = prgb[index].rgbRed;
                        ppe[index].peGreen = prgb[index].rgbGreen;
                        ppe[index].peBlue  = prgb[index].rgbBlue;
                    }

                    //
                    // create a DirectDraw palette for the texture.
                    //

                    DDCall(pdd->CreatePalette(
                        (ddpf.dwRGBBitCount == 4) ? DDPCAPS_4BIT : DDPCAPS_8BIT,
                        ppe,
                        pppalette,
                        NULL
                    ));

                    return true;
                }

                case 16:
                    // 16bpp default is 555 BGR-ordering

                    ddpf.dwRBitMask = MakeMask(5, 10);
                    ddpf.dwGBitMask = MakeMask(5,  5);
                    ddpf.dwBBitMask = MakeMask(5,  0);

                    return true;

                case 24:
                case 32:
                    // 24 and 32bpp default is 888 BGR-ordering

                    ddpf.dwRBitMask = MakeMask(8, 16);
                    ddpf.dwGBitMask = MakeMask(8,  8);
                    ddpf.dwBBitMask = MakeMask(8,  0);

                    return true;
            }
            break;

        case BI_BITFIELDS:

            //
            // Call a second time to get the color masks.
            // It's a GetDIBits Win32 "feature".
            //

            ZVerify(::GetDIBits(hdc, hbitmap, 0, pbmi->bmiHeader.biHeight, NULL, pbmi, DIB_RGB_COLORS));

            ddpf.dwRBitMask = *(DWORD *)&pbmi->bmiColors[0];
            ddpf.dwGBitMask = *(DWORD *)&pbmi->bmiColors[1];
            ddpf.dwBBitMask = *(DWORD *)&pbmi->bmiColors[2];

            return true;
    }

    return false;
}
