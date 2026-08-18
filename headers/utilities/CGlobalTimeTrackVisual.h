#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 9 member(s).
class CGlobalTimeTrackVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGlobalTimeTrackVisual@@SAJPEAPEAV1@@Z
    static long Create(CGlobalTimeTrackVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdated@CGlobalTimeTrackVisual@@UEAAJXZ
    virtual long OnGlobalTimeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseTransitionHandler@CGlobalTimeTrackVisual@@QEAAXXZ
    void ReleaseTransitionHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransitionHandler@CGlobalTimeTrackVisual@@QEAAXUScreenRotationTransition@Private@Transitions@Udwm@winrt@@@Z
    void SetTransitionHandler(WindissectOpaque);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGlobalTimeTrackVisual@@IEAA@XZ
    CGlobalTimeTrackVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CGlobalTimeTrackVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGlobalTimeTrackVisual@@MEAA@XZ
    virtual ~CGlobalTimeTrackVisual();
};
