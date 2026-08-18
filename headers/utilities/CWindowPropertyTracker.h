#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 19 member(s).
class CWindowPropertyTracker {
public:
    class CPropertyChangeRecord;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowBeginPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z
    long GetWindowBeginPosition(HWND__*, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowBeginStyle@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAK@Z
    long GetWindowBeginStyle(HWND__*, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowEndClientRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z
    long GetWindowEndClientRect(HWND__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z
    long GetWindowEndCloak(HWND__*, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowEndContentRect@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagRECT@@@Z
    long GetWindowEndContentRect(HWND__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z
    long GetWindowEndPosition(HWND__*, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z
    long GetWindowEndSize(HWND__*, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z
    bool IsWindowTrackedAndCloakChanged(HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z
    long OnWindowClientContentRectChange(CStoryboard const *, CWindowData const *, tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z
    long OnWindowCloakChange(CStoryboard const *, CWindowData const *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z
    long OnWindowPositionChange(CStoryboard const *, CWindowData const *, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z
    long OnWindowSizeChange(CStoryboard const *, CWindowData const *, tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ
    void StopTrackingAllWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z
    void StopTrackingStoryboard(CStoryboard const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z
    void StopTrackingWindowImmediately(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowPropertyTracker@@QEAA@XZ
    ~CWindowPropertyTracker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z
    long _EnsureRecordExists(CStoryboard const *, CWindowData const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z
    int _FindRecord(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z
    void _StopTrackingWindowByIndex(int);
};
