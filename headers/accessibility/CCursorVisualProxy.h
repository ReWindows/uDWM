#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CCursorVisualProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCursorVisualProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursorId@CCursorVisualProxy@@QEAAJ_K@Z
    long SetCursorId(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHardwareCursorEnabled@CCursorVisualProxy@@QEAAJ_N@Z
    long SetIsHardwareCursorEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsSynchronized@CCursorVisualProxy@@QEAAJ_N@Z
    long SetIsSynchronized(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CCursorVisualProxy@@QEAAJHH@Z
    long SetPosition(int, int);
};
