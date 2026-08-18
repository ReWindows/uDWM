#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CContainerVisualProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z
    long InsertChild(CVisualProxy *, CVisualProxy *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllChildren@CContainerVisualProxy@@QEAAJXZ
    long RemoveAllChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z
    long RemoveChild(CVisualProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CContainerVisualProxy@@QEAAJPEBVCResourceProxy@@@Z
    long SetContent(CResourceProxy const *);
};
