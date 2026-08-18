#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CProjectionBorderManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z
    virtual long UpdateOutputDuplication(_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z
    int _FindProjectionVisualByAdapter(_LUID const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindProjectionVisualByRect@CProjectionBorderManager@@AEAAHAEBUtagRECT@@@Z
    int _FindProjectionVisualByRect(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z
    long _GetAdapterDisplayRect(_LUID const &, unsigned int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ
    void _RemoveInactiveVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z
    void _RemoveVisualByIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ
    long _UpdateFilteredVisualList();
};
