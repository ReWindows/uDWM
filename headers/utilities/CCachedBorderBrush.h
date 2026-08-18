#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 2 member(s).
namespace CWindowBorder {
class CCachedBorderBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z
    static long CreateBorderSurface(float, int, _D3DCOLORVALUE const &, int, int, ::Windows::UI::Composition::ICompositionSurface * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCachedBorderBrush@CWindowBorder@@QEAA@XZ
    ~CCachedBorderBrush();
};
} // namespace CWindowBorder
