#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 19 member(s).
class CDirectTouchVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FadeOut@CDirectTouchVisual@@QEAAJXZ
    long FadeOut();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ
    bool IsInInitialDelay() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOKToCleanup@CDirectTouchVisual@@UEAA_NXZ
    virtual bool IsOKToCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z
    long StartDown(tagPOINT const *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z
    long StartHold(tagPOINT const *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CDirectTouchVisual@@UEAAXXZ
    virtual void Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLocation@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@@Z
    long UpdateLocation(tagPOINT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z
    long UpdateShowContact(int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDirectTouchVisual@@IEAA@_K@Z
    CDirectTouchVisual(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDirectTouchVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopDownDelayTimeline@CDirectTouchVisual@@IEAAXXZ
    void StopDownDelayTimeline();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ
    void StopDownTimeline();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopFadeTimeline@CDirectTouchVisual@@IEAAXXZ
    void StopFadeTimeline();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimer@CDirectTouchVisual@@MEAAJXZ
    virtual long StopTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z
    long UpdateLocationWithScalar(tagPOINT const *, tagRECT const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ
    virtual long UpdateTransition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDirectTouchVisual@@MEAA@XZ
    virtual ~CDirectTouchVisual();
};
