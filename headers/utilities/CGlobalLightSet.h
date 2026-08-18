#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 14 member(s).
class CGlobalLightSet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z
    static long Create(uint64_t, CGlobalLightSet * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayModeChanged@CGlobalLightSet@@QEAAXXZ
    void DisplayModeChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedLightByType@CGlobalLightSet@@QEAAJW4LightType@UI@Windows@@PEAPEAUICompositionLight@Composition@34@@Z
    long GetSharedLightByType(int, ::Windows::UI::Composition::ICompositionLight * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScene@CGlobalLightSet@@QEAAJXZ
    long UpdateScene();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z
    long AddNewSharedDistantLightWithType(int, ::Windows::UI::Composition::IVisual *, WindissectOpaque &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGlobalLightSet@@AEAA@_K@Z
    CGlobalLightSet(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ
    long CreateCoordinateSpaceVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CGlobalLightSet@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ
    long InsertInteropVisualIntoTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ
    long PositionCoordinateSpaceVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ
    void RemoveInteropVisualFromTree();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGlobalLightSet@@EEAA@XZ
    virtual ~CGlobalLightSet();
};
