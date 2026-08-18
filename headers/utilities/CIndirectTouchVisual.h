#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 20 member(s).
class CIndirectTouchVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOKToCleanup@CIndirectTouchVisual@@UEAA_NXZ
    virtual bool IsOKToCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z
    long StartEngage(tagPOINT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z
    long StartHover(tagPOINT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z
    long StartIdle(tagPOINT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CIndirectTouchVisual@@UEAAXXZ
    virtual void Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z
    long UpdateLocation(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShowContact@CIndirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z
    long UpdateShowContact(int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIndirectTouchVisual@@IEAA@_K@Z
    CIndirectTouchVisual(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CIndirectTouchVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ
    void StopAllTimelines();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ
    void StopFrameTimeline();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopOpacityTimeline@CIndirectTouchVisual@@IEAAXXZ
    void StopOpacityTimeline();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ
    void StopTimeoutTimeline();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimer@CIndirectTouchVisual@@MEAAJXZ
    virtual long StopTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ
    void UpdateOpacityAndSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ
    virtual long UpdateTransition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIndirectTouchVisual@@MEAA@XZ
    virtual ~CIndirectTouchVisual();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z
    void SetETWAnimation(int);
};
