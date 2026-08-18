#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 8 member(s).
class CHolographicSlate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z
    static long CreateSlate(HWND__* const, CVisual *, unsigned int, unsigned int, CHolographicSlate * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CHolographicSlate@@QEAAJII@Z
    long SetSize(unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHolographicSlate@@UEAA@XZ
    virtual ~CHolographicSlate();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicSlate@@AEAA@XZ
    CHolographicSlate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z
    long Initialize(HWND__* const, CVisual *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindWindow@CHolographicSlate@@AEAAXXZ
    void UnbindWindow();
};
