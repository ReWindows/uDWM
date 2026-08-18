#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CCursorVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CCursorVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z
    static long Create(CCompositor *, uint64_t, CCursorVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHardwareCursorEnabled@CCursorVisual@@QEAAJ_N@Z
    long SetIsHardwareCursorEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsSynchronized@CCursorVisual@@QEAAJ_N@Z
    long SetIsSynchronized(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CCursorVisual@@QEAAJHH@Z
    long SetPosition(int, int);
};
