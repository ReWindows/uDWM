#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 189 member(s).
class CTopLevelWindow {
public:
    class WindowFrame;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z
    long AddProjectedShadowCaster(CProjectedShadowScene *, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z
    static void CalculateOutsideMargins(CWindowData *, unsigned int, _MARGINS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ
    static void CleanupThemeStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z
    long CloneForNewWindowData(CWindowData *, int, CTopLevelWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z
    long CloneVisualTreeForLivePreview(bool, CTopLevelWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z
    static long Create(CWindowData *, CTopLevelWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z
    static long CreateBitmapFromAtlas(void * const, int, _MARGINS *, CBitmapSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z
    static long CreateBitmapsFromAtlasImageStrip(void * const, int, unsigned int, _MARGINS *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z
    static long CreateBitmapsFromAtlasImageStrip(void * const, int, unsigned int, _MARGINS *, CBitmapSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z
    long CreateWindowTarget(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z
    static long CreateWindowWithNotify(CWindowData *, CTopLevelWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ
    long DestroyWindowTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z
    virtual bool DoHitTest(tagPOINT const &, CVisual * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ
    long EnsureClientAreaNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureImages@CTopLevelWindow@@SAJXZ
    static long EnsureImages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z
    long EnsureRemoteAppTarget(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ
    void ForceDisconnectClientArea();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceShowWindow@CTopLevelWindow@@QEAAX_N@Z
    void ForceShowWindow(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z
    tagRECT GetActualWindowRect(bool, bool, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z
    tagRECT GetBorderRect(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanvasClientTransformRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ
    CVisualProxy * GetCanvasClientTransformRootVisualProxy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanvasRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ
    CVisualProxy * GetCanvasRootVisualProxy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z
    static int GetCurrentStyle(CWindowData const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ
    float GetDpiAdjustedFloatCornerRadius();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFloatCornerRadiusForCurrentStyle@CTopLevelWindow@@QEAAMXZ
    float GetFloatCornerRadiusForCurrentStyle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z
    void GetFrameMargins(_MARGINS *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z
    static long GetLivePreviewVisual(CWindowData *, CTopLevelWindow * *, CWindowIconic * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z
    tagRECT GetLivePreviewWindowRect(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutsideMarginsWithDropShadow@CTopLevelWindow@@QEBA?AU_MARGINS@@XZ
    _MARGINS GetOutsideMarginsWithDropShadow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResizeBorderOffsets@CTopLevelWindow@@QEAA?AUtagRECT@@I@Z
    tagRECT GetResizeBorderOffsets(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z
    CVisual * GetRootVisualNoAddRef(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z
    void GetTitleBarInfo(tagTITLEBARINFOEX *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowBorderVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ
    CVisualProxy * GetWindowBorderVisualProxy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ
    CWindowData * GetWindowData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonClientArea@CTopLevelWindow@@QEBA_NXZ
    bool HasNonClientArea() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z
    static bool HasRenderedBorder(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z
    static bool HasThinRenderedBorder(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z
    void HitTestQuery(tagPOINT const &, bool, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCloned@CTopLevelWindow@@QEAA_NXZ
    bool IsCloned();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMaximizedOrSnapped@CTopLevelWindow@@QEBA_NXZ
    bool IsMaximizedOrSnapped() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ
    bool IsWindowOffscreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeIconicRepresentation@CTopLevelWindow@@QEAAXXZ
    void MakeIconicRepresentation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z
    long NcAdornmentInfoQuery(NCADORNMENT_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ
    void NotifyMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ
    void NotifyOfDirtyDCompThumbnail();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ
    void OnAccentPolicyUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAccentStateUpdated@CTopLevelWindow@@QEAAXXZ
    void OnAccentStateUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ
    void OnBlurBehindUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientAreaUpdated@CTopLevelWindow@@QEAAXXZ
    void OnClientAreaUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientGlassUpdated@CTopLevelWindow@@QEAAXXZ
    void OnClientGlassUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ
    void OnClientMarginsUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ
    long OnClipUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ
    void OnColorizationUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentBoundsUpdated@CTopLevelWindow@@QEAAXXZ
    void OnContentBoundsUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForceActiveWindowAppearanceUpdated@CTopLevelWindow@@QEAAXXZ
    void OnForceActiveWindowAppearanceUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGDISurfaceChange@CTopLevelWindow@@QEAAX_N@Z
    void OnGDISurfaceChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ
    virtual long OnGlobalTimeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ
    void OnGraphicsDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIconUpdated@CTopLevelWindow@@QEAAXXZ
    void OnIconUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z
    void OnIsInWindowMove(bool, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ
    void OnOffsetUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z
    void OnSettingsUpdated(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSnapshotCompleted@CTopLevelWindow@@QEAAXXZ
    void OnSnapshotCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSnapshotStart@CTopLevelWindow@@QEAAXXZ
    void OnSnapshotStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ
    void OnSourceConstantAlphaUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemBackdropUpdated@CTopLevelWindow@@QEAAXXZ
    void OnSystemBackdropUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z
    long OnThumbnailAdded(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z
    long OnThumbnailRemoved(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleUpdated@CTopLevelWindow@@QEAAXXZ
    void OnTitleUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ
    void OnWindowScaleUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ
    long OnWindowSizeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ
    long OnWindowStyleUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSystemColors@CTopLevelWindow@@SAXXZ
    static void ReadSystemColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSystemMetrics@CTopLevelWindow@@SAJXZ
    static long ReadSystemMetrics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z
    long RegisterIndirectSwapChainRenderTarget(void *, bool, _LUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z
    long ResyncTitleBackgroundColorForClonedWindow(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z
    long SendTopLevelWindowCommand(HWND__*, CWindowData *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z
    long SetExcludeFromDDA(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z
    long SetHolographic(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z
    long SetLivePreviewAlpha(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPassiveUpdateMode@CTopLevelWindow@@QEAAJ_N@Z
    long SetPassiveUpdateMode(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z
    void SetShadowOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z
    void SetSuppressBorderUpdates(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z
    long SetVisualProtectContent(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z
    void SetWindowOffscreen(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z
    long ShowWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ
    void StartIconicAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z
    long StartLivePreviewAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ
    void StopIconicAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ
    void StopLivePreviewAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z
    long UnregisterIndirectSwapchainRenderTarget(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z
    long UpdateAccent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAccentBlurRect@CTopLevelWindow@@QEAAXAEBUtagRECT@@@Z
    void UpdateAccentBlurRect(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z
    virtual long UpdateLayout(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ
    long UpdateRemoteAppRenderTargetBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ
    long UpdateRemoteAppRenderTargetOpacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ
    long UpdateRemoteAppRenderTargetRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z
    long UpdateTitle(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ
    long UpdateWindowTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CTopLevelWindow@@UEAAJXZ
    virtual long ValidateVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustNonClientBackgroundTreePosition@CTopLevelWindow@@AEAAJXZ
    long AdjustNonClientBackgroundTreePosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z
    void ApplyCorrectionScaleForUniformSpaceWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z
    long ApplyMaximizedClip(HRGN__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z
    CTopLevelWindow(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ
    int CalculateBackgroundType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z
    void ChangeMouseOver(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z
    WindissectOpaque * ChooseWindowFrame(unsigned int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z
    void ComputeWindowFrameMargins(_MARGINS *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z
    static long CreateGlyphsFromAtlas(void * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ
    long CreateHolographicSlate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z
    static long CreateNCButtons(void * const, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ
    int EdgeBorderMustBeOpaque();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z
    long EnsureNonClientAreaButton(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ
    static long EnsureWindowFrames();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z
    static CBitmapSource * GetAtlasImageFromTheme(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderStyle@CTopLevelWindow@@AEAA?AW4BorderStyle@CWindowBorder@@XZ
    int GetBorderStyle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z
    void GetButtonHeightAndOffset(int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ
    unsigned long GetCaptionColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z
    static float GetCorrectionScaleForUniformSpaceWindow(CWindowData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ
    WindissectOpaque GetCurrentDefaultColorizationFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ
    int GetEffectiveCornerStyle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA?AW4SYSTEMBACKDROP_TYPE@@XZ
    int GetEffectiveSystemBackdropType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameMaximizedClipMargins@CTopLevelWindow@@AEAA?AU_MARGINS@@XZ
    _MARGINS GetFrameMaximizedClipMargins();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInactiveFrame@CTopLevelWindow@@CAPEAUWindowFrame@1@XZ
    static WindissectOpaque * GetInactiveFrame();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z
    bool GetMonitorRect(tagRECT const *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z
    static long GetNCAreaHelper(void *, int const *, int const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z
    static long GetNCAreaHorizontalStripHelper(void *, int, int, int, int, int, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ
    float GetRadiusFromCornerStyle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ
    _D3DCOLORVALUE GetRoundedBorderColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ
    int GetShadowStyle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ
    unsigned long GetSolidColorCaptionColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ
    int GetTitlebarHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ
    unsigned long GetTransparentGradientColorForAccent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z
    static CBitmapSource * GetWindowFramePart(WindissectOpaque *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAnimation@CTopLevelWindow@@AEAA_NXZ
    bool HasAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ
    bool HasCaptionAreaColorOverride() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTopLevelWindow@@EEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z
    long InitializeVisualTreeClone(CTopLevelWindow *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGlassSheetNCAreaPart@CTopLevelWindow@@CA_NI@Z
    static bool IsGlassSheetNCAreaPart(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z
    static bool IsShadowNCAreaPart(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ
    bool IsSheetOfGlass() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ
    long LivePreviewAnimation_Animated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ
    long LivePreviewAnimation_Flipped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z
    static bool NeedsCorrectionScaleForUniformSpaceWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ
    void ReleaseHolographicSlate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z
    long ResizeVisualToTitlebar(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ
    long SendBoundsToSwapchainTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z
    static void SetSizingMargins(WindissectOpaque *, WindissectOpaque *, unsigned int, _MARGINS);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapchainTarget@CTopLevelWindow@@AEAAJPEAVCIndirectSwapchainRenderTargetProxy@@_N@Z
    long SetSwapchainTarget(CIndirectSwapchainRenderTargetProxy *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHitTest@CTopLevelWindow@@AEBA_NXZ
    bool ShouldHitTest() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformHitTestPointForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@PEAUtagPOINT@@@Z
    void TransformHitTestPointForUniformSpaceWindow(CWindowData *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ
    bool TreatAsActiveWindow() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z
    long UpdateButtonVisuals(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ
    long UpdateCaptionAccentColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z
    void UpdateCapturedButton(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ
    long UpdateClientAreaBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ
    long UpdateClientAreaMaximizedClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ
    long UpdateClientBlur();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ
    long UpdateColorizationColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ
    void UpdateDCompVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGDISurface@CTopLevelWindow@@AEAAJXZ
    long UpdateGDISurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHolographicSlate@CTopLevelWindow@@AEAAJXZ
    long UpdateHolographicSlate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHolographicSlateBounds@CTopLevelWindow@@AEAAJXZ
    long UpdateHolographicSlateBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIcon@CTopLevelWindow@@AEAAJXZ
    long UpdateIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ
    long UpdateLivePreviewAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMargins@CTopLevelWindow@@AEAA_NXZ
    bool UpdateMargins();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z
    long UpdateMarginsAndStyle(bool, bool, bool, bool *, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ
    bool UpdateMarginsDependentOnStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ
    long UpdateNCAreaBackground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z
    long UpdateNCAreaButton(int, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ
    long UpdateNCAreaGeometry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ
    long UpdateNCAreaPositionsAndSizes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ
    long UpdatePinnedParts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStyle@CTopLevelWindow@@AEAA_NXZ
    bool UpdateStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ
    long UpdateSystemBackdropVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z
    long UpdateText(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTitle@CTopLevelWindow@@AEAAJXZ
    long UpdateTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ
    void UpdateWindowScale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ
    long UpdateWindowVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMarginsVisibleOutside@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z
    void _GetMarginsVisibleOutside(_MARGINS *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRightFrameThickness@CTopLevelWindow@@AEAAHXZ
    int _GetRightFrameThickness();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z
    static WindissectOpaque * s_ChooseWindowFrameFromStyle(unsigned int, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTopLevelWindow@@EEAA@XZ
    virtual ~CTopLevelWindow();
};
