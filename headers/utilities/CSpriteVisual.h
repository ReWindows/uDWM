#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 9 member(s).
class CSpriteVisual {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSpriteVisual@@QEAA@XZ
    CSpriteVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CSpriteVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSpriteVisual@@SAJPEAPEAV1@@Z
    static long Create(CSpriteVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSpriteVisual@@UEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@CSpriteVisual@@UEAAXN@Z
    virtual void SetOpacity(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CSpriteVisual@@UEAAXPEBUtagSIZE@@@Z
    virtual void SetSize(tagSIZE const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSpriteVisual@@UEAA@XZ
    virtual ~CSpriteVisual();
};
