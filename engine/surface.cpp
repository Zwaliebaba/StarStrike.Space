#include "pch.h"

//////////////////////////////////////////////////////////////////////////////
//
// Surface
//
//////////////////////////////////////////////////////////////////////////////

class PrivateSurfaceImpl : public PrivateSurface
{
public:
  //////////////////////////////////////////////////////////////////////////////
  //
  // Members
  //
  //////////////////////////////////////////////////////////////////////////////

  //
  // Debug Info
  //

  ZString m_strName;
  bool m_bDeviceFormat;
  bool m_bInContext;

  //
  // Surface Description
  //

  int m_id;
  WinPoint m_size;
  int m_pitch;
  TRef<PixelFormat> m_ppf;
  BYTE *m_pbits;
  TRef<PrivatePalette> m_ppalette;
  TRef<IObject> m_pobjectMemory;

  bool m_bColorKey;
  Color m_colorKey;

  //
  // Device Format surfaces
  //

  TRef<PrivateEngine> m_pengine;
  TRef<SurfaceSite> m_psite;

  //
  // Video Surface
  //

  TRef<VideoSurface> m_pvideoSurface;
  SurfaceType m_stype;

  //
  // Format convertion
  //

  int m_idConverted;
  TRef<PixelFormat> m_ppfConverted;
  TRef<PrivateSurfaceImpl> m_psurfaceConverted;

  //
  // Drawing
  //

  TRef<PrivateContext> m_pcontext;

  //
  // Transforms and clipping
  //

  WinPoint m_pointOffset;
  WinRect m_rectClip;
  WinPoint m_pointOffsetSave;
  WinRect m_rectClipSave;

  //////////////////////////////////////////////////////////////////////////////
  //
  //
  //
  //////////////////////////////////////////////////////////////////////////////

  void Initialize()
  {
    m_pointOffset = WinPoint(0, 0);
    m_rectClip = WinRect(WinPoint(0, 0), m_size);

    m_bColorKey = false;
    m_bInContext = false;

    m_colorKey = Color(0, 0, 0);

    m_id = 0;
    m_idConverted = -1;
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // 
  //
  //////////////////////////////////////////////////////////////////////////////

  void AllocateSurface()
  {
    if (m_stype.Test(SurfaceTypeVideo())) { m_pvideoSurface = m_pengine->CreateVideoSurface(m_stype, m_ppf, m_ppalette, m_size, m_pitch, m_pbits); }
    else
    {
      m_pitch = (m_size.X() * m_ppf->PixelBytes() + 3) & (~0x3);
      m_pbits = new BYTE[m_pitch * m_size.Y()];
    }
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // A device format surface
  //
  //////////////////////////////////////////////////////////////////////////////

  PrivateSurfaceImpl(PrivateEngine *pengine, PixelFormat *ppf, PrivatePalette *ppalette, const WinPoint &size, SurfaceType stype, SurfaceSite *psite)
    : m_bDeviceFormat(true),
      m_size(size),
      m_ppf(ppf),
      m_pbits(nullptr),
      m_ppalette(ppalette),
      m_pengine(pengine),
      m_psite(psite),
      m_stype(stype)
  {
    Initialize();
    AllocateSurface();

    if (m_psite) m_psite->UpdateSurface(this);
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Wrap a previously created VideoSurface
  //
  //////////////////////////////////////////////////////////////////////////////

  PrivateSurfaceImpl(PrivateEngine *pengine, VideoSurface *pvideoSurface, SurfaceSite *psite)
    : m_bDeviceFormat(false),
      m_size(pvideoSurface->GetSize()),
      m_pitch(pvideoSurface->GetPitch()),
      m_ppf(pvideoSurface->GetPixelFormat()),
      m_pbits(nullptr),
      m_pengine(pengine),
      m_psite(psite),
      m_pvideoSurface(pvideoSurface),
      m_stype(pvideoSurface->GetSurfaceType()) { Initialize(); }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Create a surface from a binary representation
  //
  //////////////////////////////////////////////////////////////////////////////

  PrivateSurfaceImpl(PrivateEngine *pengine, PixelFormat *ppf, PrivatePalette *ppalette, const WinPoint &size, int pitch, BYTE *pdata, IObject *pobjectMemory)
    : m_bDeviceFormat(false),
      m_size(size),
      m_pitch(pitch),
      m_ppf(ppf),
      m_pbits(pdata),
      m_ppalette(ppalette),
      m_pobjectMemory(pobjectMemory),
      m_pengine(pengine),
      m_stype(SurfaceType2D()) { Initialize(); }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Write a surface to a binary MDL file
  //
  //////////////////////////////////////////////////////////////////////////////

  void Write(ZFile *pfile) override
  {
    BinarySurfaceInfo bsi;

    bsi.m_size = m_size;
    bsi.m_pitch = m_pitch;
    bsi.m_bitCount = m_ppf->PixelBits();
    bsi.m_redMask = m_ppf->RedMask();
    bsi.m_greenMask = m_ppf->GreenMask();
    bsi.m_blueMask = m_ppf->BlueMask();
    bsi.m_alphaMask = m_ppf->AlphaMask();
    bsi.m_bColorKey = m_bColorKey;

    pfile->Write(&bsi, sizeof(bsi));
    pfile->Write(m_pbits, m_pitch * m_size.Y());
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // More constructors
  //
  //////////////////////////////////////////////////////////////////////////////

  TRef<Surface> CreateCompatibleSurface(const WinPoint &size, SurfaceType stype, SurfaceSite *psite) override { return m_pengine->CreateCompatibleSurface(this, size, stype, psite); }

  TRef<Surface> Copy() override
  {
    TRef<Surface> psurface = m_pengine->CreateCompatibleSurface(this, m_size, GetSurfaceType(), m_psite);

    //  : turn off color key while blting

    psurface->BitBlt(WinPoint(0, 0), this);
    return psurface;
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Destructor
  //
  //////////////////////////////////////////////////////////////////////////////

  ~PrivateSurfaceImpl() override
  {
    m_pengine->RemovePrivateSurface(this);
    if (m_pobjectMemory == nullptr && m_pbits != nullptr) delete m_pbits;
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Site
  //
  //////////////////////////////////////////////////////////////////////////////

  void SetSite(SurfaceSite *psite) override { m_psite = psite; }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Device Specific Surface
  //
  //////////////////////////////////////////////////////////////////////////////

  void ClearDevice() override { m_pvideoSurface = nullptr; }

  void SetPixelFormat(PixelFormat *ppf) override
  {
    ZAssert(m_pobjectMemory == NULL);
    ZAssert(m_ppalette == NULL);

    m_pcontext = nullptr;
    m_pvideoSurface = nullptr;

    if (m_pbits)
    {
      delete m_pbits;
      m_pbits = nullptr;
    }

    m_ppf = ppf;
    AllocateSurface();

    if (m_psite) m_psite->UpdateSurface(this);
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Surface updates
  //
  //////////////////////////////////////////////////////////////////////////////

  void SurfaceChanged()
  {
    m_id++;
    if (m_id < 0) m_id = 0;
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Attributes
  //
  //////////////////////////////////////////////////////////////////////////////

  VideoSurface *GetVideoSurfaceNoAlloc() override { return m_pvideoSurface; }

  VideoSurface *GetVideoSurface() override
  {
    if (m_pvideoSurface == nullptr)
    {
      ZAssert(m_pbits != NULL);

      m_pvideoSurface = m_pengine->CreateVideoSurface(m_stype, m_ppf, m_ppalette, m_size, m_pitch, m_pbits);

      //
      // If this surface has a color set the color key on all of the DD Surfaces
      //

      if (HasColorKey()) SetColorKey(GetColorKey());
    }

    return m_pvideoSurface;
  }

  PixelFormat *GetPixelFormat() override { return m_ppf; }

  Palette *GetPalette() override { return m_ppalette; }

  void SetName(const ZString &str) override { m_strName = str; }

  const ZString &GetName() { return m_strName; }

  Engine *GetEngine() override { return m_pengine; }

  const WinPoint &GetSize() override { return m_size; }

  WinRect GetRect() { return WinRect(WinPoint(0, 0), m_size); }

  SurfaceType GetSurfaceType() override { return m_stype; }

  bool HasColorKey() override { return m_bColorKey; }

  const Color &GetColorKey() override
  {
    ZAssert(m_bColorKey);
    return m_colorKey;
  }

  void SetColorKey(const Color &color) override
  {
    m_bColorKey = true;
    m_colorKey = color;

    if (m_pvideoSurface) m_pvideoSurface->SetColorKey(color);

    if (m_psurfaceConverted) m_psurfaceConverted->SetColorKey(color);
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Drawing context
  //
  //////////////////////////////////////////////////////////////////////////////

  Context *GetContext() override
  {
    ZAssert(!m_bInContext);

    m_bInContext = true;

    if (m_pcontext == nullptr) m_pcontext = CreateContextImpl(this);

    if (m_pcontext->IsValid())
    {
      //
      // Remove any offset or clipping
      //

      m_rectClipSave = m_rectClip;
      m_rectClip = WinRect(WinPoint(0, 0), m_size);
      m_pointOffsetSave = m_pointOffset;
      m_pointOffset = WinPoint(0, 0);

      m_pcontext->BeginRendering();

      return m_pcontext;
    }

    m_pcontext = nullptr;
    m_bInContext = false;
    return nullptr;
  }

  void ReleaseContext(Context *pcontext) override
  {
    ZAssert(m_bInContext);
    ZAssert(m_pcontext == pcontext);

    m_bInContext = false;

    m_pcontext->EndRendering();

    m_pointOffset = m_pointOffsetSave;
    m_rectClip = m_rectClipSave;
  }

  PrivateSurface *GetConvertedSurface(PixelFormat *ppf)
  {
    if (ppf == m_ppf) return this;
    if (ppf != m_ppfConverted || m_idConverted != m_id)
    {
      if (ppf != m_ppfConverted)
      {
        //
        // Create a surface with the requested pixel format
        //

        m_ppfConverted = ppf;

        m_psurfaceConverted = new PrivateSurfaceImpl(m_pengine, ppf, nullptr, m_size, m_stype, nullptr);
      }

      if (HasColorKey()) m_psurfaceConverted->SetColorKey(GetColorKey());

      m_idConverted = m_id - 1;
    }

    //
    // Do the bits need to be updated?
    //

    if (m_idConverted != m_id)
    {
      //
      // Do a conversion blt
      //

      m_psurfaceConverted->BltConvert(WinPoint(0, 0), this, WinRect(WinPoint(0, 0), m_size));

      m_idConverted = m_id;
    }

    return m_psurfaceConverted;
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Surface Access calls
  //
  //////////////////////////////////////////////////////////////////////////////

  int GetPitch() override
  {
    if (m_pvideoSurface) return m_pvideoSurface->GetPitch();
    return m_pitch;
  }

  const BYTE *GetPointer() override
  {
    if (m_pvideoSurface && (!m_pvideoSurface->IsMemoryShared())) return m_pvideoSurface->GetPointer();
    return m_pbits;
  }

  const BYTE *GetPointer(const WinPoint &point) override { return GetPointer() + point.Y() * GetPitch() + point.X() * m_ppf->PixelBytes(); }

  BYTE *GetWritablePointer() override
  {
    SurfaceChanged();

    if (m_pvideoSurface && (!m_pvideoSurface->IsMemoryShared())) return m_pvideoSurface->GetPointer();
    return m_pbits;
  }

  BYTE *GetWritablePointer(const WinPoint &point) override { return GetWritablePointer() + point.Y() * GetPitch() + point.X() * m_ppf->PixelBytes(); }

  void ReleasePointer() override { if (m_pbits == nullptr) m_pvideoSurface->ReleasePointer(); }

  Pixel GetPixel(const WinPoint &point) override { return m_ppf->GetPixel(GetPointer(point)); }

  Color GetColor(const WinPoint &point) override
  {
    if (m_ppalette) return m_ppalette->GetColor(GetPixel(point).Value());
    return m_ppf->MakeColor(GetPixel(point));
  }

  void SetPixel(const WinPoint &point, Pixel pixel) override { m_ppf->SetPixel(GetWritablePointer(point), pixel); }

  void SetColor(const WinPoint &point, const Color &color) override
  {
    ZAssert(m_ppalette == NULL);
    SetPixel(point, m_ppf->MakePixel(color));
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Clipping and transforms
  //
  //////////////////////////////////////////////////////////////////////////////

  void Offset(const WinPoint &pointOffset) override { m_pointOffset += pointOffset; }

  const WinPoint &GetOffset() override { return m_pointOffset; }

  WinRect GetClipRect() override
  {
    WinRect rect = m_rectClip;
    rect.Offset(-m_pointOffset);
    return rect;
  }

  void SetClipRect(const WinRect &rectLocal) override
  {
    WinRect rectClip(rectLocal);
    rectClip.Offset(m_pointOffset);
    m_rectClip.Intersect(rectClip);
  }

  void RestoreClipRect(const WinRect &rectLocal) override
  {
    m_rectClip = rectLocal;
    m_rectClip.Offset(m_pointOffset);
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // GDI calls
  //
  //////////////////////////////////////////////////////////////////////////////

  void DrawString(IEngineFont *pfont, const Color &color, const WinPoint &point, const ZString &str) override { pfont->DrawString(this, point + m_pointOffset, m_rectClip, str, color); }

  void DrawStringWithShadow(IEngineFont *pfont, const Color &color, const Color &colorShadow, const WinPoint &point, const ZString &str) override
  {
    DrawString(pfont, colorShadow, point + WinPoint(1, 1), str);
    DrawString(pfont, color, point, str);
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Format converting blt
  //
  //////////////////////////////////////////////////////////////////////////////

  void BltConvert(const WinPoint &point, PrivateSurfaceImpl *psurfaceSource, const WinRect &rectSource)
  {
    //
    // Source info
    //

    PixelFormat *ppfSource = psurfaceSource->GetPixelFormat();
    const BYTE *psource = psurfaceSource->GetPointer(rectSource.Min());
    int pitchSource = psurfaceSource->GetPitch();
    int bytesSource = ppfSource->PixelBytes();

    //
    // Dest info
    //

    BYTE *pdest = GetWritablePointer(point);
    int bytesDest = m_ppf->PixelBytes();
    int pitchDest = GetPitch();

    //
    // Do the appropriate blt
    //

    if (bytesSource == bytesDest && ppfSource->RedMask() == m_ppf->RedMask() && ppfSource->GreenMask() == m_ppf->GreenMask() && ppfSource->BlueMask() == m_ppf->BlueMask() && ppfSource->AlphaMask() == m_ppf->AlphaMask())
    {
      //
      // Same pixel format — straight memcpy per scanline
      //

      int scanSize = rectSource.XSize() * bytesSource;

      for (int y = rectSource.YSize(); y > 0; y--)
      {
        memcpy(pdest, psource, scanSize);
        psource += pitchSource;
        pdest += pitchDest;
      }
    }
    else if (bytesSource == 2 && bytesDest == 2)
    {
      //
      // 16-bit to 16-bit (555 <-> 565)
      //

      ZAssert(ppfSource->RedSize() == 0x1f);
      ZAssert(ppfSource->BlueSize() == 0x1f);

      ZAssert(m_ppf->RedSize() == 0x1f);
      ZAssert(m_ppf->BlueSize() == 0x1f);

      if (ppfSource->GreenSize() == 0x1f)
      {
        //
        // Convert 555 to 565
        //

        ZAssert(m_ppf->GreenSize() == 0x3f);

        for (int y = rectSource.YSize(); y > 0; y--)
        {
          for (int x = 0; x < rectSource.XSize(); x++)
          {
            WORD wSource = ((WORD *) psource)[x];
            WORD wDest = ((wSource & 0xffe0) << 1) | (wSource & 0x1f);

            ((WORD *) pdest)[x] = wDest;
          }
          psource += pitchSource;
          pdest += pitchDest;
        }
      }
      else
      {
        //
        // Convert 565 to 555
        //

        ZAssert(ppfSource->GreenSize() == 0x3f);
        ZAssert(m_ppf ->GreenSize() == 0x1f);

        for (int y = rectSource.YSize(); y > 0; y--)
        {
          for (int x = 0; x < rectSource.XSize(); x++)
          {
            WORD wSource = ((WORD *) psource)[x];
            WORD wDest = ((wSource >> 1) & 0xffe0) | (wSource & 0x1f);

            ((WORD *) pdest)[x] = wDest;
          }
          psource += pitchSource;
          pdest += pitchDest;
        }
      }
    }
    else
    {
      //
      // Generic conversion — handles all format combinations including
      // 16<->32, 24<->32, different channel layouts, etc.
      //

      for (int y = rectSource.YSize(); y > 0; y--)
      {
        for (int x = 0; x < rectSource.XSize(); x++) { m_ppf->SetColor(pdest + x * bytesDest, ppfSource->GetColor(psource + x * bytesSource)); }
        psource += pitchSource;
        pdest += pitchDest;
      }
    }

    psurfaceSource->ReleasePointer();
    ReleasePointer();
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Blts
  //
  //////////////////////////////////////////////////////////////////////////////

  void UnclippedBltHandled(PrivateSurface *psurfaceSource, const WinRect &rect, const WinPoint &pointSource, BYTE *pdest)
  {
    const BYTE *psource = psurfaceSource->GetPointer(pointSource);
    int pitchSource = psurfaceSource->GetPitch();
    int pitchDest = GetPitch();
    int scanSize = rect.XSize() * m_ppf->PixelBytes();
    int ysize = rect.YSize();

    if (psurfaceSource->HasColorKey())
    {
      int pixelBytes = m_ppf->PixelBytes();
      int xsize = rect.XSize();

      if (pixelBytes == 2)
      {
        for (int y = 0; y < ysize; y++)
        {
          const WORD *src = reinterpret_cast<const WORD *>(psource);
          WORD *dst = reinterpret_cast<WORD *>(pdest);

          for (int x = 0; x < xsize; x++)
          {
            WORD pixel = src[x];
            if (pixel != 0) dst[x] = pixel;
          }

          psource += pitchSource;
          pdest += pitchDest;
        }
      }
      else if (pixelBytes == 4)
      {
        for (int y = 0; y < ysize; y++)
        {
          const DWORD *src = reinterpret_cast<const DWORD *>(psource);
          DWORD *dst = reinterpret_cast<DWORD *>(pdest);

          for (int x = 0; x < xsize; x++)
          {
            DWORD pixel = src[x];
            if (pixel != 0) dst[x] = pixel;
          }

          psource += pitchSource;
          pdest += pitchDest;
        }
      }
      else if (pixelBytes == 3)
      {
        for (int y = 0; y < ysize; y++)
        {
          for (int x = 0; x < xsize; x++)
          {
            int offset = x * 3;
            BYTE b0 = psource[offset + 0];
            BYTE b1 = psource[offset + 1];
            BYTE b2 = psource[offset + 2];

            if (b0 != 0 || b1 != 0 || b2 != 0)
            {
              pdest[offset + 0] = b0;
              pdest[offset + 1] = b1;
              pdest[offset + 2] = b2;
            }
          }

          psource += pitchSource;
          pdest += pitchDest;
        }
      }
      else
      {
        ZAssert(false);
      }
    }
    else
    {
      for (int y = 0; y < ysize; y++)
      {
        memcpy(pdest, psource, scanSize);
        psource += pitchSource;
        pdest += pitchDest;
      }
    }
  }

  void UnclippedBlt(const WinRect &rect, PrivateSurfaceImpl *psurfaceSourceOriginal, const WinPoint &pointSource)
  {
    ZAssert(rect.XMin() >= 0);
    ZAssert(rect.XMax() <= m_size.X());
    ZAssert(rect.YMin() >= 0);
    ZAssert(rect.YMax() <= m_size.Y());
    ZAssert(rect.XSize() + pointSource.X() <= psurfaceSourceOriginal->GetSize().X());
    ZAssert(rect.YSize() + pointSource.Y() <= psurfaceSourceOriginal->GetSize().Y());

    if (rect.XSize() == 0 || rect.YSize() == 0) return;

    PrivateSurface *psurfaceSource = psurfaceSourceOriginal->GetConvertedSurface(m_ppf);
    ZAssert(psurfaceSource->GetPixelFormat() == m_ppf);

    /* Uncomment this code to use DDraw for blts
    if (m_pbits == NULL) {
        m_pvideoSurface->UnclippedBlt(
            rect, 
            psurfaceSource->GetVideoSurface(), 
            pointSource
        );
    } else*/
    {
      BYTE *pdest = GetWritablePointer(rect.Min());

      __try { UnclippedBltHandled(psurfaceSource, rect, pointSource, pdest); }
      __except (true)
      {
        //
        // DDraw took away our access to some video memory.  Ignore the exception
        // and continue.
        //
      }

      psurfaceSource->ReleasePointer();
      ReleasePointer();
    }
  }

  void BitBlt(const WinPoint &point, Surface *psurfaceSourceArg, const WinRect &rectSourceArg) override
  {
    auto psurfaceSource = static_cast<PrivateSurfaceImpl *>(psurfaceSourceArg);

    //
    // Calculate the target rectangle
    //

    WinPoint origin = point + m_pointOffset;
    WinRect rectTarget(origin, origin + rectSourceArg.Size());

    //
    // Clip it to the surface
    //

    rectTarget.Intersect(m_rectClip);

    //
    // Only blt if the target isn't empty
    //

    if (!rectTarget.IsEmpty())
    {
      //
      // adjust the source rect to match the target rect
      //

      WinPoint SourceOrigin = rectSourceArg.Min() + (rectTarget.Min() - origin);
      WinRect rectSource(SourceOrigin, SourceOrigin + rectTarget.Size());

      //
      // do the blt
      //

      UnclippedBlt(rectTarget, psurfaceSource, rectSource.Min());
    }

    SurfaceChanged();
  }

  void BitBlt(const WinPoint &point, Surface *psurfaceSource) override { BitBlt(point, psurfaceSource, WinRect(WinPoint(0, 0), psurfaceSource->GetSize())); }

  void BitBltFromCenter(const WinPoint &point, Surface *psurfaceSource) override { BitBlt(point - psurfaceSource->GetSize() / 2, psurfaceSource); }

  //////////////////////////////////////////////////////////////////////////////
  //
  // StretchBlts
  //
  //////////////////////////////////////////////////////////////////////////////

  void BitBlt(const WinRect &rectTargetArg, Surface *psurfaceSourceArg, const WinRect &rectSource) override
  {
    auto psurfaceSource = static_cast<PrivateSurfaceImpl *>(psurfaceSourceArg);

    //
    // Calculate the target rectangle
    //

    WinRect rectTarget = rectTargetArg;
    rectTarget.Offset(m_pointOffset);

    // !!! this function is unclipped
    // !!! rectTarget.Intersect(m_rectClip);

    //
    // Only blt if the target isn't empty
    //

    if (!rectTarget.IsEmpty())
    {
      //
      // do the blt
      //

      GetVideoSurface()->UnclippedBlt(rectTarget, psurfaceSource->GetVideoSurface(), rectSource, HasColorKey());
    }

    SurfaceChanged();
  }

  void BitBlt(const WinRect &rectTarget, Surface *psurfaceSource) override { BitBlt(rectTarget, psurfaceSource, WinRect(WinPoint(0, 0), psurfaceSource->GetSize())); }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Direct Draw Fills
  //
  //////////////////////////////////////////////////////////////////////////////

  void UnclippedFill(const WinRect &rect, Pixel pixel)
  {
    ZAssert(rect.XMin() >= 0);
    ZAssert(rect.XMax() <= m_size.X());
    ZAssert(rect.YMin() >= 0);
    ZAssert(rect.YMax() <= m_size.Y());

    if (m_pbits == nullptr) m_pvideoSurface->UnclippedFill(rect, pixel);
    else
    {
      BYTE *pdest = GetWritablePointer(rect.Min());
      int pitch = GetPitch();
      int pixelBytes = m_ppf->PixelBytes();

      if (pixelBytes == 2)
      {
        WORD wPixel = static_cast<WORD>(pixel.Value());

        for (int y = rect.YSize(); y > 0; y--)
        {
          for (int x = 0; x < rect.XSize(); x++) ((WORD *) pdest)[x] = wPixel;
          pdest += pitch;
        }
      }
      else if (pixelBytes == 3)
      {
        DWORD dwPixel = pixel.Value();
        BYTE b0 = static_cast<BYTE>(dwPixel);
        BYTE b1 = static_cast<BYTE>(dwPixel >> 8);
        BYTE b2 = static_cast<BYTE>(dwPixel >> 16);

        for (int y = rect.YSize(); y > 0; y--)
        {
          for (int x = 0; x < rect.XSize(); x++)
          {
            pdest[x * 3 + 0] = b0;
            pdest[x * 3 + 1] = b1;
            pdest[x * 3 + 2] = b2;
          }
          pdest += pitch;
        }
      }
      else if (pixelBytes == 4)
      {
        DWORD dwPixel = pixel.Value();

        for (int y = rect.YSize(); y > 0; y--)
        {
          for (int x = 0; x < rect.XSize(); x++) ((DWORD *) pdest)[x] = dwPixel;
          pdest += pitch;
        }
      }
      else
        ZAssert(false);

      ReleasePointer();
    }
  }

  void FillRect(const WinRect &rectArg, Pixel pixel) override
  {
    //
    // Offset the rect to the origin of the surface
    //

    WinRect rect = rectArg;
    rect.Offset(m_pointOffset);

    //
    // Clip it to the surface
    //

    rect.Intersect(m_rectClip);

    //
    // Only blt if the target isn't empty
    //

    if (!rect.IsEmpty()) UnclippedFill(rect, pixel);

    SurfaceChanged();
  }

  void FillRect(const WinRect &rect, const Color &color) override { FillRect(rect, m_ppf->MakePixel(color)); }

  void FillSurface(Pixel pixel) override { FillRect(WinRect(-m_pointOffset, m_size - m_pointOffset), pixel); }

  void FillSurface(const Color &color) override { FillSurface(m_ppf->MakePixel(color)); }

  void FillSurfaceWithColorKey() override { FillSurface(m_colorKey); }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Load a surface from a bitmap
  //
  //////////////////////////////////////////////////////////////////////////////

  void BitBltFromDC(HDC hdc) override { GetVideoSurface()->BitBltFromDC(hdc); }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Save the surface to a file
  //
  //////////////////////////////////////////////////////////////////////////////

  void Save(ZFile *pfile) override
  {
    ZAssert(m_ppf->PixelBits() == 16);

    BITMAPFILEHEADER bmfh;
    BITMAPINFOHEADER bmih;

    int sizeHeader = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER) + 12;
    int sizeBits = m_pitch * m_size.Y();

    bmfh.bfType = 0x4d42;
    bmfh.bfSize = sizeHeader + sizeBits;
    bmfh.bfReserved1 = 0;
    bmfh.bfReserved2 = 0;
    bmfh.bfOffBits = sizeHeader;

    bmih.biSize = sizeof(BITMAPINFOHEADER);
    bmih.biWidth = m_size.X();
    bmih.biHeight = m_size.Y();
    bmih.biPlanes = 1;
    bmih.biBitCount = static_cast<WORD>(m_ppf->PixelBits());
    bmih.biCompression = BI_BITFIELDS;
    bmih.biSizeImage = 0;
    bmih.biXPelsPerMeter = 0;
    bmih.biYPelsPerMeter = 0;
    bmih.biClrUsed = 0;
    bmih.biClrImportant = 0;

    DWORD masks[3] = {m_ppf->RedMask(), m_ppf->GreenMask(), m_ppf->BlueMask()};

    //
    // Write out the header
    //

    pfile->Write(&bmfh, sizeof(BITMAPFILEHEADER));
    pfile->Write(&bmih, sizeof(BITMAPINFOHEADER));
    pfile->Write(masks, 12);

    //
    // Write out the bits
    //

    for (int y = m_size.Y() - 1; y >= 0; y--) pfile->Write(m_pbits + m_pitch * y, m_pitch);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
// Used to create a surface with a certain pixel format
//
//////////////////////////////////////////////////////////////////////////////

TRef<PrivateSurface> CreatePrivateSurface(PrivateEngine *pengine, PixelFormat *ppf, PrivatePalette *ppalette, const WinPoint &size, SurfaceType stype, SurfaceSite *psite) { return new PrivateSurfaceImpl(pengine, ppf, ppalette, size, stype, psite); }

//////////////////////////////////////////////////////////////////////////////
//
// Used to create a surface from a memory mapped file
//
//////////////////////////////////////////////////////////////////////////////

TRef<PrivateSurface> CreatePrivateSurface(PrivateEngine *pengine, PixelFormat *ppf, PrivatePalette *ppalette, const WinPoint &size, int pitch, BYTE *pdata, IObject *pobjectMemory) { return new PrivateSurfaceImpl(pengine, ppf, ppalette, size, pitch, pdata, pobjectMemory); }

//////////////////////////////////////////////////////////////////////////////
//
// Create a Private surface from an existing VideoSurface.  This is used to
//
// - wrap the primary surface
// - wrap offscreen video memory surfaces
//
//////////////////////////////////////////////////////////////////////////////

TRef<PrivateSurface> CreatePrivateSurface(PrivateEngine *pengine, VideoSurface *pvideoSurface, SurfaceSite *psite) { return new PrivateSurfaceImpl(pengine, pvideoSurface, psite); }