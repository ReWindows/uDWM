#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 102 member(s).
class CDesktopManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ
    static CAnimationEngine * AcquireAnimationEngine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z
    static long ActivateLivePreview(LivePreviewRequest *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z
    static bool AdjustDesktopWindowSize(HWND__*, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z
    bool ApplyColorizationParameters(CGlassColorizationParameters *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAnyPolicy@CDesktopManager@@SA_NK@Z
    static bool CheckAnyPolicy(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAnyPreference@CDesktopManager@@SA_NK@Z
    static bool CheckAnyPreference(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPreferences@CDesktopManager@@SAXK@Z
    static void ClearPreferences(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z
    static long Create(IUnknown *, CDesktopManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z
    static void CreateDesktopWindowReplacement(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z
    static void DestroyDesktopWindowReplacement(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z
    static long EnableInputHooksHelper(bool, bool, unsigned short const *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z
    static long EnableLivePreviewInputHooks(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z
    long EnableMonitorRenderTargets(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDCompResources@CDesktopManager@@QEAAJXZ
    long EnsureDCompResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z
    static void FreeCVIIntoCache(int, int, CCachedVisualImageProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z
    bool GetAccentColor(bool, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z
    static long GetCVIFromCache(int, int, CCachedVisualImageProxy * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorPrevalence@CDesktopManager@@QEAAKXZ
    unsigned long GetColorPrevalence();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2D1InteropDevice@CDesktopManager@@SAPEAUID2D1Device@@XZ
    static ID2D1Device * GetD2D1InteropDevice();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayDPIScale@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z
    long GetDisplayDPIScale(HMONITOR__*, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z
    long GetDisplayRect(HMONITOR__*, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z
    long GetDisplaySDRWhiteLevel(HMONITOR__*, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveGlassColorizationParameters@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@_NPEAVCGlassColorizationParameters@@@Z
    void GetEffectiveGlassColorizationParameters(float, WindissectOpaque, bool, CGlassColorizationParameters *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z
    void GetEffectiveWindowColorizationColor(float, WindissectOpaque, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalTime@CDesktopManager@@SANXZ
    static double GetGlobalTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGraphicsDeviceNoRef@CDesktopManager@@SAJPEAVCGraphicsDeviceGuard@CGraphicsDeviceManager@@PEAPEAUICompositionGraphicsDevice@Composition@UI@Windows@@@Z
    static long GetGraphicsDeviceNoRef(WindissectOpaque *, ::Windows::UI::Composition::ICompositionGraphicsDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z
    static bool GetMonitorRectAtIndex(unsigned int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z
    float GetScalingFactorForCVI(tagRECT const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z
    static void * GetTheme(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ
    static WindissectOpaque const & GetWindowAnimationSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAccentColor@CDesktopManager@@QEAA_N_N@Z
    bool HasAccentColor(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ
    long ImmediateCancelLivePreview();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ
    static bool IsCurrentSessionRemotable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z
    static bool IsFeatureEnabled(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighContrastMode@CDesktopManager@@SA_NXZ
    static bool IsHighContrastMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ
    static bool IsLivePreviewAllowed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z
    static bool IsLogonDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z
    long IsMonitorVirtual(HMONITOR__*, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ
    static bool IsWindowAnimationEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ
    bool LoadAccentColorSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModeChange@CDesktopManager@@QEAAJXZ
    long ModeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModernDDAWnfCallback@CDesktopManager@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long ModernDDAWnfCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z
    static unsigned int MonitorDpiFromPoint(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ
    long NotifyRedirectionShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGraphicsDeviceLost@CDesktopManager@@SAXXZ
    static void OnGraphicsDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostActivateLivePreview@CDesktopManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z
    long PostActivateLivePreview(MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z
    long PostEventMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostFlickFeedback@CDesktopManager@@QEAAJ_NI@Z
    long PostFlickFeedback(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostInitializeComObjects@CDesktopManager@@QEAAJXZ
    long PostInitializeComObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostKeystateFeedback@CDesktopManager@@QEAAJ_NK@Z
    long PostKeystateFeedback(bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostStartAnimations@CDesktopManager@@QEAAJXZ
    long PostStartAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z
    static long RegisterForGlobalTimeChangeNotification(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTimeline@CDesktopManager@@SAXPEAVCTimelineBase@@@Z
    static void RegisterTimeline(CTimelineBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z
    static long RegisterWindowClass(unsigned short const *, int64_t ( *)(HWND__*, unsigned int, uint64_t, int64_t), unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCVICache@CDesktopManager@@SAXXZ
    static void ReleaseCVICache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z
    long SendRoundTripRequest(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z
    static long SendSwitchModeCommand(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z
    static void SetBackStop(CAccent *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForegroundWindowAsync@CDesktopManager@@SAJPEAUHWND__@@0_N@Z
    static long SetForegroundWindowAsync(HWND__*, HWND__*, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@M@Z
    long SetGlassColorizationColorResource(CGlassColorizationResources *, WindissectOpaque, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferences@CDesktopManager@@SAXK@Z
    static void SetPreferences(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTimelineDirty@CDesktopManager@@SAXXZ
    static void SetTimelineDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowAnimation@CDesktopManager@@SAX_N@Z
    static void SetWindowAnimation(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDPIValues@CDesktopManager@@QEAAXXZ
    void SetupDPIValues();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z
    void ShowDesktopWindowReplacement(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabletModeWnfCallback@CDesktopManager@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long TabletModeWnfCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z
    static bool UnregisterForGlobalTimeChangeNotification(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z
    long UpdateSDRToHDRBoost(HMONITOR__*, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z
    long UpdateSettings(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTabletMode@CDesktopManager@@QEAAJH@Z
    long UpdateTabletMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ
    void UpdateWindowShadows();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ
    void AbandonActiveAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z
    void AdvanceTimelines(double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDesktopManager@@AEAA@XZ
    CDesktopManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ
    bool CheckForActiveAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClampToMaxTextureSizeImpl@CDesktopManager@@AEAA?AUD2D_SIZE_F@@KK@Z
    D2D_SIZE_F ClampToMaxTextureSizeImpl(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ
    long CreateMonitorRenderTargets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z
    static unsigned long DwmEventThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t DwmLivePreviewWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDDisplayManager@CDesktopManager@@AEAAJXZ
    long EnsureDDisplayManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z
    long EnumerateMonitors(CDWMDisplaySet * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z
    long FireTimeEvents(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z
    static void HandleThreadMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z
    long Initialize(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeComObjects@CDesktopManager@@AEAAJXZ
    long InitializeComObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeHighContrast@CDesktopManager@@AEAAXXZ
    void InitializeHighContrast();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadTheme@CDesktopManager@@AEAAJXZ
    long LoadTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z
    static long ProcessAnimationTick(_LARGE_INTEGER *, _LARGE_INTEGER *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadProductType@CDesktopManager@@AEAAXXZ
    void ReadProductType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ
    void ReleaseDCompResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ
    long ReleaseMonitorRenderTargets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupColorization@CDesktopManager@@AEAAXXZ
    void SetupColorization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnloadTheme@CDesktopManager@@AEAAXXZ
    void UnloadTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGlobalTime@CDesktopManager@@AEAAJNPEA_N@Z
    long UpdateGlobalTime(double, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ
    bool UpdateRemotingMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z
    long UpdateSceneImpl(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeWnf@CDesktopManager@@AEAAJXZ
    long _InitializeWnf();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsMultiMon@CDesktopManager@@AEBA_NXZ
    bool _IsMultiMon() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z
    static bool _IsSameAsTargetCachedCVI(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDesktopManager@@EEAA@XZ
    virtual ~CDesktopManager();
};
