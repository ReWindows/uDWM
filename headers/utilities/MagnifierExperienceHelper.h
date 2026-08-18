#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 14 member(s).
class MagnifierExperienceHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z
    tagPOINT GetFullScreenMagnifierOffset(tagPOINT const &, double const &, tagPOINT const &, tagPOINT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullScreenMagnifierOffsetForCenterMode@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN@Z
    tagPOINT GetFullScreenMagnifierOffsetForCenterMode(tagPOINT const &, double const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z
    MagnifierExperienceHelper(double const &, float const &, float const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z
    void SetMagnificationFactor(double const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ
    void UpdateDesktopAndMonitorTopologyInformation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClampToDesktopBounds@MagnifierExperienceHelper@@AEAAXAEAUtagPOINT@@@Z
    void ClampToDesktopBounds(tagPOINT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClampToMonitorBounds@MagnifierExperienceHelper@@AEAAXAEAN0@Z
    void ClampToMonitorBounds(double &, double &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorRectFromPoint@MagnifierExperienceHelper@@AEAA?AUtagRECT@@AEBUtagPOINT@@@Z
    tagRECT GetMonitorRectFromPoint(tagPOINT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA?AUtagRECT@@AEBUtagPOINT@@0@Z
    tagRECT GetStillZoneFromOffset(tagPOINT const &, tagPOINT const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewportDisplacement@MagnifierExperienceHelper@@AEBAHHHHH@Z
    int GetViewportDisplacement(int, int, int, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmptyRegionOnVirtualDesktop@MagnifierExperienceHelper@@AEBA_NUtagPOINT@@@Z
    bool IsEmptyRegionOnVirtualDesktop(tagPOINT) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z
    void SetMonitorRect(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUpdateViewport@MagnifierExperienceHelper@@AEBA_NAEBUtagPOINT@@00@Z
    bool ShouldUpdateViewport(tagPOINT const &, tagPOINT const &, tagPOINT const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMagnifiedWindowParameters@MagnifierExperienceHelper@@AEAAXXZ
    void UpdateMagnifiedWindowParameters();
};
