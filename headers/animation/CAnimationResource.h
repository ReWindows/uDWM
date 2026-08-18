#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 20 member(s).
class CAnimationResource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z
    long AddBinding(CResourceProxy *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z
    virtual long AddCubic(double, float, float, float, float);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAnimationResource@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRepeat@CAnimationResource@@UEAAJNN@Z
    virtual long AddRepeat(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z
    virtual long AddSinusoidal(double, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAnimationResource@@SAJPEAPEAV1@@Z
    static long Create(CAnimationResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@CAnimationResource@@UEAAJNM@Z
    virtual long End(double, float);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAnimationResource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAnimationResource@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAnimationHandle@CAnimationResource@@QEAAXXZ
    void ReleaseAnimationHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CAnimationResource@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAbsoluteBeginTime@CAnimationResource@@UEAAJT_LARGE_INTEGER@@@Z
    virtual long SetAbsoluteBeginTime(_LARGE_INTEGER);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z
    long SetTrigger(CAnimationTriggerProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrigger@CAnimationResource@@UEAAJPEAUIDCompositionAnimationTriggerPartner@@@Z
    virtual long SetTrigger(IDCompositionAnimationTriggerPartner *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimationResource@@IEAA@XZ
    CAnimationResource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAnimationResource@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z
    long _AddPrimitive(DwmAnimationPrimitive const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z
    static uint64_t _ConvertDoubleToQPC(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureResources@CAnimationResource@@IEAAJXZ
    long _EnsureResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimationResource@@IEAA@XZ
    ~CAnimationResource();
};
