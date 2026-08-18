#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 3 member(s).
class DXGIOutputInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ
    bool IsAttachedToDesktop() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ
    long UpdateDesc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@DXGIOutputInfo@@QEBAJXZ
    long Validate() const;
};
