#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 81 member(s).
class CAnimatedTransitionVisual {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAnimatedTransitionVisual@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clip@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_CLIP@@@Z
    virtual long Clip(TA_TRANSFORM_CLIP const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z
    long CopyVisual(CAnimatedTransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z
    static long Create(CAnimatedTransitionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ
    virtual long EmitBindingCommands();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z
    virtual long GetAnimationResourceNoRef(int, CAnimationResource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBeginAlpha@CAnimatedTransitionVisual@@UEAAJPEAM@Z
    virtual long GetBeginAlpha(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBeginClip@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z
    virtual long GetBeginClip(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBeginDepth@CAnimatedTransitionVisual@@UEAAJPEAM@Z
    virtual long GetBeginDepth(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBeginRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z
    virtual long GetBeginRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ
    CImageLegacyMilBrushProxy * GetBrushNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChopIndex@CAnimatedTransitionVisual@@UEAAJPEAI@Z
    virtual long GetChopIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChopStart@CAnimatedTransitionVisual@@UEAAJPEAN@Z
    virtual long GetChopStart(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChopStop@CAnimatedTransitionVisual@@UEAAJPEAN@Z
    virtual long GetChopStop(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndAlpha@CAnimatedTransitionVisual@@UEAAJPEAM@Z
    virtual long GetEndAlpha(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndClip@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z
    virtual long GetEndClip(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndDepth@CAnimatedTransitionVisual@@UEAAJPEAM@Z
    virtual long GetEndDepth(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z
    virtual long GetEndRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProgress@CAnimatedTransitionVisual@@UEAAJPEAM@Z
    virtual long GetProgress(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStaggerOrder@CAnimatedTransitionVisual@@UEAAJPEAI@Z
    virtual long GetStaggerOrder(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionTarget@CAnimatedTransitionVisual@@UEAAJPEAH@Z
    virtual long GetTransitionTarget(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideGhost@CAnimatedTransitionVisual@@UEAAJXZ
    virtual long HideGhost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRTL@CAnimatedTransitionVisual@@UEAA_NXZ
    virtual bool IsRTL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedToUpdateScene@CAnimatedTransitionVisual@@UEAA_NXZ
    virtual bool NeedToUpdateScene();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z
    virtual long OnStoryboardBegin(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardEnd@CAnimatedTransitionVisual@@UEAAJXZ
    virtual long OnStoryboardEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z
    virtual long Opacity(TA_TRANSFORM_OPACITY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z
    long ProcessSnapshotOnVisual(CVisual *, tagRECT const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAnimatedTransitionVisual@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rotate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z
    virtual long Rotate2D(TA_TRANSFORM_2D const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rotate3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z
    virtual long Rotate3D(TA_TRANSFORM_3D const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z
    virtual long Scale2D(TA_TRANSFORM_2D const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scale3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z
    virtual long Scale3D(TA_TRANSFORM_3D const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z
    void SetBeginAlpha(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBeginClip@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z
    void SetBeginClip(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z
    void SetBeginRect(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z
    long SetBitmap(CBitmapSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualImageProxy@@@Z
    long SetCVIBrush(CImageLegacyMilBrushProxy *, CCachedVisualImageProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z
    void SetChopPosition(double const *, double const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z
    long SetClientAreaBrush(CImageLegacyMilBrushProxy *, CCachedVisualImageProxy *, D2D_POINT_3F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentTransformMode@CAnimatedTransitionVisual@@UEAAXW4TransformMode@@@Z
    virtual void SetCurrentTransformMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEndAlpha@CAnimatedTransitionVisual@@QEAAXM@Z
    void SetEndAlpha(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEndClip@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z
    void SetEndClip(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z
    void SetEndRect(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverrideMorphedBeginAlpha@CAnimatedTransitionVisual@@QEAAX_N@Z
    void SetOverrideMorphedBeginAlpha(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverrideRotationCenter@CAnimatedTransitionVisual@@QEAAXPEAUD2D_POINT_3F@@W4RotationCenterReference3D@@@Z
    void SetOverrideRotationCenter(D2D_POINT_3F *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverrideScalingCenter@CAnimatedTransitionVisual@@QEAAXPEAUD2D_POINT_3F@@@Z
    void SetOverrideScalingCenter(D2D_POINT_3F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z
    virtual long SetStartTrigger(CAnimationTriggerProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z
    void SetTransitionStoryboardAndTarget(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z
    long SetVisual(CVisual *, bool, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAnimateClip@CAnimatedTransitionVisual@@UEAA_NXZ
    virtual bool ShouldAnimateClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseDComp@CAnimatedTransitionVisual@@UEAA_NXZ
    virtual bool ShouldUseDComp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCContainerVisual@@@Z
    long StealStagedVisual(CContainerVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z
    virtual long Translate2D(TA_TRANSFORM_2D const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Translate3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z
    virtual long Translate3D(TA_TRANSFORM_3D const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ
    virtual long ValidateVisual();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimatedTransitionVisual@@IEAA@XZ
    CAnimatedTransitionVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Ensure2DResources@CAnimatedTransitionVisual@@IEAAJXZ
    long Ensure2DResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ
    long Ensure3DResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ
    long EnsureResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ
    long UpdateBackgroundWithClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ
    long UpdateGeometry2DAndOpacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGeometry2DForClonedStagedVisual@CAnimatedTransitionVisual@@IEAAJXZ
    long UpdateGeometry2DForClonedStagedVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ
    long UpdateGeometry2DWithClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ
    long UpdateVisualOpacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ
    long Validate2DVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ
    long Validate3DVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z
    long _BindIfPresent(int, CResourceProxy *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ
    long _Ensure3DRenderData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ
    long _EnsureDCompResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LogVisualBeginAndEndValues@CAnimatedTransitionVisual@@IEAAXI@Z
    void _LogVisualBeginAndEndValues(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NormalizeAngleToShowFront@CAnimatedTransitionVisual@@IEAAMM@Z
    float _NormalizeAngleToShowFront(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ
    long _Update3DResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ
    long _UpdateAnimated3DResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCBaseImageProxy@@@Z
    long _UpdateBrush(CBaseImageProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ
    long _ValidateDCompVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimatedTransitionVisual@@MEAA@XZ
    virtual ~CAnimatedTransitionVisual();
};
