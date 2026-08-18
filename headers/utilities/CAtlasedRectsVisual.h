#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 19 member(s).
class CAtlasedRectsVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@@Z
    long AddAtlasImage(CAtlasedImage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z
    static long Create(CAtlasedRectsVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z
    long InsertAfterAtlasImage(CAtlasedImage *, CAtlasedImage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z
    long InsertAtlasImageAtIndex(CAtlasedImage *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ
    void RemoveAllAtlasImages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z
    void RemoveAtlasImage(CAtlasedImage *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z
    long SetClipMargins(_MARGINS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ
    virtual long UpdateAtlas();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAtlasLayout@CAtlasedRectsVisual@@QEAAXXZ
    void UpdateAtlasLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z
    virtual long UpdateLayout(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ
    virtual long ValidateVisualPostSubgraph();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAtlasedRectsVisual@@IEAA@XZ
    CAtlasedRectsVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z
    long InitializeVisualTreeClone(CAtlasedRectsVisual *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCloneAtlasImage@CAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@W4CloneOptions@@@Z
    virtual bool ShouldCloneAtlasImage(CAtlasedImage const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDrawAtlasImage@CAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@@Z
    virtual bool ShouldDrawAtlasImage(CAtlasedImage const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAtlasedRectsVisual@@MEAA@XZ
    virtual ~CAtlasedRectsVisual();
};
