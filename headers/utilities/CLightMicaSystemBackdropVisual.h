#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CLightMicaSystemBackdropVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CLightMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveBaseColor@CLightMicaSystemBackdropVisual@@EEBAAEBUColor@UI@Windows@@XZ
    virtual ::Windows::UI::Color const & GetActiveBaseColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveBrush@CLightMicaSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::ICompositionBrush * GetActiveBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFallbackColor@CLightMicaSystemBackdropVisual@@EEBAAEBUColor@UI@Windows@@XZ
    virtual ::Windows::UI::Color const & GetFallbackColor() const;
};
