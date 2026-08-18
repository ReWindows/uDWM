#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 19 member(s).
class CContainerVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z
    long AddChild(CVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CContainerVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CContainerVisual@@SAJPEAPEAV1@@Z
    static long Create(CContainerVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoHitTest@CContainerVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z
    virtual bool DoHitTest(tagPOINT const &, CVisual * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z
    long InitializeVisualTreeClone(CContainerVisual *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z
    long InsertChildAfter(CVisual *, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z
    long InsertChildBefore(CVisual *, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllChildren@CContainerVisual@@QEAAXXZ
    void RemoveAllChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z
    long RemoveChild(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderRecursive@CContainerVisual@@UEAAJXZ
    virtual long RenderRecursive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CContainerVisual@@UEAAJPEAVCResourceProxy@@@Z
    virtual long SetContent(CResourceProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirtyChildren@CContainerVisual@@UEAAXXZ
    virtual void SetDirtyChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z
    virtual long UpdateLayout(bool);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContainerVisual@@IEAA@XZ
    CContainerVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CContainerVisual@@IEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CContainerVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContainerVisual@@MEAA@XZ
    virtual ~CContainerVisual();
};
