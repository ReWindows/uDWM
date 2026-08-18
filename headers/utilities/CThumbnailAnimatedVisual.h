#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 39 member(s).
class CThumbnailAnimatedVisual {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CThumbnailAnimatedVisual@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z
    long AddSolidBrushInstruction(CRectangleGeometryProxy *, unsigned long, float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CThumbnailAnimatedVisual@@QEAA@XZ
    CThumbnailAnimatedVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clip@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_CLIP@@@Z
    virtual long Clip(TA_TRANSFORM_CLIP const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitBindingCommands@CThumbnailAnimatedVisual@@UEAAJXZ
    virtual long EmitBindingCommands();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationResourceNoRef@CThumbnailAnimatedVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z
    virtual long GetAnimationResourceNoRef(int, CAnimationResource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBeginAlpha@CThumbnailAnimatedVisual@@UEAAJPEAM@Z
    virtual long GetBeginAlpha(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBeginClip@CThumbnailAnimatedVisual@@UEAAJPEAUtagRECT@@@Z
    virtual long GetBeginClip(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBeginDepth@CThumbnailAnimatedVisual@@UEAAJPEAM@Z
    virtual long GetBeginDepth(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBeginRect@CThumbnailAnimatedVisual@@UEAAJPEAUtagRECT@@@Z
    virtual long GetBeginRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChopIndex@CThumbnailAnimatedVisual@@UEAAJPEAI@Z
    virtual long GetChopIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChopStart@CThumbnailAnimatedVisual@@UEAAJPEAN@Z
    virtual long GetChopStart(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChopStop@CThumbnailAnimatedVisual@@UEAAJPEAN@Z
    virtual long GetChopStop(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndAlpha@CThumbnailAnimatedVisual@@UEAAJPEAM@Z
    virtual long GetEndAlpha(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndClip@CThumbnailAnimatedVisual@@UEAAJPEAUtagRECT@@@Z
    virtual long GetEndClip(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndDepth@CThumbnailAnimatedVisual@@UEAAJPEAM@Z
    virtual long GetEndDepth(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndRect@CThumbnailAnimatedVisual@@UEAAJPEAUtagRECT@@@Z
    virtual long GetEndRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProgress@CThumbnailAnimatedVisual@@UEAAJPEAM@Z
    virtual long GetProgress(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStaggerOrder@CThumbnailAnimatedVisual@@UEAAJPEAI@Z
    virtual long GetStaggerOrder(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionTarget@CThumbnailAnimatedVisual@@UEAAJPEAH@Z
    virtual long GetTransitionTarget(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideGhost@CThumbnailAnimatedVisual@@UEAAJXZ
    virtual long HideGhost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRTL@CThumbnailAnimatedVisual@@UEAA_NXZ
    virtual bool IsRTL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedToUpdateScene@CThumbnailAnimatedVisual@@UEAA_NXZ
    virtual bool NeedToUpdateScene();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardBegin@CThumbnailAnimatedVisual@@UEAAJI@Z
    virtual long OnStoryboardBegin(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardEnd@CThumbnailAnimatedVisual@@UEAAJXZ
    virtual long OnStoryboardEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Opacity@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z
    virtual long Opacity(TA_TRANSFORM_OPACITY const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CThumbnailAnimatedVisual@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rotate2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z
    virtual long Rotate2D(TA_TRANSFORM_2D const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rotate3D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z
    virtual long Rotate3D(TA_TRANSFORM_3D const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z
    virtual long Scale2D(TA_TRANSFORM_2D const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scale3D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z
    virtual long Scale3D(TA_TRANSFORM_3D const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentTransformMode@CThumbnailAnimatedVisual@@UEAAXW4TransformMode@@@Z
    virtual void SetCurrentTransformMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStartTrigger@CThumbnailAnimatedVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z
    virtual long SetStartTrigger(CAnimationTriggerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAnimateClip@CThumbnailAnimatedVisual@@UEAA_NXZ
    virtual bool ShouldAnimateClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseDComp@CThumbnailAnimatedVisual@@UEAA_NXZ
    virtual bool ShouldUseDComp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Translate2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z
    virtual long Translate2D(TA_TRANSFORM_2D const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Translate3D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z
    virtual long Translate3D(TA_TRANSFORM_3D const *);
};
