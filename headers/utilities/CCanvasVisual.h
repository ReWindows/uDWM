#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 9 member(s).
class CCanvasVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z
    static long Create(CCanvasVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCanvasVisual@CCanvasVisual@@UEBA_NXZ
    virtual bool IsCanvasVisual() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z
    virtual long UpdateLayout(bool);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCanvasVisual@@IEAA@XZ
    CCanvasVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCanvasVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCanvasVisual@@MEAA@XZ
    virtual ~CCanvasVisual();
};
