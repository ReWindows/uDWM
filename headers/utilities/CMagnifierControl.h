#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 18 member(s).
class CMagnifierControl {
public:
    class MagnifierTableElement;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z
    static long Create(CVisual *, CVisual *, CMagnifierControl * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayModeChanged@CMagnifierControl@@QEAAXXZ
    void DisplayModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z
    long OnMagnifierApiMessage(int, void const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z
    long OnMagnifierSyncApiMessage(int, void *, bool, unsigned long, _REMOTE_PORT_VIEW const *, long *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSoftwareCursorCreated@CMagnifierControl@@UEAAJPEAVCVisual@@@Z
    virtual long OnSoftwareCursorCreated(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSoftwareCursorDestroyed@CMagnifierControl@@UEAAJPEAVCVisual@@@Z
    virtual long OnSoftwareCursorDestroyed(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z
    virtual long OnSoftwareCursorOffsetUpdated(CVisual *, tagPOINT const &);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z
    CMagnifierControl(CVisual *, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWindowByHandle@CMagnifierControl@@CAPEAVCWindowData@@PEAUHWND__@@@Z
    static CWindowData * FindWindowByHandle(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMagnifierControl@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z
    long LookupAndValidateMagnifier(uint64_t, CMagnifier * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z
    long OnMagnifierCreate(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z
    long OnMagnifierDestroy(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderAndCommit@CMagnifierControl@@AEAAJXZ
    long RenderAndCommit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z
    long UpdateFullscreenBoundsFromSoftwareCursorOffset(tagPOINT const &, tagPOINT const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMagnifierControl@@EEAA@XZ
    virtual ~CMagnifierControl();
};
