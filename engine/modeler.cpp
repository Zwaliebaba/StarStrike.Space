#include "pch.h"
#include "xfile.h"

//////////////////////////////////////////////////////////////////////////////
//
// ModelerSite
//
//////////////////////////////////////////////////////////////////////////////

class ModelerSiteImpl : public ModelerSite
{
public:
  //
  // ModelerSite members
  //

  void Error(const ZString &str) override { ZError(str); }
};

//////////////////////////////////////////////////////////////////////////////
//
// Factories
//
//////////////////////////////////////////////////////////////////////////////

class AnimatedImagePaneRectFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));
    TRef<RectValue> prect = RectValue::Cast(static_cast<IObject *>(stack.Pop()));

    return static_cast<Pane *>(new AnimatedImagePane(pimage, prect->GetValue()));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class AnimatedImagePaneFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));

    return static_cast<Pane *>(new AnimatedImagePane(pimage));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class PaneImageFactory : public IFunction
{
  TRef<Engine> m_pengine;

public:
  PaneImageFactory(Modeler *pmodeler)
    : m_pengine(pmodeler->GetEngine()) {}

  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Pane> ppane;
    CastTo(ppane, static_cast<IObject *>(stack.Pop()));
    TRef<Boolean> pbooleanZBuffer = Boolean::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Boolean> pbooleanColorKey = Boolean::Cast(static_cast<IObject *>(stack.Pop()));

    SurfaceType stype = SurfaceType2D() | SurfaceType3D();

    if (pbooleanZBuffer->GetValue()) stype.Set(SurfaceTypeZBuffer());

    return static_cast<Value *>(CreatePaneImage(m_pengine, stype, pbooleanColorKey->GetValue(), ppane));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class FrameImageButtonPaneFactory : public IFunction
{
  TRef<Modeler> m_pmodeler;
  TRef<Number> m_ptime;

public:
  FrameImageButtonPaneFactory(Modeler *pmodeler, Number *ptime)
    : m_pmodeler(pmodeler),
      m_ptime(ptime) {}

  TRef<IObject> Apply(ObjectStack &stack) override
  {
    StringValue *pstring = StringValue::Cast(static_cast<IObject *>(stack.Pop()));
    Number *pnumber = Number::Cast(static_cast<IObject *>(stack.Pop()));
    bool bLoop = GetBoolean(stack.Pop());
    bool bFinish = GetBoolean(stack.Pop());

    TRef<INameSpace> pns = m_pmodeler->GetNameSpace(pstring->GetValue());
    TRef<ModifiableNumber> pnumberFrame;
    CastTo(pnumberFrame, pns->FindMember("frame"));
    TRef<Image> pimage = pns->FindImage("image");

    return CreateFrameImageButtonPane(m_ptime, pimage, pnumberFrame, pnumber->GetValue(), bLoop, bFinish);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class PointX : public Number
{
  PointValue *GetPoint() { return PointValue::Cast(GetChild(0)); }

public:
  PointX(PointValue *ppoint)
    : Number(ppoint) {}

  void Evaluate() override { GetValueInternal() = GetPoint()->GetValue().X(); }
};

class PointXFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<PointValue> ppoint = PointValue::Cast(static_cast<IObject *>(stack.Pop()));

    return new PointX(ppoint);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class PointY : public Number
{
  PointValue *GetPoint() { return PointValue::Cast(GetChild(0)); }

public:
  PointY(PointValue *ppoint)
    : Number(ppoint) {}

  void Evaluate() override { GetValueInternal() = GetPoint()->GetValue().Y(); }
};

class PointYFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<PointValue> ppoint = PointValue::Cast(static_cast<IObject *>(stack.Pop()));

    return new PointY(ppoint);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class ImageSize : public PointValue
{
  Image *GetImage() { return Image::Cast(GetChild(0)); }

public:
  ImageSize(Image *pimage)
    : PointValue(pimage) {}

  void Evaluate() override { GetValueInternal() = Point::Cast(GetImage()->GetBounds().GetRect().Size()); }
};

class ImageSizeFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));

    return new ImageSize(pimage);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class MDLFileImageFactory : public IFunction
{
  TRef<Modeler> m_pmodeler;

public:
  MDLFileImageFactory(Modeler *pmodeler)
    : m_pmodeler(pmodeler) {}

  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<StringValue> pstring = StringValue::Cast(static_cast<IObject *>(stack.Pop()));

    return static_cast<Value *>(CreateMDLFileImage(m_pmodeler, pstring->GetValue()));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class StringImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pjustify = Number::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Number> pwidth = Number::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<FontValue> pfont = FontValue::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<ColorValue> pcolor = ColorValue::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<StringValue> pstring = StringValue::Cast(static_cast<IObject *>(stack.Pop()));

    Justification justification;
    justification.SetWord(static_cast<DWORD>(pjustify->GetValue()));

    return static_cast<Value *>(CreateStringImage(justification, pfont->GetValue(), pcolor, (int) pwidth->GetValue(), pstring));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class TextFileImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pjustify = Number::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Number> pwidth = Number::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<FontValue> pfont = FontValue::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<ColorValue> pcolor = ColorValue::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<StringValue> pstring = StringValue::Cast(static_cast<IObject *>(stack.Pop()));

    Justification justification;
    justification.SetWord(static_cast<DWORD>(pjustify->GetValue()));

    TRef<ZFile> pfile = new ZFile(pstring->GetValue());

    ZString str;

    if (pfile->IsValid()) str = ZString((PCC) pfile->GetPointer(), pfile->GetLength());
    else str = "Unable to open file " + pstring->GetValue();

    //
    // remove all of the 0xd characters from the string
    //

    int index = 0;
    while (index < str.GetLength())
    {
      if (str[index] == 0xd) str = str.Left(index) + str.Right(str.GetLength() - index - 1);
      else index++;
    }

    //
    //
    //

    return static_cast<Value *>(CreateStringImage(justification, pfont->GetValue(), pcolor, (int) pwidth->GetValue(), new StringValue(str)));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class JustifyImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));
    TRef<Number> pjustify = Number::Cast(static_cast<IObject *>(stack.Pop()));

    Justification justification;
    justification.SetWord(static_cast<DWORD>(pjustify->GetValue()));

    return static_cast<Value *>(CreateJustifyImage(pimage, justification));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class GaugeImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pjustify = Number::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));
    TRef<Number> pnumber = Number::Cast(static_cast<IObject *>(stack.Pop()));

    Justification justification;
    justification.SetWord(static_cast<DWORD>(pjustify->GetValue()));

    return static_cast<Value *>(CreateGaugeImage(justification, pimage, false, pnumber));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class GaugeImageRectFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pjustify = Number::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));
    TRef<RectValue> prect = RectValue::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Boolean> pbool = Boolean::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Number> pnumber = Number::Cast(static_cast<IObject *>(stack.Pop()));

    Justification justification;
    justification.SetWord(static_cast<DWORD>(pjustify->GetValue()));

    return static_cast<Value *>(CreateGaugeImage(justification, pimage, prect->GetValue(), pbool->GetValue(), pnumber));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class UndetectableImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));

    return static_cast<Value *>(CreateUndetectableImage(pimage));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class ClipImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));
    TRef<RectValue> prect = RectValue::Cast(static_cast<IObject *>(stack.Pop()));

    return static_cast<Value *>(CreateClipImage(pimage, prect));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class PickImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));

    return static_cast<Value *>(CreatePickImage(pimage));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class ColorImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<ColorValue> pcolor = ColorValue::Cast(static_cast<IObject *>(stack.Pop()));

    return static_cast<Value *>(CreateColorImage(pcolor));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class ExtentImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<RectValue> prect = RectValue::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<ColorValue> pcolor = ColorValue::Cast(static_cast<IObject *>(stack.Pop()));

    return static_cast<Value *>(CreateExtentImage(prect, pcolor));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

/* !!! remove
class EmptyImageFactory : public IFunction {
private:
public:
    TRef<IObject> Apply(ObjectStack& stack)
    {
        return (Value*)Image::GetEmpty();
    }
};
*/

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class ImportXFileFactory : public IFunction
{
  TRef<Modeler> m_pmodeler;

public:
  ImportXFileFactory(Modeler *pmodeler)
    : m_pmodeler(pmodeler) {}

  TRef<IObject> Apply(ObjectStack &stack) override
  {
    ZString str = GetString(stack.Pop());
    TRef<Number> pnumber = Number::Cast(static_cast<IObject *>(stack.Pop()));

    bool bAnimation;
    TRef<IObject> pobject = m_pmodeler->LoadXFile(str, pnumber, bAnimation);
    ZAssert(pobject != NULL);
    return pobject;
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class ImportMDLFactory : public IFunction
{
  TRef<Modeler> m_pmodeler;

public:
  ImportMDLFactory(Modeler *pmodeler)
    : m_pmodeler(pmodeler) {}

  TRef<IObject> Apply(ObjectStack &stack) override
  {
    ZString str = GetString(stack.Pop());

    TRef<INameSpace> pns = m_pmodeler->GetNameSpace(str);

    if (pns) return pns->FindMember("object");

    return nullptr;
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class ImportImageFactory : public IFunction
{
  TRef<Modeler> m_pmodeler;
  TRef<PrivateEngine> m_pengine;

public:
  ImportImageFactory(Modeler *pmodeler)
    : m_pmodeler(pmodeler) { CastTo(m_pengine, m_pmodeler->GetEngine()); }

  TRef<IObject> Apply(ObjectStack &stack) override
  {
    ZString str = GetString(stack.Pop());
    bool b = GetBoolean(stack.Pop());

    TRef<Image> pimage = m_pmodeler->LoadImage(str, b);
    ZAssert(pimage != NULL);
    return static_cast<Value *>(pimage);
  }

  TRef<IObject> Read(IBinaryReaderSite *psite, ObjectStack &stack) override
  {
#ifdef DREAMCAST
    BinarySurfaceInfo bsi; BinarySurfaceInfo *pbsi = &bsi; psite->CopyStructure(pbsi);
#else
    BinarySurfaceInfo *pbsi;
    psite->GetStructure(pbsi);
#endif

    PixelFormat *ppf = m_pengine->GetPixelFormat(pbsi->m_bitCount, pbsi->m_redMask, pbsi->m_greenMask, pbsi->m_blueMask, pbsi->m_alphaMask);

    BYTE *pdata = psite->GetPointer();
    psite->MovePointer(pbsi->m_pitch * pbsi->m_size.Y());

    TRef<Surface> psurface = m_pengine->CreateSurface(pbsi->m_size, ppf, nullptr, pbsi->m_pitch, pdata, psite->GetMemoryObject());

    if (pbsi->m_bColorKey) psurface->SetColorKey(Color(0, 0, 0));

    return static_cast<Value *>(new ConstantImage(psurface, ZString()));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class ImportFontFactory : public IFunction
{
  TRef<Modeler> m_pmodeler;
  TRef<PrivateEngine> m_pengine;

public:
  ImportFontFactory(Modeler *pmodeler)
    : m_pmodeler(pmodeler) { CastTo(m_pengine, m_pmodeler->GetEngine()); }

  TRef<IObject> Apply(ObjectStack &stack) override
  {
    ZUnimplemented();
    return nullptr;
  }

  TRef<IObject> Read(IBinaryReaderSite *psite, ObjectStack &stack) override { return new FontValue(CreateEngineFont(psite)); }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class ImportImageLRFactory : public IFunction
{
  TRef<Modeler> m_pmodeler;
  TRef<PrivateEngine> m_pengine;

public:
  ImportImageLRFactory(Modeler *pmodeler)
    : m_pmodeler(pmodeler) { CastTo(m_pengine, m_pmodeler->GetEngine()); }

  TRef<IObject> Apply(ObjectStack &stack) override
  {
    ZString str = GetString(stack.Pop());
    bool b = GetBoolean(stack.Pop());

    TRef<Image> pimage = m_pmodeler->LoadImage(str, b);
    const Bounds2 &bounds = pimage->GetBounds();

    return static_cast<Value *>(new TranslateImage(pimage, Point(0, -bounds.GetRect().YSize())));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class ImportImage3DFactory : public IFunction
{
  TRef<Modeler> m_pmodeler;
  TRef<PrivateEngine> m_pengine;

public:
  ImportImage3DFactory(Modeler *pmodeler)
    : m_pmodeler(pmodeler) { CastTo(m_pengine, m_pmodeler->GetEngine()); }

  TRef<IObject> Apply(ObjectStack &stack) override
  {
    ZString str = GetString(stack.Pop());
    TRef<ColorValue> pcolor = ColorValue::Cast(static_cast<IObject *>(stack.Pop()));
    bool b = GetBoolean(stack.Pop());

    TRef<Surface> psurface = m_pmodeler->LoadSurface(str, b);

    return static_cast<Value *>(CreateConstantImage3D(psurface, pcolor));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class BlendImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));
    TRef<Number> pnumberBlend = Number::Cast(static_cast<IObject *>(stack.Pop()));

    return static_cast<Value *>(CreateBlendImage(pimage, (BlendMode) (int) pnumberBlend->GetValue()));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class TranslateImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));
    TRef<PointValue> ppoint = PointValue::Cast(static_cast<IObject *>(stack.Pop()));

    return static_cast<Value *>(new TransformImage(pimage, new TranslateTransform2(ppoint)));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class VisibleImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));
    TRef<Boolean> pbool;
    CastTo(pbool, static_cast<Value *>((IObject *) stack.Pop()));

    return static_cast<Value *>(CreateVisibleImage(pimage, pbool));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class ScaleImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));
    TRef<PointValue> ppoint = PointValue::Cast(static_cast<IObject *>(stack.Pop()));

    return static_cast<Value *>(new TransformImage(pimage, new ScaleTransform2(ppoint)));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class RotateImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));
    TRef<Number> pangle = Number::Cast(static_cast<IObject *>(stack.Pop()));

    return static_cast<Value *>(new TransformImage(pimage, new RotateTransform2(pangle)));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class GeoImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Geo> pgeo = Geo::Cast(static_cast<Value *>((IObject *) stack.Pop()));
    TRef<RectValue> prect = RectValue::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Camera> pcamera = Camera::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Boolean> pbooleanZBuffer = Boolean::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Viewport> pviewport = new Viewport(pcamera, prect);

    return static_cast<Value *>(new GeoImage(pgeo, pviewport, pbooleanZBuffer->GetValue()));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class GeoImage2DFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Geo> pgeo = Geo::Cast(static_cast<Value *>((IObject *) stack.Pop()));

    return static_cast<Value *>(CreateGeoImage2D(pgeo));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class ModifiableNumberFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    float value = GetNumber(stack.Pop());

    return new ModifiableNumber(value);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class WrapNumberFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pnumber = Number::Cast(static_cast<IObject *>(stack.Pop()));

    return new WrapNumber(pnumber);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

using TRefIObject = TRef<IObject>;//hack for VC5

template<class StaticType, class ValueType>
class TIFunctionBinary : public IFunction
{
public:
  TRefIObject Read(IBinaryReaderSite *psite, ObjectStack &stack) override
  {
#ifdef DREAMCAST
    StaticType value; StaticType *pvalue = &value; psite->CopyStructure(pvalue);
#else
    StaticType *pvalue = reinterpret_cast<StaticType *>(psite->GetPointer());
    psite->MovePointer(sizeof(StaticType));
#endif

    return new ValueType(*pvalue);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class RGBColorFactory : public TIFunctionBinary<Color, ColorValue>
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    float r = GetNumber(stack.Pop());
    float g = GetNumber(stack.Pop());
    float b = GetNumber(stack.Pop());

    return new ColorValue(Color(r, g, b));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class RGBAColorFactory : public TIFunctionBinary<Color, ColorValue>
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    float r = GetNumber(stack.Pop());
    float g = GetNumber(stack.Pop());
    float b = GetNumber(stack.Pop());
    float a = GetNumber(stack.Pop());

    return new ColorValue(Color(r, g, b, a));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class VectorFactory : public TIFunctionBinary<Vector, VectorValue>
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    float x = GetNumber(stack.Pop());
    float y = GetNumber(stack.Pop());
    float z = GetNumber(stack.Pop());

    return new VectorValue(Vector(x, y, z));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class PointFactory : public TIFunctionBinary<Point, PointValue>
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    float x = GetNumber(stack.Pop());
    float y = GetNumber(stack.Pop());

    return new PointValue(Point(x, y));
  }
};

class PointV : public PointValue
{
public:
  PointV(Number *px, Number *py)
    : PointValue(px, py) {}

  Number *Get0() { return Number::Cast(GetChild(0)); }
  Number *Get1() { return Number::Cast(GetChild(1)); }

  void Evaluate() override { GetValueInternal() = Point(Get0()->GetValue(), Get1()->GetValue()); }
};

class PointVFactory : public TIFunctionBinary<Point, PointValue>
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    Number *px;
    CastTo(px, static_cast<IObject *>(stack.Pop()));
    Number *py;
    CastTo(py, static_cast<IObject *>(stack.Pop()));

    return new PointV(px, py);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class RectFactory : public TIFunctionBinary<Rect, RectValue>
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    float xmin = GetNumber(stack.Pop());
    float ymin = GetNumber(stack.Pop());
    float xmax = GetNumber(stack.Pop());
    float ymax = GetNumber(stack.Pop());

    return new RectValue(Rect(xmin, ymin, xmax, ymax));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class MatrixTransformFactory : public TIFunctionBinary<Matrix, Transform>
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    float m00 = GetNumber(stack.Pop());
    float m01 = GetNumber(stack.Pop());
    float m02 = GetNumber(stack.Pop());
    float m03 = GetNumber(stack.Pop());

    float m10 = GetNumber(stack.Pop());
    float m11 = GetNumber(stack.Pop());
    float m12 = GetNumber(stack.Pop());
    float m13 = GetNumber(stack.Pop());

    float m20 = GetNumber(stack.Pop());
    float m21 = GetNumber(stack.Pop());
    float m22 = GetNumber(stack.Pop());
    float m23 = GetNumber(stack.Pop());

    float m30 = GetNumber(stack.Pop());
    float m31 = GetNumber(stack.Pop());
    float m32 = GetNumber(stack.Pop());
    float m33 = GetNumber(stack.Pop());

    return new Transform(Matrix(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class MaterialFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<ColorValue> pcolorDiffuse = ColorValue::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<ColorValue> pcolorSpecular = ColorValue::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<ColorValue> pcolorEmissive = ColorValue::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Number> ppower = Number::Cast(static_cast<IObject *>(stack.Pop()));

    return CreateMaterial(pcolorDiffuse, pcolorSpecular, pcolorEmissive, ppower);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class TransformGeoFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Geo> pgeo = Geo::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Transform> ptrans = Transform::Cast(static_cast<IObject *>(stack.Pop()));

    return new TransformGeo(pgeo, ptrans);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class TextureGeoFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Geo> pgeo = Geo::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Image> pimage = Image::Cast(static_cast<Value *>((IObject *) stack.Pop()));

    return new TextureGeo(pgeo, pimage);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class BlendGeoFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Geo> pgeo = Geo::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Number> pnumberBlend = Number::Cast(static_cast<IObject *>(stack.Pop()));

    return CreateBlendGeo(pgeo, static_cast<BlendMode>((int) pnumberBlend->GetValue()));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class MaterialGeoFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Geo> pgeo = Geo::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Material> pmaterial = Material::Cast(static_cast<IObject *>(stack.Pop()));

    return new MaterialGeo(pgeo, pmaterial);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
// Switch Value
//
//////////////////////////////////////////////////////////////////////////////

template<class StaticType>
class TSwitchValue : public TStaticValue<StaticType>
{
protected:
  //////////////////////////////////////////////////////////////////////////////
  //
  // Types
  //
  //////////////////////////////////////////////////////////////////////////////

  using ValueType = TStaticValue<StaticType>;

  class Data
  {
  public:
    float m_number;
    TRef<ValueType> m_pvalue;
  };

  using DataList = TList<Data, DefaultNoEquals>;

  //////////////////////////////////////////////////////////////////////////////
  //
  // Members
  //
  //////////////////////////////////////////////////////////////////////////////

  DataList m_list;
  TRef<ValueType> m_pdefault;
  float m_number;

  TStaticValue<StaticType> *GetWrappedValue() { return TStaticValue<StaticType>::Cast(GetChild(0)); }

public:
  //////////////////////////////////////////////////////////////////////////////
  //
  // Methods
  //
  //////////////////////////////////////////////////////////////////////////////

  TSwitchValue(ValueType *pdefault, Number *pnumber)
    : TStaticValue<StaticType>(pdefault, pnumber),
      m_pdefault(pdefault),
      m_number(pnumber->GetValue()) {}

  Number *GetNumber() { return Number::Cast(GetChild(1)); }

  //////////////////////////////////////////////////////////////////////////////
  //
  // SwitchImage Methods
  //
  //////////////////////////////////////////////////////////////////////////////

  void AddValue(float number, ValueType *pvalue)
  {
    m_list.PushFront();
    m_list.GetFront().m_number = number;
    m_list.GetFront().m_pvalue = pvalue;

    if (m_number == number)
    {
      pvalue->Update();
      SetChild(0, pvalue);
    }
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Value Methods
  //
  //////////////////////////////////////////////////////////////////////////////

  void Evaluate() override
  {
    float number = GetNumber()->GetValue();

    if (m_number != number)
    {
      m_number = number;
      typename DataList::Iterator iter(m_list);

      while (true)
      {
        if (iter.End())
        {
          m_pdefault->Update();
          SetChild(0, m_pdefault);
          break;
        }
        const Data &data = iter.Value();

        if (data.m_number == number)
        {
          data.m_pvalue->Update();
          SetChild(0, data.m_pvalue);
          break;
        }

        iter.Next();
      }
    }

    GetValueInternal() = GetWrappedValue()->GetValue();
  }
};

//////////////////////////////////////////////////////////////////////////////
//
// Switch Value Factory
//
//////////////////////////////////////////////////////////////////////////////

template<class StaticType>
class TSwitchFactory : public IFunction
{
  using ValueType = TStaticValue<StaticType>;
  using SwitchType = TSwitchValue<StaticType>;

public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pnumber;
    CastTo(pnumber, static_cast<IObject *>(stack.Pop()));
    TRef<ValueType> pvalue;
    CastTo(pvalue, static_cast<Value *>((IObject *) stack.Pop()));
    TRef<IObjectList> plist;
    CastTo(plist, static_cast<IObject *>(stack.Pop()));

    TRef<SwitchType> pswitch = new SwitchType(pvalue, pnumber);

    IObjectPair *ppair;
    CastTo(ppair, plist->GetFirst());
    while (ppair)
    {
      TRef<Number> pnumber;
      CastTo(pnumber, ppair->GetFirst());
      TRef<ValueType> pimage;
      CastTo(pvalue, ppair->GetSecond());

      pswitch->AddValue(pnumber->GetValue(), pvalue);

      CastTo(ppair, plist->GetNext());
    }

    return static_cast<Value *>(pswitch);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class SwitchImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pnumber;
    CastTo(pnumber, static_cast<IObject *>(stack.Pop()));
    TRef<Image> pimage;
    CastTo(pimage, static_cast<Value *>((IObject *) stack.Pop()));
    TRef<IObjectList> plist;
    CastTo(plist, static_cast<IObject *>(stack.Pop()));

    TRef<SwitchImage> pswitch = CreateSwitchImage(pnumber, pimage);

    IObjectPair *ppair;
    CastTo(ppair, plist->GetFirst());
    while (ppair)
    {
      float number = GetNumber(ppair->GetFirst());
      TRef<Image> pimage = Image::Cast(static_cast<Value *>(ppair->GetSecond()));

      pswitch->AddImage(number, pimage);

      CastTo(ppair, plist->GetNext());
    }

    return static_cast<Value *>(pswitch);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class GroupImageFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<GroupImage> pgroup = new GroupImage();

    TRef<IObjectList> plist;
    CastTo(plist, static_cast<IObject *>(stack.Pop()));

    plist->GetFirst();

    while (plist->GetCurrent() != nullptr)
    {
      pgroup->AddImage(Image::Cast(static_cast<Value *>(plist->GetCurrent())));
      plist->GetNext();
    }

    return static_cast<Value *>(pgroup);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class GroupGeoFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<GroupGeo> pgroup = GroupGeo::Create();

    TRef<IObjectList> plist;
    CastTo(plist, static_cast<IObject *>(stack.Pop()));

    plist->GetFirst();

    while (plist->GetCurrent() != nullptr)
    {
      pgroup->AddGeo(Geo::Cast(plist->GetCurrent()));
      plist->GetNext();
    }

    return pgroup;
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class MeshGeoFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<IObjectList> plistVertices;
    CastTo(plistVertices, static_cast<IObject *>(stack.Pop()));
    TRef<IObjectList> plistIndices;
    CastTo(plistIndices, static_cast<IObject *>(stack.Pop()));

    TVector<Vertex> vertices;
    TVector<WORD> indices;

    plistVertices->GetFirst();

    while (plistVertices->GetCurrent() != nullptr)
    {
      float x = GetNumber(plistVertices->GetCurrent());
      float y = GetNumber(plistVertices->GetNext());
      float z = GetNumber(plistVertices->GetNext());

      float nx = GetNumber(plistVertices->GetNext());
      float ny = GetNumber(plistVertices->GetNext());
      float nz = GetNumber(plistVertices->GetNext());

      float tx = GetNumber(plistVertices->GetNext());
      float ty = GetNumber(plistVertices->GetNext());

      vertices.PushEnd(Vertex(x, y, z, nx, ny, nz, tx, ty));

      plistVertices->GetNext();
    }

    plistIndices->GetFirst();

    while (plistIndices->GetCurrent() != nullptr)
    {
      indices.PushEnd(static_cast<WORD>(GetNumber(plistIndices->GetCurrent())));
      plistIndices->GetNext();
    }

    return Geo::CreateMesh(vertices, indices);
  }

#ifdef DREAMCAST
#if 0
  class MeshDataCopy : public IObject
  {
  public:
    MeshDataCopy(Vertex *pvertex, DWORD countVertices, WORD *pindex, DWORD countIndices)
    {
      Vertex *pvertexCopy = (Vertex *) malloc(countVertices * sizeof(Vertex));
      memcpy(pvertexCopy, pvertex, countVertices * sizeof(Vertex));
      m_pvertex = new D3DVertex[countVertices];

      for (int i = 0; i < countVertices; i++)
      {
        m_pvertex[i].SetPosition(pvertexCopy[i].GetPosition());
        m_pvertex[i].SetTextureCoordinate(pvertexCopy[i].GetTextureCoordinate());
        m_pvertex[i].SetNormal(pvertexCopy[i].GetNormal());
      }
      free(pvertexCopy);

      m_pindex = (WORD *) malloc(countIndices * sizeof(WORD));
      memcpy(m_pindex, pindex, countIndices * sizeof(WORD));
    }

    ~MeshDataCopy()
    {
      delete m_pvertex;
      free(m_pindex);
    }

    D3DVertex *m_pvertex;
    WORD *m_pindex;
  }; TRef<IObject> Read(IBinaryReaderSite *psite, ObjectStack &stack)
  {
    DWORD countVertices = psite->GetDWORD();
    DWORD countIndices = psite->GetDWORD();
    Vertex *pvertex = (Vertex *) psite->GetPointer();

    psite->MovePointer(countVertices * sizeof(Vertex));

    WORD *pindex = (WORD *) psite->GetPointer();

    psite->MovePointer(countIndices * sizeof(WORD));

    TRef<MeshDataCopy> pdata = new MeshDataCopy(pvertex, countVertices, pindex, countIndices);

    return Geo::CreateMesh(pdata->m_pvertex, countVertices, pdata->m_pindex, countIndices, pdata);
  }
#endif
#if 1

  class MeshDataCopy : public IObject
  {
  public:
    MeshDataCopy(Vertex *pvertex, DWORD countVertices, WORD *pindex, DWORD countIndices)
    {
      m_pvertex = (Vertex *) malloc(countVertices * sizeof(Vertex));
      memcpy(m_pvertex, pvertex, countVertices * sizeof(Vertex));
      m_pindex = (WORD *) malloc(countIndices * sizeof(WORD));
      memcpy(m_pindex, pindex, countIndices * sizeof(WORD));
    }

    ~MeshDataCopy()
    {
      free(m_pvertex);
      free(m_pindex);
    }

    Vertex *m_pvertex;
    WORD *m_pindex;
  }; TRef<IObject> Read(IBinaryReaderSite *psite, ObjectStack &stack)
  {
    DWORD countVertices = psite->GetDWORD();
    DWORD countIndices = psite->GetDWORD();
    Vertex *pvertex = (Vertex *) psite->GetPointer();

    psite->MovePointer(countVertices * sizeof(Vertex));

    WORD *pindex = (WORD *) psite->GetPointer();

    psite->MovePointer(countIndices * sizeof(WORD));

    TRef<MeshDataCopy> pdata = new MeshDataCopy(pvertex, countVertices, pindex, countIndices);

    return Geo::CreateMesh(pdata->m_pvertex, countVertices, pdata->m_pindex, countIndices, pdata);
  }

#endif

#else
  TRef<IObject> Read(IBinaryReaderSite *psite, ObjectStack &stack) override
  {
    DWORD countVertices = psite->GetDWORD();
    DWORD countIndices = psite->GetDWORD();
    auto pvertex = (Vertex *) psite->GetPointer();

    psite->MovePointer(countVertices * sizeof(Vertex));

    auto pindex = (WORD *) psite->GetPointer();

    psite->MovePointer(countIndices * sizeof(WORD));

    return Geo::CreateMesh(pvertex, countVertices, pindex, countIndices, psite->GetMemoryObject());
  }
#endif
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class LODGeoFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Geo> pgeo;
    CastTo(pgeo, static_cast<IObject *>(stack.Pop()));
    TRef<IObjectList> plistLOD;
    CastTo(plistLOD, static_cast<IObject *>(stack.Pop()));

    TRef<LODGeo> plodGeo = LODGeo::Create(pgeo);

    IObjectPair *ppair;
    CastTo(ppair, plistLOD->GetFirst());
    while (ppair)
    {
      float pixels = GetNumber(ppair->GetFirst());
      TRef<Geo> pgeoLOD = Geo::Cast(ppair->GetSecond());

      plodGeo->AddGeo(pgeoLOD, pixels);

      CastTo(ppair, plistLOD->GetNext());
    }

    return plodGeo;
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class KeyFramedTranslateFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<IObjectList> plist;
    CastTo(plist, static_cast<IObject *>(stack.Pop()));
    TRef<Number> pframe;
    CastTo(pframe, static_cast<IObject *>(stack.Pop()));

    TRef<KeyFramedTranslateTransform> ptrans = CreateKeyFramedTranslateTransform(pframe);

    plist->GetFirst();
    while (plist->GetCurrent() != nullptr)
    {
      float time = GetNumber(plist->GetCurrent());
      float x = GetNumber(plist->GetNext());
      float y = GetNumber(plist->GetNext());
      float z = GetNumber(plist->GetNext());

      ptrans->AddKey(time, Vector(x, y, z));

      plist->GetNext();
    }

    return ptrans;
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class ScaleFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pscale = Number::Cast(static_cast<IObject *>(stack.Pop()));

    return new ScaleTransform(pscale->GetValue());
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class TranslateFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<VectorValue> pvector = VectorValue::Cast(static_cast<IObject *>(stack.Pop()));

    return new TranslateTransform(pvector->GetValue());
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class RotateFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<VectorValue> pvector = VectorValue::Cast(static_cast<IObject *>(stack.Pop()));
    TRef<Number> pangle = Number::Cast(static_cast<IObject *>(stack.Pop()));

    return new RotateTransform(pvector->GetValue(), pangle->GetValue());
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class KeyFramedScaleFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<IObjectList> plist;
    CastTo(plist, static_cast<IObject *>(stack.Pop()));
    TRef<Number> pframe;
    CastTo(pframe, static_cast<IObject *>(stack.Pop()));

    TRef<KeyFramedScaleTransform> ptrans = CreateKeyFramedScaleTransform(pframe);

    plist->GetFirst();
    while (plist->GetCurrent() != nullptr)
    {
      float time = GetNumber(plist->GetCurrent());
      float x = GetNumber(plist->GetNext());
      float y = GetNumber(plist->GetNext());
      float z = GetNumber(plist->GetNext());

      ptrans->AddKey(time, Vector(x, y, z));

      plist->GetNext();
    }

    return ptrans;
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class KeyFramedRotateFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<IObjectList> plist;
    CastTo(plist, static_cast<IObject *>(stack.Pop()));
    TRef<Number> pframe;
    CastTo(pframe, static_cast<IObject *>(stack.Pop()));

    TRef<KeyFramedRotateTransform> ptrans = CreateKeyFramedRotateTransform(pframe);

    plist->GetFirst();
    while (plist->GetCurrent() != nullptr)
    {
      float time = GetNumber(plist->GetCurrent());
      float s = GetNumber(plist->GetNext());
      float x = GetNumber(plist->GetNext());
      float y = GetNumber(plist->GetNext());
      float z = GetNumber(plist->GetNext());

      ptrans->AddKey(time, Quaternion(s, x, y, z));

      plist->GetNext();
    }

    return ptrans;
  }
};

//////////////////////////////////////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////////////////////////////////////

class Win32FontFactory : public IFunction
{
  Engine *m_pengine;

public:
  Win32FontFactory(Engine *pengine)
    : m_pengine(pengine) {}

  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<StringValue> pstringName;
    CastTo(pstringName, static_cast<IObject *>(stack.Pop()));
    TRef<Number> pnumberSize;
    CastTo(pnumberSize, static_cast<IObject *>(stack.Pop()));
    TRef<Boolean> pboolBold;
    CastTo(pboolBold, static_cast<IObject *>(stack.Pop()));
    TRef<Number> pnumberStretch;
    CastTo(pnumberStretch, static_cast<IObject *>(stack.Pop()));

    return new FontValue(CreateEngineFont(CreateFont(static_cast<int>(pnumberSize->GetValue()), static_cast<int>(pnumberStretch->GetValue()), 0, 0, pboolBold->GetValue() ? FW_BOLD : FW_DONTCARE, FALSE, FALSE, FALSE, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_MODERN, pstringName->GetValue())));
  }
};

//////////////////////////////////////////////////////////////////////////////
//
// Numbers
//
//////////////////////////////////////////////////////////////////////////////

class ModFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pnumber1;
    CastTo(pnumber1, static_cast<IObject *>(stack.Pop()));
    TRef<Number> pnumber2;
    CastTo(pnumber2, static_cast<IObject *>(stack.Pop()));

    return Mod(pnumber1, pnumber2);
  }
};

class MinFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pnumber1;
    CastTo(pnumber1, static_cast<IObject *>(stack.Pop()));
    TRef<Number> pnumber2;
    CastTo(pnumber2, static_cast<IObject *>(stack.Pop()));

    return Min(pnumber1, pnumber2);
  }
};

class MaxFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pnumber1;
    CastTo(pnumber1, static_cast<IObject *>(stack.Pop()));
    TRef<Number> pnumber2;
    CastTo(pnumber2, static_cast<IObject *>(stack.Pop()));

    return Max(pnumber1, pnumber2);
  }
};

class AddFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pnumber1;
    CastTo(pnumber1, static_cast<IObject *>(stack.Pop()));
    TRef<Number> pnumber2;
    CastTo(pnumber2, static_cast<IObject *>(stack.Pop()));

    return Add(pnumber1, pnumber2);
  }
};

class SubtractFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pnumber1;
    CastTo(pnumber1, static_cast<IObject *>(stack.Pop()));
    TRef<Number> pnumber2;
    CastTo(pnumber2, static_cast<IObject *>(stack.Pop()));

    return Subtract(pnumber1, pnumber2);
  }
};

class MultiplyFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pnumber1;
    CastTo(pnumber1, static_cast<IObject *>(stack.Pop()));
    TRef<Number> pnumber2;
    CastTo(pnumber2, static_cast<IObject *>(stack.Pop()));

    return Multiply(pnumber1, pnumber2);
  }
};

class DivideFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pnumber1;
    CastTo(pnumber1, static_cast<IObject *>(stack.Pop()));
    TRef<Number> pnumber2;
    CastTo(pnumber2, static_cast<IObject *>(stack.Pop()));

    return Divide(pnumber1, pnumber2);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
// NumberString
//
//////////////////////////////////////////////////////////////////////////////

class NumberString : public StringValue
{
public:
  NumberString(Number *pvalue)
    : StringValue(pvalue) {}

  Number *GetNumber() { return Number::Cast(GetChild(0)); }

  void Evaluate() override { GetValueInternal() = static_cast<int>(GetNumber()->GetValue() + 0.5); }

  ZString GetFunctionName() override { return "NumberString"; }
};

class NumberStringFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pnumber;
    CastTo(pnumber, static_cast<IObject *>(stack.Pop()));

    return new NumberString(pnumber);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
// RealNumberString
//
//////////////////////////////////////////////////////////////////////////////

class RealNumberString : public StringValue
{
public:
  RealNumberString(Number *pvalue)
    : StringValue(pvalue) {}

  Number *GetNumber() { return Number::Cast(GetChild(0)); }

  void Evaluate() override
  {
    char cbTemp[80];
    sprintf(cbTemp, "%.2g", static_cast<double>(GetNumber()->GetValue()));

    GetValueInternal() = cbTemp;
  }

  ZString GetFunctionName() override { return "RealNumberString"; }
};

class RealNumberStringFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<Number> pnumber;
    CastTo(pnumber, static_cast<IObject *>(stack.Pop()));

    return new RealNumberString(pnumber);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
// ConcatinatedString
//
//////////////////////////////////////////////////////////////////////////////

class ConcatinatedString : public StringValue
{
public:
  ConcatinatedString(StringValue *pvalue1, StringValue *pvalue2)
    : StringValue(pvalue1, pvalue2) {}

  void Evaluate() override { GetValueInternal() = static_cast<StringValue *>(GetChild(0))->GetValue() + static_cast<StringValue *>(GetChild(1))->GetValue(); }

  ZString GetFunctionName() override { return "ConcatinatedString"; }
};

class ConcatinatedStringFactory : public IFunction
{
public:
  TRef<IObject> Apply(ObjectStack &stack) override
  {
    TRef<StringValue> pstring1;
    CastTo(pstring1, static_cast<IObject *>(stack.Pop()));
    TRef<StringValue> pstring2;
    CastTo(pstring2, static_cast<IObject *>(stack.Pop()));

    return new ConcatinatedString(pstring1, pstring2);
  }
};

//////////////////////////////////////////////////////////////////////////////
//
// Modeler
//
//////////////////////////////////////////////////////////////////////////////

class ModelerImpl : public Modeler
{
  TRef<Engine> m_pengine;
  TRef<ModelerSite> m_psite;
  PathString m_pathStr;

  TMap<ZString, TRef<INameSpace>> m_mapNameSpace;

public:
  ModelerImpl(Engine *pengine)
    : m_pengine(pengine),
      m_pathStr(".")
  {
    m_psite = new ModelerSiteImpl();
    InitializeNameSpace();
  }

  void SetSite(ModelerSite *psite) override { m_psite = psite; }

  void SetArtPath(const PathString &pathStr) override { m_pathStr = pathStr; }

  ZString GetArtPath() override { return m_pathStr; }

  void Terminate() override
  {
    m_mapNameSpace.SetEmpty();
    m_pengine = nullptr;
    m_psite = nullptr;
  }

  void InitializeNameSpace()
  {
    INameSpace *pns = CreateNameSpace("model");

    //
    // Types
    //

    pns->AddType("Number", new TBaseMDLType<float>("float", ZString()));
    pns->AddType("Boolean", new TBaseMDLType<bool>("bool", "b"));
    pns->AddType("Color", new TBaseMDLType<Color>("Color", "color"));
    pns->AddType("Point", new TBaseMDLType<Point>("Point", "point"));
    pns->AddType("Vector", new TBaseMDLType<Vector>("Vector", "vec"));
    pns->AddType("Rect", new TBaseMDLType<Rect>("Rect", "rect"));
    pns->AddType("Orientation", new TBaseMDLType<Orientation>("Orientation", "orient"));
    pns->AddType("String", CreateStringMDLType());
    pns->AddType("Image", CreateIObjectMDLType("Image", "image"));
    pns->AddType("Geo", CreateIObjectMDLType("Geo", "Geo"));

    //
    // built in values
    //

    TRef<Number> ptime = new ModifiableNumber(0);

    pns->AddMember("emptyGeo", Geo::GetEmpty());
    pns->AddMember("emptyImage", static_cast<Value *>(Image::GetEmpty()));
    pns->AddMember("transparentImage", static_cast<Value *>(CreateTransparentImage()));
    pns->AddMember("emptyString", new StringValue(ZString()));
    pns->AddMember("identityTransform", GetIdentityTransform());
    pns->AddMember("time", ptime);
    pns->AddMember("white", new ColorValue(Color::White()));
    pns->AddMember("black", new ColorValue(Color::Black()));
    pns->AddMember("red", new ColorValue(Color::Red()));
    pns->AddMember("green", new ColorValue(Color::Green()));
    pns->AddMember("blue", new ColorValue(Color::Blue()));
    pns->AddMember("yellow", new ColorValue(Color::Yellow()));
    pns->AddMember("pi", new Number(pi));

    pns->AddMember("defaultFont", new FontValue(CreateEngineFont(CreateFont(11, 0, 0, 0, FW_DONTCARE, FALSE, FALSE, FALSE, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_MODERN, "tahoma"))));

    //
    // Switches
    //

    pns->AddMember("SwitchString", new TSwitchFactory<ZString>());

    //
    // Data type constructors
    //

    pns->AddMember("ModifiableNumber", new ModifiableNumberFactory());
    pns->AddMember("WrapNumber", new WrapNumberFactory());
    pns->AddMember("Color", new RGBColorFactory());
    pns->AddMember("ColorA", new RGBAColorFactory());
    pns->AddMember("Vector", new VectorFactory());
    pns->AddMember("Point", new PointFactory());
    pns->AddMember("Rect", new RectFactory());
    pns->AddMember("Material", new MaterialFactory());
    pns->AddMember("PointV", new PointVFactory());

    //
    // Numbers
    //

    pns->AddMember("Min", new MinFactory());
    pns->AddMember("Max", new MaxFactory());
    pns->AddMember("Mod", new ModFactory());
    pns->AddMember("Add", new AddFactory());
    pns->AddMember("Subtract", new SubtractFactory());
    pns->AddMember("Multiply", new MultiplyFactory());
    pns->AddMember("Divide", new DivideFactory());

    //
    // Strings
    //

    pns->AddMember("NumberString", new NumberStringFactory());
    pns->AddMember("RealNumberString", new RealNumberStringFactory());
    pns->AddMember("ConcatinatedString", new ConcatinatedStringFactory());

    //
    // Images
    //

    pns->AddMember("ImportImage", new ImportImageFactory(this));
    pns->AddMember("ImportImage3D", new ImportImage3DFactory(this));
    pns->AddMember("ImportImageLR", new ImportImageLRFactory(this));

    pns->AddMember("FrameImage", CreateFrameImageFactory());

    pns->AddMember("GaugeImage", new GaugeImageFactory());
    pns->AddMember("GaugeImageRect", new GaugeImageRectFactory());
    pns->AddMember("GroupImage", new GroupImageFactory());
    pns->AddMember("SwitchImage", new SwitchImageFactory());
    pns->AddMember("GeoImage", new GeoImageFactory());
    pns->AddMember("GeoImage2D", new GeoImage2DFactory());
    pns->AddMember("ClipImage", new ClipImageFactory());
    pns->AddMember("PickImage", new PickImageFactory());
    pns->AddMember("UndetectableImage", new UndetectableImageFactory());
    pns->AddMember("ColorImage", new ColorImageFactory());
    pns->AddMember("ExtentImage", new ExtentImageFactory());
    // !!! pns->AddMember("EmptyImage",         new EmptyImageFactory());

    pns->AddMember("StringImage", new StringImageFactory());
    pns->AddMember("MDLFileImage", new MDLFileImageFactory(this));
    pns->AddMember("TextFileImage", new TextFileImageFactory());

    pns->AddMember("JustifyLeft", new Number(static_cast<float>(JustifyLeft().GetWord())));
    pns->AddMember("JustifyRight", new Number(static_cast<float>(JustifyRight().GetWord())));
    pns->AddMember("JustifyTop", new Number(static_cast<float>(JustifyTop().GetWord())));
    pns->AddMember("JustifyBottom", new Number(static_cast<float>(JustifyBottom().GetWord())));
    pns->AddMember("JustifyXCenter", new Number(static_cast<float>(JustifyXCenter().GetWord())));
    pns->AddMember("JustifyYCenter", new Number(static_cast<float>(JustifyYCenter().GetWord())));
    pns->AddMember("JustifyCenter", new Number(static_cast<float>(JustifyCenter().GetWord())));

    pns->AddMember("JustifyImage", new JustifyImageFactory());
    pns->AddMember("VisibleImage", new VisibleImageFactory());
    pns->AddMember("TranslateImage", new TranslateImageFactory());
    pns->AddMember("ScaleImage", new ScaleImageFactory());
    pns->AddMember("RotateImage", new RotateImageFactory());
    pns->AddMember("BlendImage", new BlendImageFactory());

    //
    // Image Attributes
    //

    pns->AddMember("ImageSize", new ImageSizeFactory());

    //
    // Point Attributes
    //

    pns->AddMember("PointY", new PointYFactory());
    pns->AddMember("PointX", new PointXFactory());

    //
    // Geos
    //

    pns->AddMember("ImportXFile", new ImportXFileFactory(this));
    pns->AddMember("ImportMDL", new ImportMDLFactory(this));

    pns->AddMember("MeshGeo", new MeshGeoFactory());
    pns->AddMember("LODGeo", new LODGeoFactory());
    pns->AddMember("GroupGeo", new GroupGeoFactory());
    pns->AddMember("TransformGeo", new TransformGeoFactory());
    pns->AddMember("MaterialGeo", new MaterialGeoFactory());
    pns->AddMember("TextureGeo", new TextureGeoFactory());
    pns->AddMember("Matrix", new MatrixTransformFactory());

    pns->AddMember("BlendGeo", new BlendGeoFactory());

    pns->AddMember("BlendModeSource", new Number(BlendModeSource));
    pns->AddMember("BlendModeAdd", new Number(BlendModeAdd));
    pns->AddMember("BlendModeSourceAlpha", new Number(BlendModeSourceAlpha));

    //
    // Transforms
    //

    pns->AddMember("KeyFramedTranslate", new KeyFramedTranslateFactory());
    pns->AddMember("KeyFramedScale", new KeyFramedScaleFactory());
    pns->AddMember("KeyFramedRotate", new KeyFramedRotateFactory());
    pns->AddMember("Scale", new ScaleFactory());
    pns->AddMember("Translate", new TranslateFactory());
    pns->AddMember("Rotate", new RotateFactory());

    //
    // Fonts
    //

    pns->AddMember("Win32Font", new Win32FontFactory(m_pengine));
    pns->AddMember("ImportFont", new ImportFontFactory(this));

    //
    // Panes
    //

    pns->AddMember("AnimatedImagePane", new AnimatedImagePaneFactory());
    pns->AddMember("AnimatedImagePaneRect", new AnimatedImagePaneRectFactory());
    pns->AddMember("FrameImageButtonPane", new FrameImageButtonPaneFactory(this, ptime));
    pns->AddMember("PaneImage", new PaneImageFactory(this));
  }

  Engine *GetEngine() override { return m_pengine; }

  TRef<ZFile> GetFile(const PathString &pathStr, const ZString &strExtensionArg, bool bError)
  {
    ZString strExtension = pathStr.GetExtension();
    ZString strToOpen;

    if (!strExtension.IsEmpty())
    {
      if (strExtension != strExtensionArg) return nullptr;
      strToOpen = m_pathStr + pathStr;
    }
    else strToOpen = ZString(m_pathStr + pathStr) + ("." + strExtensionArg);

    TRef<ZFile> pfile = new ZFile(strToOpen, OF_READ | OF_SHARE_DENY_WRITE);

    ZRetailAssert(!(bError && !pfile->IsValid() && m_psite));

    return pfile->IsValid() ? pfile : nullptr;
  }

  TRef<ZFile> LoadFile(const PathString &pathStr, const ZString &strExtensionArg, bool bError) override { return GetFile(pathStr, strExtensionArg, bError); }

  TRef<Surface> LoadSurface(const ZString &str, bool bColorKey, bool bError) override
  {
    TRef<ConstantImage> pimage;
    CastTo(pimage, LoadImage(str, bColorKey, bError));

    if (pimage) return pimage->GetSurface();

    return nullptr;
  }

  TRef<Image> LoadImage(const ZString &str, bool bColorKey, bool bError) override
  {
    ZAssert(str.ToLower() == str);
    ZAssert(str.Right(3) == "bmp");

    //
    // Is the image already loaded?
    //

    TRef<INameSpace> pns = GetCachedNameSpace(str);

    if (pns)
    {
      TRef<ConstantImage> pimage;
      CastTo(pimage, static_cast<Value *>(pns->FindMember(str)));
      if (pimage)
      {
        TRef<Surface> psurface = pimage->GetSurface();

        // HACK: Need to uncomment and track down the bug that's 
        // triggering this when a weapon fires, but this hack should
        // keep the debug client testable.  
        //ZAssert(bColorKey == psurface->HasColorKey());

        return pimage;
      }

      return nullptr;
    }

    //
    // Try to load it from MDL
    //

    pns = GetNameSpace(str, false);

    if (pns)
    {
      TRef<ConstantImage> pimage;
      CastTo(pimage, static_cast<Value *>(pns->FindMember(str)));
      if (pimage)
      {
        TRef<Surface> psurface = pimage->GetSurface();
        psurface->SetName(str);

        if (bColorKey) psurface->SetColorKey(Color(0, 0, 0));

        return pimage;
      }
    }

    //
    // No MDL file found - try loading the .bmp file directly.
    // The naming convention is: code uses "{name}bmp" which maps to
    // "{name}bmp.mdl" for the wrapped format, or "{name}.bmp" for raw files.
    //

    TRef<Image> pimage = CreateImageFromBMP(str, bColorKey);
    if (pimage) return pimage;

    if (bError && m_psite)
      ZRetailAssert(false);

    return nullptr;
  }

  TRef<Image> CreateImageFromBMP(const ZString &str, bool bColorKey)
  {
    // Strip the trailing "bmp" type marker to get the base name,
    // then look for {basename}.bmp on disk.
    ZString strBase = str.Left(str.GetLength() - 3);

    HBITMAP hbitmap = LoadBitmap(PathString(strBase), false);
    if (!hbitmap) return nullptr;

    if (g_bMDLLog)
      ZDebugOutput("Loading BMP file directly '" + strBase + ".bmp'\n");

    TRef<Surface> psurface = m_pengine->CreateSurface(hbitmap);
    ZVerify(::DeleteObject(hbitmap));

    if (!psurface) return nullptr;

    psurface->SetName(str);

    if (bColorKey) psurface->SetColorKey(Color(0, 0, 0));

    TRef<ConstantImage> pimage = new ConstantImage(psurface, strBase);

    // Cache in the namespace map so subsequent loads are fast
    TRef<INameSpace> pns = ::CreateNameSpace(str);
    pns->AddMember(str, static_cast<Value *>(pimage));
    m_mapNameSpace.Set(str, pns);

    return pimage;
  }

  HBITMAP LoadBitmap(const PathString &pathStrArg, bool bError) override
  {
    PathString pathStr = m_pathStr + pathStrArg;
    ZString strExtension = pathStr.GetExtension();

    if (strExtension == "bmp" || strExtension.IsEmpty())
    {
      if (strExtension.IsEmpty()) pathStr += ".bmp";

      return static_cast<HBITMAP>(::LoadImageA(NULL, pathStr, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE | LR_CREATEDIBSECTION));
    }

    return nullptr;
  }

  TRef<Geo> LoadGeo(const ZString &str, bool bError) override
  {
    ZAssert(str.ToLower() == str);
    TRef<INameSpace> pns = GetNameSpace(str, bError);

    if (pns)
    {
      TRef<Geo> pgeo;
      CastTo(pgeo, static_cast<Value *>(pns->FindMember("object")));
      return pgeo;
    }

    return nullptr;
  }

  TRef<Geo> LoadXFile(const PathString &pathStr, Number *pnumberFrame, bool &bAnimation, bool bError) override
  {
    TRef<ZFile> pfile = GetFile(pathStr, "x", bError);

    if (pfile) return ImportXFile(this, pfile, pnumberFrame, bAnimation);

    return nullptr;
  }

  INameSpace *CreateNameSpace(const ZString &str) override
  {
    TRef<INameSpace> pns = ::CreateNameSpace(str);

    m_mapNameSpace.Set(str, pns);

    return pns;
  }

  INameSpace *CreateNameSpace(const ZString &str, INameSpace *pnsParent) override
  {
    TRef<INameSpace> pns = ::CreateNameSpace(str, pnsParent);

    m_mapNameSpace.Set(str, pns);

    return pns;
  }

  INameSpace *GetCachedNameSpace(const ZString &str)
  {
    TRef<INameSpace> pns;

    if (m_mapNameSpace.Find(str, pns)) return pns;

    return nullptr;
  }

  //////////////////////////////////////////////////////////////////////////////
  //
  // Create a namespace from a .x file, bypassing the legacy D3DRM art pipeline.
  // Looks for name.x as the primary mesh. If name_static.x also exists, creates
  // a LODGeo with the animated mesh as the highest detail and the static mesh
  // as a lower LOD level.
  //
  //////////////////////////////////////////////////////////////////////////////

  INameSpace *CreateNameSpaceFromXFile(const ZString &str)
  {
    //
    // Strip any existing extension from the name
    //

    ZString strBase = str;
    PathString pathStr(str);
    ZString strExt = pathStr.GetExtension();
    if (!strExt.IsEmpty()) strBase = str.Left(str.GetLength() - strExt.GetLength() - 1);

    //
    // Try to load the primary .x file
    //

    TRef<ZFile> pfileX = GetFile(strBase, "x", false);
    if (!pfileX) return nullptr;

    if (g_bMDLLog)
      ZDebugOutput("Loading X file directly '" + strBase + ".x'\n");

    TRef<Number> pnumberFrame = new ModifiableNumber(0);
    bool bAnimation = false;
    TRef<Geo> pgeo = ImportXFile(this, pfileX, pnumberFrame, bAnimation);

    if (!pgeo)
    {
      ZDebugOutput("Failed to parse X file '" + strBase + ".x'\n");
      return nullptr;
    }

    //
    // Check if a _static.x variant exists for use as an LOD level
    //

    ZString strStatic = strBase + "_static";
    TRef<ZFile> pfileStatic = GetFile(strStatic, "x", false);

    if (pfileStatic)
    {
      if (g_bMDLLog)
        ZDebugOutput("Loading static LOD X file '" + strStatic + ".x'\n");

      bool bAnimStatic = false;
      TRef<Geo> pgeoStatic = ImportXFile(this, pfileStatic, pnumberFrame, bAnimStatic);

      if (pgeoStatic)
      {
        //
        // Create an LOD hierarchy: full mesh at distance > 64, static at <= 64
        //

        TRef<LODGeo> plodGeo = LODGeo::Create(pgeo);
        plodGeo->AddGeo(pgeoStatic, 64.0f);
        pgeo = plodGeo;
      }
    }

    //
    // Create a namespace and add the geo as "object"
    //

    TRef<INameSpace> pns = ::CreateNameSpace(str);
    pns->AddMember("object", pgeo);
    pns->AddMember("frame", static_cast<Number *>(pnumberFrame));

    return pns;
  }

  INameSpace *GetNameSpace(const ZString &str, bool bError) override
  {
    TRef<INameSpace> pns = GetCachedNameSpace(str);

    if (pns) return pns;

    TRef<ZFile> pfile = GetFile(str, "mdl", false);

    if (pfile != nullptr)
    {
      if (*(DWORD *) pfile->GetPointer(false, false) == MDLMagic)
      {
        if (g_bMDLLog)
          ZDebugOutput("Reading Binary MDL file '" + str + "'\n");
        pns = CreateBinaryNameSpace(str, this, pfile);
      }
      else
      {
        if (g_bMDLLog)
          ZDebugOutput("Reading Text MDL file '" + str + "'\n");
        pns = ::CreateNameSpace(str, this, pfile);
      }

      m_mapNameSpace.Set(str, pns);
      return pns;
    }

    //
    // No .mdl file found - try loading .x file directly.
    // This bypasses the legacy D3DRM-dependent art pipeline (xmunge/pmesh)
    // by using the engine's native X-file parser.
    //

    pns = CreateNameSpaceFromXFile(str);
    if (pns)
    {
      m_mapNameSpace.Set(str, pns);
      return pns;
    }

    if (bError && m_psite)
      ZRetailAssert(false);

    return nullptr;
  }

  void UnloadNameSpace(const ZString &str) override { m_mapNameSpace.Remove(str); }

  void UnloadNameSpace(INameSpace *pns) override { m_mapNameSpace.Remove(TRef<INameSpace>(pns)); }
};

//////////////////////////////////////////////////////////////////////////////
//
// Constructor
//
//////////////////////////////////////////////////////////////////////////////

TRef<Modeler> Modeler::Create(Engine *pengine) { return new ModelerImpl(pengine); }