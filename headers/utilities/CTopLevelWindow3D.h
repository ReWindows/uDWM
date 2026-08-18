#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 50 member(s).
class CTopLevelWindow3D {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA?AUD2D_POINTANDSIZE_F@@AEBU2@@Z
    D2D_POINTANDSIZE_F AdjustSnapUIArrangementStartRect(D2D_POINTANDSIZE_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z
    long BeginDestroySprite(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPendingAnimations@CTopLevelWindow3D@@QEAAXXZ
    void ClearPendingAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTopLevelWindow3D@@SAJPEAPEAV1@@Z
    static long Create(CTopLevelWindow3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z
    long EnsureSecondaryWindowRepresentation(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUD2D_POINTANDSIZE_F@@@Z
    static void GetFinalMinRect(tagRECT *, float, D2D_POINTANDSIZE_F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSnapThumbnailLocation@CTopLevelWindow3D@@QEAA?AUtagRECT@@XZ
    tagRECT GetSnapThumbnailLocation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadyForMaximizeSnapPostTransition@CTopLevelWindow3D@@QEAA_NXZ
    bool IsReadyForMaximizeSnapPostTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ
    virtual long OnGlobalTimeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsInWindowMoveUpdated@CTopLevelWindow3D@@QEAAJ_N@Z
    long OnIsInWindowMoveUpdated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z
    long OnOffsetUpdated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z
    virtual void OnSWRInvalidated(CSecondaryWindowRepresentation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z
    virtual void OnSizeChanged(CSecondaryWindowRepresentation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ
    void OnWindowSizeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ
    long OnWindowStyleUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z
    long OnZOrderUpdated(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCContainerVisual@@@Z
    virtual long SetParent(CContainerVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z
    void SetWindowData(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ
    bool ShouldShowTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z
    long ShowWindow(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z
    long StartAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationForCrossDisplaysMoveDuringModeChange@CTopLevelWindow3D@@QEAAJXZ
    long StartAnimationForCrossDisplaysMoveDuringModeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationForMoveResizeTransition@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@AEBUtagRECT@@@Z
    long StartAnimationForMoveResizeTransition(int, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ
    long StartDelayHideAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ
    long StartGrowAnimationForThumbnail();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ
    long StartMinimizeAnimationForDisplayChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartShrinkAnimationForThumbnail@CTopLevelWindow3D@@QEAAJMUtagPOINT@@@Z
    long StartShrinkAnimationForThumbnail(float, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ
    long StopAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAnimationCompletedHandler@CTopLevelWindow3D@@QEAAXXZ
    void UnregisterAnimationCompletedHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ
    virtual long ValidateVisual();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTopLevelWindow3D@@IEAA@XZ
    CTopLevelWindow3D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTopLevelWindow3D@@MEAAJXZ
    virtual long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTopLevelWindow3D@@MEAA@XZ
    virtual ~CTopLevelWindow3D();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA?AUInterpolationParameters@@PEAUTA_TIMINGFUNCTION@@@Z
    InterpolationParameters ConvertTimingFunctionToInterpolationParameters(TA_TIMINGFUNCTION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMAEBUInterpolationParameters@@@Z
    long CreateTimelineForTransform(int, float, float, float, InterpolationParameters const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformMatrix@CTopLevelWindow3D@@AEAAXPEAUD2DMatrix@@AEBUD2D_POINT_3F@@1111@Z
    void CreateTransformMatrix(D2DMatrix *, D2D_POINT_3F const &, D2D_POINT_3F const &, D2D_POINT_3F const &, D2D_POINT_3F const &, D2D_POINT_3F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ
    long EnsureRenderData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ
    long EnsureResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z
    long GetAnimationIds(int, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z
    void GetScenarioGuid(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTransformSupported@CTopLevelWindow3D@@AEAA_NW4TA_TRANSFORM_TYPE@@@Z
    bool IsTransformSupported(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ
    bool IsWindowInSystemArrangementAnimation() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ
    void ReleaseSceneObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z
    bool ShouldDelayTransition(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ
    bool ShouldFreezeAnimationCVI() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHandleTransition@CTopLevelWindow3D@@AEBA_NXZ
    bool ShouldHandleTransition() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ
    long UpdateAnimatedResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAndClearAnimatedWhenUncloaked@CTopLevelWindow3D@@AEAA_NXZ
    bool _GetAndClearAnimatedWhenUncloaked();
};
