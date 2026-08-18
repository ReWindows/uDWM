#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 10 member(s).
class CSystemBackdropVisual {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSystemBackdropVisual@@QEAA@XZ
    CSystemBackdropVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z
    static long Create(int, CSystemBackdropVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentBaseColor@CSystemBackdropVisual@@QEBAKXZ
    unsigned long GetCurrentBaseColor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBrush@CSystemBackdropVisual@@QEAAJ_N0000@Z
    long UpdateBrush(bool, bool, bool, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSystemBackdropVisual@@UEAA@XZ
    virtual ~CSystemBackdropVisual();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualTreeClone@CSystemBackdropVisual@@IEAAJPEAV1@W4CloneOptions@@@Z
    long InitializeVisualTreeClone(CSystemBackdropVisual *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorBrush@CSystemBackdropVisual@@AEAAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z
    long CreateColorBrush(::Windows::UI::Color, ::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z
    long SetState(int, bool, bool);
};
