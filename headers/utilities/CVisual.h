#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 65 member(s).
class CVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBorderMode@CVisual@@QEAAXXZ
    void ClearBorderMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearInterpolationMode@CVisual@@QEAAXXZ
    void ClearInterpolationMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToParent@CVisual@@QEAAJ_N@Z
    long ConnectToParent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CVisual@@SAJPEAPEAV1@@Z
    static long Create(CVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z
    static long CreateFromSharedHandle(void *, CVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z
    static bool DoCanvasLayout(tagSIZE const &, _MARGINS const &, tagSIZE const &, tagPOINT *, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z
    virtual bool DoHitTest(tagPOINT const &, CVisual * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z
    void GetLocalToParentVisualTransform(CVisual *, D2DMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformParent@CVisual@@UEBAPEAV1@XZ
    virtual CVisual * GetTransformParent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CVisual@@QEAAXXZ
    void Hide();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCanvasVisual@CVisual@@UEBA_NXZ
    virtual bool IsCanvasVisual() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseEnter@CVisual@@QEAAXXZ
    void MouseEnter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseLeave@CVisual@@QEAAXXZ
    void MouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToFront@CVisual@@QEAAJ_N@Z
    long MoveToFront(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdated@CVisual@@UEAAJXZ
    virtual long OnGlobalTimeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseEnter@CVisual@@UEAAXXZ
    virtual void OnMouseEnter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseLeave@CVisual@@UEAAXXZ
    virtual void OnMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseLeftButton@CVisual@@UEAAX_N@Z
    virtual void OnMouseLeftButton(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateDirtyChildren@CVisual@@QEAAXXZ
    void PropagateDirtyChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSelfFromParent@CVisual@@QEAAJXZ
    long RemoveSelfFromParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderRecursive@CVisual@@UEAAJXZ
    virtual long RenderRecursive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z
    long SetBlurredWallpaperSurface(CResourceProxy *, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z
    void SetBorderMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenter@CVisual@@QEAAXMM@Z
    void SetCenter(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z
    long SetColorTransform(MilColorTransform const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirtyFlags@CVisual@@UEAAXK@Z
    virtual void SetDirtyFlags(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeight@CVisual@@QEAAXH@Z
    void SetHeight(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z
    long SetHitTestVisibility(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z
    long SetIgnoreClipForHitTest(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z
    void SetInsetFromParent(_MARGINS const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsetFromParentBottom@CVisual@@QEAAXH@Z
    void SetInsetFromParentBottom(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z
    void SetInsetFromParentLeft(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsetFromParentRight@CVisual@@QEAAXH@Z
    void SetInsetFromParentRight(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsetFromParentTop@CVisual@@QEAAXH@Z
    void SetInsetFromParentTop(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z
    void SetInterpolationMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsMagnifier@CVisual@@QEAAJ_N@Z
    long SetIsMagnifier(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z
    void SetOffset(tagPOINT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@CVisual@@UEAAXN@Z
    virtual void SetOpacity(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CVisual@@UEAAJPEAVCContainerVisual@@@Z
    virtual long SetParent(CContainerVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRTLMirror@CVisual@@QEAAX_N@Z
    void SetRTLMirror(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotation@CVisual@@QEAAXN@Z
    void SetRotation(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z
    long SetSamplingMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@CVisual@@QEAAXMM@Z
    void SetScale(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z
    virtual void SetSize(tagSIZE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CVisual@@QEAAXHH@Z
    void SetSize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z
    bool TransformFromParent(tagPOINT const &, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unhide@CVisual@@QEAAXXZ
    void Unhide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayout@CVisual@@UEAAJ_N@Z
    virtual long UpdateLayout(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOpacity@CVisual@@UEAAJXZ
    virtual long UpdateOpacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CVisual@@UEAAJXZ
    virtual long ValidateVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisualPostSubgraph@CVisual@@UEAAJXZ
    virtual long ValidateVisualPostSubgraph();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisual@@IEAA@XZ
    CVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMirrorTransform@CVisual@@MEAAXPEAUD2DMatrix@@@Z
    virtual void GetMirrorTransform(D2DMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromSharedHandle@CVisual@@MEAAJPEAX@Z
    virtual long InitializeFromSharedHandle(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z
    long InitializeVisualTreeClone(CVisual *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSetOpacity@CVisual@@MEAAJN@Z
    virtual long SendSetOpacity(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOffset@CVisual@@MEAAJXZ
    virtual long UpdateOffset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisual@@MEAA@XZ
    virtual ~CVisual();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z
    bool GetCurrentTransform(D2DMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHidden@CVisual@@AEAAJXZ
    long UpdateHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransform@CVisual@@AEAAJXZ
    long UpdateTransform();
};
