#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 16 member(s).
class CCompositionEffectCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z
    static long Create(CCompositionEffectCache * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossfadeEffectFactory@CCompositionEffectCache@@QEAAPEAUICompositionEffectFactory@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::ICompositionEffectFactory * GetCrossfadeEffectFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDarkThemeDesktopAcrylicBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::ICompositionBrush * GetDarkThemeDesktopAcrylicBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDarkThemeLightMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::ICompositionBrush * GetDarkThemeLightMicaBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDarkThemeMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::ICompositionBrush * GetDarkThemeMicaBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightThemeDesktopAcrylicBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::ICompositionBrush * GetLightThemeDesktopAcrylicBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightThemeLightMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::ICompositionBrush * GetLightThemeLightMicaBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightThemeMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::ICompositionBrush * GetLightThemeMicaBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowBackgroundTreatmentBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::ICompositionBrush * GetWindowBackgroundTreatmentBrush();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionEffectCache@@QEAA@XZ
    ~CCompositionEffectCache();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDesktopAcrylicBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Composition@34@@Z
    static long CreateDesktopAcrylicBrush(::Windows::UI::Color, float, float, ::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMicaBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Composition@34@@Z
    static long CreateMicaBrush(::Windows::UI::Color, float, float, ::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z
    static long CreateSolidColorBrush(::Windows::UI::Color, ::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCrossFadeEffectInitialized@CCompositionEffectCache@@AEAAXXZ
    void EnsureCrossFadeEffectInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ
    void EnsureEffectsInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCompositionEffectCache@@AEAAJXZ
    long Initialize();
};
