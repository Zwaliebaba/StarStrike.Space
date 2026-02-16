#ifndef _pixelformat_h_
#define _pixelformat_h_

//////////////////////////////////////////////////////////////////////////////
//
// Pixel Formats
//
//////////////////////////////////////////////////////////////////////////////

class PixelFormat : public IObject {
private:
    DWORD m_bits;
    DWORD m_redMask;
    DWORD m_greenMask;
    DWORD m_blueMask;
    DWORD m_alphaMask;
    DWORD m_flags;
    bool  m_bSoftwareTexture;

    void SetSoftwareTexture()
    {
        m_bSoftwareTexture = true;
    }

    PixelFormat(const DDPIXELFORMAT& ddpf) :
        m_bits(ddpf.dwRGBBitCount),
        m_redMask(ddpf.dwRBitMask),
        m_greenMask(ddpf.dwGBitMask),
        m_blueMask(ddpf.dwBBitMask),
        m_alphaMask(ddpf.dwRGBAlphaBitMask),
        m_flags(ddpf.dwFlags),
        m_bSoftwareTexture(false)
    {
    }

    friend class EngineImpl;

public:
    PixelFormat(
        int   bits,
        DWORD redMask,
        DWORD greenMask,
        DWORD blueMask,
        DWORD alphaMask
    );

    // Legacy DX7 compatibility — constructs a DDPIXELFORMAT on demand
    DDPIXELFORMAT GetDDPF() const;

    void SetPixelBits(DWORD value) { m_bits = value; }

    bool IsSoftwareTexture() { return m_bSoftwareTexture; }

    DWORD PixelBits()  const { return m_bits;         }
    DWORD PixelBytes() const { return m_bits / 8;     }
    DWORD RedMask()    const { return m_redMask;      }
    DWORD GreenMask()  const { return m_greenMask;    }
    DWORD BlueMask()   const { return m_blueMask;     }
    DWORD AlphaMask()  const { return m_alphaMask;    }
    DWORD Flags()      const { return m_flags;        }

    DWORD RedSize()    const;
    DWORD GreenSize()  const;
    DWORD BlueSize()   const;
    DWORD AlphaSize()  const;

    DWORD RedShift()   const;
    DWORD GreenShift() const;
    DWORD BlueShift()  const;
    DWORD AlphaShift() const;

    Pixel MakePixel(DWORD red, DWORD green, DWORD blue) const;
    Pixel MakePixel(const Color& color)                 const;
    Color MakeColor(Pixel pixel)                        const;
    void  SetPixel(BYTE* pb, Pixel pixel)               const;
    Pixel GetPixel(const BYTE* pb)                      const;
    void  SetColor(BYTE* pb, const Color& color)        const;
    Color GetColor(const BYTE* pb)                      const;
    bool  ValidGDIFormat()                              const;

    bool Equivalent(const DDPIXELFORMAT& ddpf) const;
    bool Equivalent(DWORD bits, DWORD flags, DWORD redMask, DWORD greenMask, DWORD blueMask, DWORD alphaMask) const;

    // DX9 migration: converts this pixel format to the closest D3DFORMAT.
    // Returns a value castable to D3DFORMAT (defined as int to avoid
    // requiring d3d9types.h in every translation unit).
    int ToD3D9Format() const;
};

#endif
