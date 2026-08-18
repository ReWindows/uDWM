#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CGlassColorizationResources {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClearColor@CGlassColorizationResources@@QEAAXXZ
    void SetClearColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CGlassColorizationResources@@QEAAXK@Z
    void SetColor(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CGlassColorizationResources@@QEAAJPEBVCGlassColorizationParameters@@@Z
    long Update(CGlassColorizationParameters const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGlassColorizationResources@@UEAA@XZ
    virtual ~CGlassColorizationResources();
};
