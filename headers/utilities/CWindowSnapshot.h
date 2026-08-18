#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 12 member(s).
class CWindowSnapshot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z
    static long Create(CTopLevelWindow *, CWindowSnapshot * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z
    long GetCVI(tagRECT const *, CCachedVisualImageProxy * *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z
    bool HasCVIOfCompatibleSize(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z
    long ProcessFreezeSnapshotAndRelease(CWindowData *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowSnapshot@@IEAA@XZ
    CWindowSnapshot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z
    long Initialize(CTopLevelWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootVisualChanged@CWindowSnapshot@@MEAAXPEBVCSecondaryWindowRepresentation@@@Z
    virtual void OnRootVisualChanged(CSecondaryWindowRepresentation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSWRInvalidated@CWindowSnapshot@@MEAAXPEBVCSecondaryWindowRepresentation@@@Z
    virtual void OnSWRInvalidated(CSecondaryWindowRepresentation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@CWindowSnapshot@@MEAAXPEBVCSecondaryWindowRepresentation@@@Z
    virtual void OnSizeChanged(CSecondaryWindowRepresentation const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowSnapshot@@MEAA@XZ
    virtual ~CWindowSnapshot();
};
