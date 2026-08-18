#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 9 member(s).
namespace CProjectedShadowScene {
class CProjectedShadowSceneInstance {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCasterFromSharedHandle@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAXPEAVCVisual@@@Z
    long AddCasterFromSharedHandle(void *, CVisual *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ
    CProjectedShadowSceneInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCasters@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA_NXZ
    bool HasCasters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z
    long Initialize(::Windows::UI::Composition::ICompositionLight *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCaster@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAVCVisual@@@Z
    long RemoveCaster(CVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReceiver@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z
    long SetReceiver(::Windows::UI::Composition::IVisual *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProjectedShadowSceneInstance@CProjectedShadowScene@@UEAA@XZ
    virtual ~CProjectedShadowSceneInstance();
};
} // namespace CProjectedShadowScene
