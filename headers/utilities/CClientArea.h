#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 9 member(s).
class CClientArea {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CClientArea@@SAJPEAVCWindowData@@PEAPEAV1@@Z
    static long Create(CWindowData *, CClientArea * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBounds@CClientArea@@QEAAJXZ
    long SetBounds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z
    long SetMaximizedClipMargins(_MARGINS const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CClientArea@@IEAA@XZ
    CClientArea();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z
    static long Create(CVisualProxy *, CClientArea * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CClientArea@@MEAA@XZ
    virtual ~CClientArea();
};
