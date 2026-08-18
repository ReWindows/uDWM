#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
class CWindowArrangementTransition {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowArrangementTransition@@QEAA@PEAVCWindowList@@@Z
    CWindowArrangementTransition(CWindowList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z
    long OnWindowArrangementContinue(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAXXZ
    void OnWindowArrangementEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z
    long OnWindowArrangementStart(CWindowData *, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ
    long OnWindowDestroyed();
};
