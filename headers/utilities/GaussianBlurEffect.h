#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 42 member(s).
namespace Microsoft::Internal::UI::Composition::Effects {
class GaussianBlurEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ
    GaussianBlurEffect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEBGPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@2Graphics@Windows@@@Z
    virtual long GetNamedPropertyMapping(unsigned short const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z
    virtual long GetProperty(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z
    virtual long GetSource(unsigned int, ::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAM@Z
    virtual long get_BlurAmount(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BorderMode@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAW4EffectBorderMode@23456@@Z
    virtual long get_BorderMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Optimization@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAW4EffectOptimization@23456@@Z
    virtual long get_Optimization(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z
    virtual long get_Source(::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z
    virtual long put_BlurAmount(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BorderMode@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJW4EffectBorderMode@23456@@Z
    virtual long put_BorderMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Optimization@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJW4EffectOptimization@23456@@Z
    virtual long put_Optimization(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z
    virtual long put_Source(::Windows::Graphics::Effects::IGraphicsEffectSource *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ
    virtual ~GaussianBlurEffect();
};
} // namespace Microsoft::Internal::UI::Composition::Effects
