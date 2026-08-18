#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 8 member(s).
class CDWMDXGIEnumeration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z
    static long Create(CDWMDXGIEnumeration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z
    long FindDxgiOutputDescriptor(HMONITOR__*, DXGIOutputInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z
    bool IsWarpAdapterLuid(_LUID) const;
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDWMDXGIEnumeration@@MEAA@XZ
    virtual ~CDWMDXGIEnumeration();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDWMDXGIEnumeration@@AEAA@XZ
    CDWMDXGIEnumeration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ
    long InitDXGI();
};
