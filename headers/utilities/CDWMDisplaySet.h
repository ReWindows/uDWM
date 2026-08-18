#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 15 member(s).
class CDWMDisplaySet {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDWMDisplaySet@@QEAA@XZ
    CDWMDisplaySet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z
    static long CalculateRotationAngles(CDWMDisplaySet const *, CDWMDisplaySet const *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z
    CDWMDisplay const * DisplayNoRef(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z
    long GetAllDisplaysNoRef(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z
    long GetClonePrimaryDisplaysNoRef(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z
    CDWMDisplay const * GetMatchedPhysicalDisplayNoRef(CDWMDisplay const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z
    long GetPrimaryDisplay(CDWMDisplay const * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z
    long Init(CDWMDXGIEnumeration const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z
    bool IsEquivalentRotated(CDWMDisplaySet const *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDWMDisplaySet@@QEBAXXZ
    void Release() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDWMDisplaySet@@QEAA@XZ
    ~CDWMDisplaySet();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyUniformSpaceMapping@CDWMDisplaySet@@AEAAXPEAUDXGIOutputInfo@@@Z
    void ApplyUniformSpaceMapping(DXGIOutputInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ
    long ArrangeCloneDisplays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ
    void ComputeDisplayBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ
    long EnumerateOutputs();
};
