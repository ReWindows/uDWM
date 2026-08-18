#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 16 member(s).
class CDesktopThumbnailBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z
    void NotifyTlwTitleBackgroundChange(CTopLevelWindow const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z
    virtual void NotifyWindowDestruction(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z
    void RecloneWindow(CWindowData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z
    long SetDesktopId(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ
    long UpdateWindowClones();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDesktopThumbnailBase@@IEAA@XZ
    CDesktopThumbnailBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDesktopThumbnailBase@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z
    long _AddWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearClones@CDesktopThumbnailBase@@IEAAXXZ
    void _ClearClones();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z
    int _GetIndex(CTopLevelWindow const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ
    long _SnapshotWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShouldIncludeInSnapshot@CDesktopThumbnailBase@@MEAA_NPEAVCWindowData@@@Z
    virtual bool v_ShouldIncludeInSnapshot(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShouldShowMinimizedWindows@CDesktopThumbnailBase@@MEAA_NXZ
    virtual bool v_ShouldShowMinimizedWindows();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDesktopThumbnailBase@@MEAA@XZ
    virtual ~CDesktopThumbnailBase();
};
