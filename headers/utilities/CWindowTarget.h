#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CWindowTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z
    static long CreateFromSharedHandle(void *, CWindowTarget * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowTarget@@IEAA@XZ
    CWindowTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z
    static long Create(CVisualProxy *, CWindowTarget * *);
};
