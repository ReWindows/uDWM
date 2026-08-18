#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CMicaSystemBackdropVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveBaseColor@CMicaSystemBackdropVisual@@EEBAAEBUColor@UI@Windows@@XZ
    virtual ::Windows::UI::Color const & GetActiveBaseColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveBrush@CMicaSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ
    virtual ::Windows::UI::Composition::ICompositionBrush * GetActiveBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFallbackColor@CMicaSystemBackdropVisual@@EEBAAEBUColor@UI@Windows@@XZ
    virtual ::Windows::UI::Color const & GetFallbackColor() const;
};
