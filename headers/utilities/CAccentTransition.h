#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 9 member(s).
class CAccentTransition {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAccentTransition@@QEAA@XZ
    CAccentTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupAnimation@CAccentTransition@@QEAAXXZ
    void CleanupAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@CAccentTransition@@UEAAJI@Z
    virtual long OnAnimationComplete(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z
    long StartAnimation(ACCENT_POLICY const *, CAccent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@CAccentTransition@@QEAAXXZ
    void StopAnimation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAccentTransition@@UEAA@XZ
    virtual ~CAccentTransition();
};
