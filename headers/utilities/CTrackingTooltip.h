#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CTrackingTooltip {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTrackingTooltip@@QEAA@XZ
    CTrackingTooltip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z
    long Initialize(tagPOINT const *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z
    void Update(tagPOINT const *, unsigned short *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTrackingTooltip@@QEAA@XZ
    ~CTrackingTooltip();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTrackingTooltip@CTrackingTooltip@@IEAAPEAUHWND__@@PEAG@Z
    HWND__* CreateTrackingTooltip(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTooltipLocation@CTrackingTooltip@@IEAAXXZ
    void UpdateTooltipLocation();
};
