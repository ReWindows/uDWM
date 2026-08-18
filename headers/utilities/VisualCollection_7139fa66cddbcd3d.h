#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 10 member(s).
class VisualCollection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ
    VisualCollectionIterator GetIterator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z
    long InsertRelative(CVisual *, CVisual *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z
    long Remove(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@VisualCollection@@QEAAXXZ
    void RemoveAll();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualCollection@@QEAA@XZ
    VisualCollection();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualCollection@@QEAA@XZ
    ~VisualCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompNodeDisconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z
    long CompNodeDisconnectChild(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompNodeReconnectChild@VisualCollection@@AEAAJPEAVCVisual@@@Z
    long CompNodeReconnectChild(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendLinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@0_N@Z
    long SendLinkVisualCommand(CVisualProxy *, CVisualProxy *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendUnlinkVisualCommand@VisualCollection@@AEAAJPEAVCVisualProxy@@@Z
    long SendUnlinkVisualCommand(CVisualProxy *);
};
