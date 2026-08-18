#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 17 member(s).
class CTouchPressHoldVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ
    bool IsHolding();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ
    virtual bool IsOKToCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z
    long StartAbort(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z
    long StartHold(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z
    long StartRightTap(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CTouchPressHoldVisual@@UEAAXXZ
    virtual void Stop();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTouchPressHoldVisual@@IEAA@_K@Z
    CTouchPressHoldVisual(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTouchPressHoldVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ
    void StopAllTimelines();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ
    virtual long StopTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ
    long UpdateOpacityAndLocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ
    virtual long UpdateTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFinalSize@CTouchPressHoldVisual@@IEAAXXZ
    void _UpdateFinalSize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTouchPressHoldVisual@@MEAA@XZ
    virtual ~CTouchPressHoldVisual();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z
    void SetETWAnimation(int);
};
