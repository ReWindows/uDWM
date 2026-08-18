#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 15 member(s).
class CGroupingStoryboard {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGroupingStoryboard@@QEAA@_N@Z
    CGroupingStoryboard(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupingTarget@CGroupingStoryboard@@UEAA?AW4DWMTRANSITION_TARGET@@W42@@Z
    virtual int GetGroupingTarget(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ
    virtual long OnEndTransitionRequest();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGroupingStoryboard@@UEAA@XZ
    virtual ~CGroupingStoryboard();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z
    long _Create3DComponent(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z
    long _CreateGuttersForApp(CWindowData *, tagRECT const *, tagRECT const *, int, CAnimationComponent * *, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z
    long _GetUnionRect(int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z
    long _GroupingIndexByTarget(int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z
    bool _IsPartOfGroup(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z
    unsigned int _NumberOfWindowsInUnionRect(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z
    void _RecordUnionRect(int, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z
    void _SetUnifiedCenter(CAnimationComponent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
};
