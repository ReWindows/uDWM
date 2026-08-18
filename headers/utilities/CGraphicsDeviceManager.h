#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 13 member(s).
class CGraphicsDeviceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGraphicsDeviceManager@@SAJ_NPEAPEAV1@@Z
    static long Create(bool, CGraphicsDeviceManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DbgForceDeviceLost@CGraphicsDeviceManager@@QEAAXXZ
    void DbgForceDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z
    long ValidateDXGIAdapterAndDevice(bool *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z
    long CheckDXGIAdapter(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ
    long EnsureGraphicsDeviceCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleGraphicsDeviceLost@CGraphicsDeviceManager@@IEAAXXZ
    void HandleGraphicsDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CGraphicsDeviceManager@@IEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ
    long InitializeGraphicsDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeGraphicsDeviceType@CGraphicsDeviceManager@@IEAAJW4D3D_DRIVER_TYPE@@@Z
    long InitializeGraphicsDeviceType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ
    long ReleaseGraphicsDevice();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGraphicsDeviceManager@@MEAA@XZ
    virtual ~CGraphicsDeviceManager();
};
