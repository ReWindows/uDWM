#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 42 member(s).
class CAccentTransitionAnimatedVisual {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAccentTransitionAnimatedVisual@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAccentTransitionAnimatedVisual@@QEAA@PEAVCAccent@@H@Z
    CAccentTransitionAnimatedVisual(CAccent *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clip@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_CLIP@@@Z
    virtual long Clip(TA_TRANSFORM_CLIP const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitBindingCommands@CAccentTransitionAnimatedVisual@@UEAAJXZ
    virtual long EmitBindingCommands();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationResourceNoRef@CAccentTransitionAnimatedVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z
    virtual long GetAnimationResourceNoRef(int, CAnimationResource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBeginAlpha@CAccentTransitionAnimatedVisual@@UEAAJPEAM@Z
    virtual long GetBeginAlpha(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBeginClip@CAccentTransitionAnimatedVisual@@UEAAJPEAUtagRECT@@@Z
    virtual long GetBeginClip(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBeginDepth@CAccentTransitionAnimatedVisual@@UEAAJPEAM@Z
    virtual long GetBeginDepth(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBeginRect@CAccentTransitionAnimatedVisual@@UEAAJPEAUtagRECT@@@Z
    virtual long GetBeginRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChopIndex@CAccentTransitionAnimatedVisual@@UEAAJPEAI@Z
    virtual long GetChopIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChopStart@CAccentTransitionAnimatedVisual@@UEAAJPEAN@Z
    virtual long GetChopStart(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChopStop@CAccentTransitionAnimatedVisual@@UEAAJPEAN@Z
    virtual long GetChopStop(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndAlpha@CAccentTransitionAnimatedVisual@@UEAAJPEAM@Z
    virtual long GetEndAlpha(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndClip@CAccentTransitionAnimatedVisual@@UEAAJPEAUtagRECT@@@Z
    virtual long GetEndClip(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndDepth@CAccentTransitionAnimatedVisual@@UEAAJPEAM@Z
    virtual long GetEndDepth(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndRect@CAccentTransitionAnimatedVisual@@UEAAJPEAUtagRECT@@@Z
    virtual long GetEndRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProgress@CAccentTransitionAnimatedVisual@@UEAAJPEAM@Z
    virtual long GetProgress(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStaggerOrder@CAccentTransitionAnimatedVisual@@UEAAJPEAI@Z
    virtual long GetStaggerOrder(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionTarget@CAccentTransitionAnimatedVisual@@UEAAJPEAH@Z
    virtual long GetTransitionTarget(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideGhost@CAccentTransitionAnimatedVisual@@UEAAJXZ
    virtual long HideGhost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRTL@CAccentTransitionAnimatedVisual@@UEAA_NXZ
    virtual bool IsRTL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedToUpdateScene@CAccentTransitionAnimatedVisual@@UEAA_NXZ
    virtual bool NeedToUpdateScene();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardBegin@CAccentTransitionAnimatedVisual@@UEAAJI@Z
    virtual long OnStoryboardBegin(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardEnd@CAccentTransitionAnimatedVisual@@UEAAJXZ
    virtual long OnStoryboardEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Opacity@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z
    virtual long Opacity(TA_TRANSFORM_OPACITY const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAccentTransitionAnimatedVisual@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rotate2D@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z
    virtual long Rotate2D(TA_TRANSFORM_2D const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rotate3D@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z
    virtual long Rotate3D(TA_TRANSFORM_3D const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scale2D@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z
    virtual long Scale2D(TA_TRANSFORM_2D const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scale3D@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z
    virtual long Scale3D(TA_TRANSFORM_3D const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBeginRect@CAccentTransitionAnimatedVisual@@QEAAXPEAUtagRECT@@@Z
    void SetBeginRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentTransformMode@CAccentTransitionAnimatedVisual@@UEAAXW4TransformMode@@@Z
    virtual void SetCurrentTransformMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEndRect@CAccentTransitionAnimatedVisual@@QEAAXPEAUtagRECT@@@Z
    void SetEndRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStartTrigger@CAccentTransitionAnimatedVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z
    virtual long SetStartTrigger(CAnimationTriggerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAnimateClip@CAccentTransitionAnimatedVisual@@UEAA_NXZ
    virtual bool ShouldAnimateClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseDComp@CAccentTransitionAnimatedVisual@@UEAA_NXZ
    virtual bool ShouldUseDComp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Translate2D@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z
    virtual long Translate2D(TA_TRANSFORM_2D const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Translate3D@CAccentTransitionAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z
    virtual long Translate3D(TA_TRANSFORM_3D const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAccentTransitionAnimatedVisual@@UEAA@XZ
    virtual ~CAccentTransitionAnimatedVisual();
};
