#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 8 member(s).
class CLoginTransition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbortAnimation@CLoginTransition@@QEAAXXZ
    void AbortAnimation();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLoginTransition@@QEAA@XZ
    CLoginTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z
    virtual long OnAnimationComplete(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z
    long StartAnimation(int, CVisual *, CVisual *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@CLoginTransition@@QEAAJXZ
    long StopAnimation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLoginTransition@@QEAA@XZ
    ~CLoginTransition();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupAnimation@CLoginTransition@@AEAAXXZ
    void _CleanupAnimation();
};
