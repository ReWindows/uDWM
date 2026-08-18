#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 13 member(s).
class CAccentAcrylicBlurBehind {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAccentAcrylicBlurBehind@@QEAA@XZ
    CAccentAcrylicBlurBehind();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z
    static long Create(CAccentAcrylicBlurBehind * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGraphicsDeviceLost@CAccentAcrylicBlurBehind@@QEAAXXZ
    void OnGraphicsDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@KPEBN@Z
    long UpdateAcrylicBlurBehind(ACCENT_POLICY const &, unsigned long, double const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z
    long EnsureAcrylicBrushForAccent(unsigned long, double const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ
    long EnsureNoiseSurfaceBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU?$IReference@N@Foundation@Windows@@@Z
    long GetLuminosityOpacityReference(double, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ
    long InitializeDComp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ
    void ReleaseResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAccentAcrylicBlurBehind@@EEAA@XZ
    virtual ~CAccentAcrylicBlurBehind();
};
