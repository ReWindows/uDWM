#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 13 member(s).
class CProjectedShadowScene {
public:
    class CProjectedShadowSceneInstance;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z
    long AddCasterFromSharedHandle(void *, void *, CTopLevelWindow *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProjectedShadowScene@@QEAA@XZ
    CProjectedShadowScene();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayModeChanged@CProjectedShadowScene@@QEAAXXZ
    void DisplayModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z
    long Initialize(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z
    long RemoveCaster(CTopLevelWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowZOrderChanged@CProjectedShadowScene@@QEAAXXZ
    void WindowZOrderChanged();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProjectedShadowScene@@MEAA@XZ
    virtual ~CProjectedShadowScene();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z
    long CreateProjectedShadowReceiverVisual(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ
    long PositionProjectedShadowReceiverVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ
    long UpdateProjectedShadowReceiverVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ
    long ZOrderProjectedShadowReceiverVisual();
};
