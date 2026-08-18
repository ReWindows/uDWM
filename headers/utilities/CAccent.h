#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 37 member(s).
class CAccent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAccent@@SAJPEAPEAV1@@Z
    static long Create(CAccent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTransition@CAccent@@QEAAJXZ
    long EndTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAccentStateUpdated@CAccent@@QEAAXXZ
    void OnAccentStateUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGraphicsDeviceLost@CAccent@@QEAAXXZ
    void OnGraphicsDeviceLost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z
    void SetClipRegion(CBaseGeometryProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentVisible@CAccent@@QEAAX_N@Z
    void SetParentVisible(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTransition@CAccent@@QEAAJXZ
    long StartTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z
    void UpdateAccentBlurRect(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z
    long UpdateAccentPolicy(tagRECT const *, ACCENT_POLICY const *, CBaseGeometryProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayout@CAccent@@UEAAJ_N@Z
    virtual long UpdateLayout(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransitionGradientAlpha@CAccent@@QEAAXM@Z
    void UpdateTransitionGradientAlpha(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CAccent@@UEAAJXZ
    virtual long ValidateVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z
    static bool s_IsPolicyActive(ACCENT_POLICY const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAccent@@IEAA@XZ
    CAccent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShadowMargins@CAccent@@KA?AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z
    static _MARGINS GetShadowMargins(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAccent@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z
    long InitializeVisualTreeClone(CAccent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AnyTransparentBackground@CAccent@@IEBA_NXZ
    bool _AnyTransparentBackground() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ
    void _CleanupNonStaticsResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z
    long _EnsureBackgroundVisual(ACCENT_POLICY const *, CRenderDataVisual * *, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ
    long _EnsureBorderShadowAtlas();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSolidFillOpacity@CAccent@@IEBAMXZ
    float _GetSolidFillOpacity() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAnimationNeeded@CAccent@@IEAA_NXZ
    bool _IsAnimationNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z
    bool _IsShadowPartApplicableFromFlags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ
    long _RemoveBorderShadowAtlas();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ
    long _UpdateAcrylicBlurBehind();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ
    long _UpdateBackgroundGeometry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ
    long _UpdateBorderShadowForAccent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ
    long _UpdateBorderShadowParts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateClipRegion@CAccent@@IEAAXXZ
    void _UpdateClipRegion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateResources@CAccent@@IEAAJXZ
    long _UpdateResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z
    long _UpdateSolidFill(CRenderDataVisual *, unsigned long, WindissectOpaque const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTransitionGradient@CAccent@@IEAAXXZ
    void _UpdateTransitionGradient();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAccent@@MEAA@XZ
    virtual ~CAccent();
};
