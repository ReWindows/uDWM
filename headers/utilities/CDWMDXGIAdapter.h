#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 11 member(s).
class CDWMDXGIAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z
    static long Create(IDXGIAdapter *, unsigned int, CDWMDXGIAdapter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDxgiOutputDescriptor@CDWMDXGIAdapter@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z
    long FindDxgiOutputDescriptor(HMONITOR__*, DXGIOutputInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputInfo@CDWMDXGIAdapter@@QEBAAEAUDXGIOutputInfo@@I@Z
    DXGIOutputInfo & GetOutputInfo(unsigned int) const;
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDWMDXGIAdapter@@AEAA@IPEAUIDXGIAdapter@@@Z
    CDWMDXGIAdapter(unsigned int, IDXGIAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ
    long EnumerateDWMOutputs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKMTAdapterType@CDWMDXGIAdapter@@AEAAJXZ
    long GetKMTAdapterType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKMTDriverVersion@CDWMDXGIAdapter@@AEAAJXZ
    long GetKMTDriverVersion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDWMDXGIAdapter@@AEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDWMDXGIAdapter@@EEAA@XZ
    virtual ~CDWMDXGIAdapter();
};
