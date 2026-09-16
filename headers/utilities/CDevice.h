#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 320 member(s).
namespace DirectComposition {
class CDevice {
public:
    class CRebuildableObjectList;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z
    void AddDirtyRebuildableObject(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDevice@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateCrossContainerGuestReadWriteSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z
    long AllocateCrossContainerGuestReadWriteSharedMemory(uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateCrossContainerHostReadOnlySharedMemory@CDevice@DirectComposition@@QEAAJ_K0AEBU_GUID@@1PEAPEAVCCrossContainerHostReadOnlySharedAllocation@2@@Z
    long AllocateCrossContainerHostReadOnlySharedMemory(uint64_t, uint64_t, _GUID const &, _GUID const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z
    long AllocateSharedMemory(uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationGetAnimationTime@CDevice@DirectComposition@@QEAAXI_KPEA_J@Z
    void AnimationGetAnimationTime(unsigned int, uint64_t, int64_t *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDevice@DirectComposition@@QEAA@PEAUIDeviceOwner@1@W4DeviceVersion@1@@Z
    CDevice(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChannelActivateTrigger@CDevice@DirectComposition@@QEAAXI@Z
    void ChannelActivateTrigger(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChannelCreateResource@CDevice@DirectComposition@@QEAAJI_NPEAI@Z
    long ChannelCreateResource(unsigned int, bool, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChannelOpenSharedResource@CDevice@DirectComposition@@QEAAJPEAXI_NPEAI@Z
    long ChannelOpenSharedResource(void *, unsigned int, bool, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChannelReleaseResource@CDevice@DirectComposition@@QEAAXI@Z
    void ChannelReleaseResource(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChannelSetIntegerProperty@CDevice@DirectComposition@@QEAAXI_J@Z
    void ChannelSetIntegerProperty(unsigned int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ
    long CheckClientDrawNotInProgress() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCompositionTextureSupport@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAH@Z
    virtual long CheckCompositionTextureSupport(IUnknown *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDeviceState@CDevice@DirectComposition@@UEAAJPEAH@Z
    virtual long CheckDeviceState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForDelayedDestructionObjects@CDevice@DirectComposition@@QEAAXXZ
    void CheckForDelayedDestructionObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearClientDrawInProgress@CDevice@DirectComposition@@QEAAJXZ
    long ClearClientDrawInProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z
    long Commit(bool, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CDevice@DirectComposition@@UEAAJXZ
    virtual long Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureMessageSession@CDevice@DirectComposition@@QEAAXPEAUIMessageSession@@@Z
    void ConfigureMessageSession(IMessageSession *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, int, IUnknown *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAffineTransform2DEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionAffineTransform2DEffect@@@Z
    virtual long CreateAffineTransform2DEffect(IDCompositionAffineTransform2DEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimation@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionAnimation@@@Z
    virtual long CreateAnimation(IDCompositionAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimationInstance@CDevice@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@PEAPEAUIDCompositionAnimationInstancePartner@@@Z
    virtual long CreateAnimationInstance(IDCompositionAnimation *, IDCompositionAnimationInstancePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimationTrigger@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionAnimationTriggerPartner@@@Z
    virtual long CreateAnimationTrigger(IDCompositionAnimationTriggerPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateArithmeticCompositeEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionArithmeticCompositeEffect@@@Z
    virtual long CreateArithmeticCompositeEffect(IDCompositionArithmeticCompositeEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAuxiliaryHolographicViewer@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@AEBU_GUID@@IPEAPEAUIDCompositionHolographicViewer@@@Z
    virtual long CreateAuxiliaryHolographicViewer(unsigned int, unsigned int, int, _GUID const &, unsigned int, IDCompositionHolographicViewer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAuxiliaryHolographicViewerWithBufferCount@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@IAEBU_GUID@@IPEAPEAUIDCompositionHolographicViewer@@@Z
    virtual long CreateAuxiliaryHolographicViewerWithBufferCount(unsigned int, unsigned int, int, unsigned int, _GUID const &, unsigned int, IDCompositionHolographicViewer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBlendEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionBlendEffect@@@Z
    virtual long CreateBlendEffect(IDCompositionBlendEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrightnessEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionBrightnessEffect@@@Z
    virtual long CreateBrightnessEffect(IDCompositionBrightnessEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCaptureController@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionCaptureControllerInternal@@@Z
    virtual long CreateCaptureController(IDCompositionCaptureControllerInternal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCaptureRenderTarget@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionCaptureRenderTargetInternal@@@Z
    virtual long CreateCaptureRenderTarget(IDCompositionCaptureRenderTargetInternal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColor@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionColorPartner@@@Z
    virtual long CreateColor(IDCompositionColorPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorBrush@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionColorBrush@@@Z
    virtual long CreateColorBrush(IDCompositionColorBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorMatrixEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionColorMatrixEffect@@@Z
    virtual long CreateColorMatrixEffect(IDCompositionColorMatrixEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositeEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionCompositeEffect@@@Z
    virtual long CreateCompositeEffect(IDCompositionCompositeEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionTexture@@@Z
    virtual long CreateCompositionTexture(IUnknown *, IDCompositionTexture * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCursorVisual@CDevice@DirectComposition@@UEAAJ_KPEAPEAUIDCompositionCursorVisualPartner@@@Z
    virtual long CreateCursorVisual(uint64_t, IDCompositionCursorVisualPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDDisplayRenderTarget@CDevice@DirectComposition@@UEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@IPEAPEAUIDCompositionRenderTargetPartner@@@Z
    virtual long CreateDDisplayRenderTarget(void *, unsigned int, _LUID, unsigned int, int, int, D2D_SIZE_U const &, unsigned int, IDCompositionRenderTargetPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDelegatedInkCanvas@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionDelegatedInkCanvas@@@Z
    virtual long CreateDelegatedInkCanvas(IDCompositionDelegatedInkCanvas * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDelegatedInkTrail@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionDelegatedInkTrail@@@Z
    virtual long CreateDelegatedInkTrail(IDCompositionDelegatedInkTrail * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDelegatedInkTrailForSwapChain@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionDelegatedInkTrail@@@Z
    virtual long CreateDelegatedInkTrailForSwapChain(IUnknown *, IDCompositionDelegatedInkTrail * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDesktopTree@CDevice@DirectComposition@@UEAAJU_LUID@@PEAPEAUIDCompositionDesktopTreePartner@@@Z
    virtual long CreateDesktopTree(_LUID, IDCompositionDesktopTreePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDwmChannel@CDevice@DirectComposition@@QEAAJPEAUIDwmChannelProvider@@@Z
    long CreateDwmChannel(IDwmChannelProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDynamicTexture@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionDynamicTexture@@@Z
    virtual long CreateDynamicTexture(IDCompositionDynamicTexture * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffectGroup@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionEffectGroup@@@Z
    virtual long CreateEffectGroup(IDCompositionEffectGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFloodEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionFloodEffect@@@Z
    virtual long CreateFloodEffect(IDCompositionFloodEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGaussianBlurEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionGaussianBlurEffect@@@Z
    virtual long CreateGaussianBlurEffect(IDCompositionGaussianBlurEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGdiSpriteBitmap@CDevice@DirectComposition@@UEAAJPEAUHLSURF__@@W4DXGI_FORMAT@@HPEAPEAUIDCompositionGdiSpriteBitmapPartner@@@Z
    virtual long CreateGdiSpriteBitmap(HLSURF__*, int, int, IDCompositionGdiSpriteBitmapPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGenericInkProxy@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionGenericInkPartner@@@Z
    virtual long CreateGenericInkProxy(IDCompositionGenericInkPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGradientSurface@CDevice@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@W4D2D1_EXTEND_MODE@@PEAPEAUIDCompositionSurface@@PEAI@Z
    virtual long CreateGradientSurface(unsigned int, int, int, int, IDCompositionSurface * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicComposition@CDevice@DirectComposition@@UEAAJAEBU_GUID@@IPEAPEAUIDCompositionHolographicComposition@@@Z
    virtual long CreateHolographicComposition(_GUID const &, unsigned int, IDCompositionHolographicComposition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicDisplay@CDevice@DirectComposition@@UEAAJAEBU_GUID@@PEBUDXGI_RATIONAL@@PEAPEAUIDCompositionHolographicDisplay@@@Z
    virtual long CreateHolographicDisplay(_GUID const &, DXGI_RATIONAL const *, IDCompositionHolographicDisplay * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicExclusiveMode@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionHolographicExclusiveMode@@@Z
    virtual long CreateHolographicExclusiveMode(IDCompositionHolographicExclusiveMode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicExclusiveView@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionHolographicExclusiveView@@@Z
    virtual long CreateHolographicExclusiveView(IDCompositionHolographicExclusiveView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicInteropTexture@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionHolographicInteropTexture@@@Z
    virtual long CreateHolographicInteropTexture(IDCompositionHolographicInteropTexture * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicViewer@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@AEBU_GUID@@PEAPEAUIDCompositionHolographicViewer@@@Z
    virtual long CreateHolographicViewer(unsigned int, unsigned int, int, _GUID const &, IDCompositionHolographicViewer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicViewerWithBufferCount@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@IAEBU_GUID@@PEAPEAUIDCompositionHolographicViewer@@@Z
    virtual long CreateHolographicViewerWithBufferCount(unsigned int, unsigned int, int, unsigned int, _GUID const &, IDCompositionHolographicViewer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHueRotationEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionHueRotationEffect@@@Z
    virtual long CreateHueRotationEffect(IDCompositionHueRotationEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInkProxy@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionInkPartner@@@Z
    virtual long CreateInkProxy(IDCompositionInkPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInteraction@CDevice@DirectComposition@@UEAAJKPEAPEAUIDCompositionInteractionPartner@@@Z
    virtual long CreateInteraction(unsigned long, IDCompositionInteractionPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInteraction@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionInteractionPartner@@@Z
    virtual long CreateInteraction(IDCompositionInteractionPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLinearTransferEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionLinearTransferEffect@@@Z
    virtual long CreateLinearTransferEffect(IDCompositionLinearTransferEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateManipulationTransform@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionManipulationTransform@@@Z
    virtual long CreateManipulationTransform(IDCompositionManipulationTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMatrixTransform@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionMatrixTransform@@@Z
    virtual long CreateMatrixTransform(IDCompositionMatrixTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMatrixTransform3D@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionMatrixTransform3D@@@Z
    virtual long CreateMatrixTransform3D(IDCompositionMatrixTransform3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMilResource@CDevice@DirectComposition@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAUIUnknown@@@Z
    virtual long CreateMilResource(int, unsigned int *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMouseInteractionConfiguration@CDevice@DirectComposition@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_MOUSE@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z
    virtual long CreateMouseInteractionConfiguration(int, IDCompositionInteractionConfigurationPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMousewheelInteractionConfiguration@CDevice@DirectComposition@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_MOUSEWHEEL@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z
    virtual long CreateMousewheelInteractionConfiguration(int, IDCompositionInteractionConfigurationPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePenInteractionConfiguration@CDevice@DirectComposition@@UEAAJIIW4DCOMPOSITION_INTERACTION_TYPE_PEN@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z
    virtual long CreatePenInteractionConfiguration(unsigned int, unsigned int, int, IDCompositionInteractionConfigurationPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@PEAUIDCompositionColorPartner@@PEAPEAUIDCompositionPrimitivePartner@@@Z
    virtual long CreatePrimitive(D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, float, IDCompositionSurface *, D2D_MATRIX_3X2_F const *, int, IDCompositionColorPartner *, IDCompositionPrimitivePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@23PEAPEAUIDCompositionPrimitivePartner@@@Z
    virtual long CreatePrimitive(D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, float, IDCompositionSurface *, D2D_MATRIX_3X2_F const *, int, IDCompositionSurface *, D2D_MATRIX_3X2_F const *, IDCompositionPrimitivePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@AEBU_D3DCOLORVALUE@@PEAPEAUIDCompositionPrimitivePartner@@@Z
    virtual long CreatePrimitive(D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, float, IDCompositionSurface *, D2D_MATRIX_3X2_F const *, int, _D3DCOLORVALUE const &, IDCompositionPrimitivePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionPrimitiveGroupPartner@@@Z
    virtual long CreatePrimitiveGroup(IDCompositionPrimitiveGroupPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProxySlot@CDevice@DirectComposition@@QEAAPEAXXZ
    void * CreateProxySlot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRectangleClip@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionRectangleClip@@@Z
    virtual long CreateRectangleClip(IDCompositionRectangleClip * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRegionClip@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionRegionClipPartner@@@Z
    virtual long CreateRegionClip(IDCompositionRegionClipPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRemoteAppRenderTarget@CDevice@DirectComposition@@UEAAJPEAUHWND__@@AEBUtagRECT@@PEAPEAUIDCompositionRemoteAppRenderTargetPartner@@@Z
    virtual long CreateRemoteAppRenderTarget(HWND__*, tagRECT const &, IDCompositionRemoteAppRenderTargetPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRemoteRenderTarget@CDevice@DirectComposition@@UEAAJU_LUID@@PEAPEAUIDCompositionRenderTargetPartner@@@Z
    virtual long CreateRemoteRenderTarget(_LUID, IDCompositionRenderTargetPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTarget@CDevice@DirectComposition@@UEAAJU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I_NPEAPEAUIDCompositionRenderTargetPartner@@@Z
    virtual long CreateRenderTarget(_LUID, unsigned int, int, int, unsigned int, bool, IDCompositionRenderTargetPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRotateTransform@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionRotateTransform@@@Z
    virtual long CreateRotateTransform(IDCompositionRotateTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRotateTransform3D@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionRotateTransform3D@@@Z
    virtual long CreateRotateTransform3D(IDCompositionRotateTransform3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSaturationEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionSaturationEffect@@@Z
    virtual long CreateSaturationEffect(IDCompositionSaturationEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScalar@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionScalarPartner@@@Z
    virtual long CreateScalar(IDCompositionScalarPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaleTransform@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionScaleTransform@@@Z
    virtual long CreateScaleTransform(IDCompositionScaleTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaleTransform3D@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionScaleTransform3D@@@Z
    virtual long CreateScaleTransform3D(IDCompositionScaleTransform3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShadowEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionShadowEffect@@@Z
    virtual long CreateShadowEffect(IDCompositionShadowEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedMilResource@CDevice@DirectComposition@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAXPEAPEAUIUnknown@@@Z
    virtual long CreateSharedMilResource(int, unsigned int *, void * *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedResource@CDevice@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long CreateSharedResource(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSkewTransform@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionSkewTransform@@@Z
    virtual long CreateSkewTransform(IDCompositionSkewTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSlateVirtualMonitorCaptureRenderTarget@CDevice@DirectComposition@@UEAAJ_KAEBUtagRECT@@1IPEAPEAUIDCompositionVirtualMonitorCaptureRenderTargetInternal@@@Z
    virtual long CreateSlateVirtualMonitorCaptureRenderTarget(uint64_t, tagRECT const &, tagRECT const &, unsigned int, IDCompositionVirtualMonitorCaptureRenderTargetInternal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStereoHolographicViewer@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@AEBU_GUID@@PEAPEAUIDCompositionHolographicViewer@@@Z
    virtual long CreateStereoHolographicViewer(unsigned int, unsigned int, int, _GUID const &, IDCompositionHolographicViewer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStereoHolographicViewerWithBufferCount@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@IAEBU_GUID@@PEAPEAUIDCompositionHolographicViewer@@@Z
    virtual long CreateStereoHolographicViewerWithBufferCount(unsigned int, unsigned int, int, unsigned int, _GUID const &, IDCompositionHolographicViewer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurface@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionSurface@@@Z
    virtual long CreateSurface(unsigned int, unsigned int, int, int, IDCompositionSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceBrush@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionSurfaceBrush@@@Z
    virtual long CreateSurfaceBrush(IDCompositionSurfaceBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceFactory@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionSurfaceFactory@@@Z
    virtual long CreateSurfaceFactory(IUnknown *, IDCompositionSurfaceFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceFromDXGISwapChain@CDevice@DirectComposition@@QEAAJPEAUIDXGISwapChain1@@PEAPEAUIUnknown@@@Z
    long CreateSurfaceFromDXGISwapChain(IDXGISwapChain1*, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceFromHandle@CDevice@DirectComposition@@UEAAJPEAXPEAPEAUIUnknown@@@Z
    virtual long CreateSurfaceFromHandle(void *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceFromHwnd@CDevice@DirectComposition@@UEAAJPEAUHWND__@@PEAPEAUIUnknown@@@Z
    virtual long CreateSurfaceFromHwnd(HWND__*, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceFromVisualSnapshot@CDevice@DirectComposition@@UEAAJPEAUIDCompositionVisual2@@II_NPEAU_D3DMATRIX@@PEAPEAUIUnknown@@@Z
    virtual long CreateSurfaceFromVisualSnapshot(IDCompositionVisual2*, unsigned int, unsigned int, bool, _D3DMATRIX *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceProxy@CDevice@DirectComposition@@QEAAJPEAXPEAPEAVCCompositionSurfaceProxy@2@@Z
    long CreateSurfaceProxy(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSynchronousSuperWetInk@CDevice@DirectComposition@@QEAAJW4Enum@SynchronousSuperWetLookupMode@@IIPEAPEAVCSynchronousSuperWetInk@2@@Z
    long CreateSynchronousSuperWetInk(int, unsigned int, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTableTransferEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionTableTransferEffect@@@Z
    virtual long CreateTableTransferEffect(IDCompositionTableTransferEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTargetForHwnd@CDevice@DirectComposition@@UEAAJPEAUHWND__@@HPEAPEAUIDCompositionTarget@@@Z
    virtual long CreateTargetForHwnd(HWND__*, int, IDCompositionTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTouchInteractionConfiguration@CDevice@DirectComposition@@UEAAJIIW4DCOMPOSITION_INTERACTION_TYPE_TOUCH@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z
    virtual long CreateTouchInteractionConfiguration(unsigned int, unsigned int, int, IDCompositionInteractionConfigurationPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTouchpadInteractionConfiguration@CDevice@DirectComposition@@UEAAJIIW4DCOMPOSITION_INTERACTION_TYPE_TOUCHPAD@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z
    virtual long CreateTouchpadInteractionConfiguration(unsigned int, unsigned int, int, IDCompositionInteractionConfigurationPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransform3DGroup@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionTransform3D@@I0@Z
    virtual long CreateTransform3DGroup(IDCompositionTransform3D * *, unsigned int, IDCompositionTransform3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformGroup@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionTransform@@I0@Z
    virtual long CreateTransformGroup(IDCompositionTransform * *, unsigned int, IDCompositionTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTranslateTransform@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionTranslateTransform@@@Z
    virtual long CreateTranslateTransform(IDCompositionTranslateTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTranslateTransform3D@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionTranslateTransform3D@@@Z
    virtual long CreateTranslateTransform3D(IDCompositionTranslateTransform3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTurbulenceEffect@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionTurbulenceEffect@@@Z
    virtual long CreateTurbulenceEffect(IDCompositionTurbulenceEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVirtualMonitorCaptureRenderTarget@CDevice@DirectComposition@@UEAAJ_KAEBUtagRECT@@PEAPEAUIDCompositionVirtualMonitorCaptureRenderTargetInternal@@@Z
    virtual long CreateVirtualMonitorCaptureRenderTarget(uint64_t, tagRECT const &, IDCompositionVirtualMonitorCaptureRenderTargetInternal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVirtualSurface@CDevice@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z
    virtual long CreateVirtualSurface(unsigned int, unsigned int, int, int, IDCompositionVirtualSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisual@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionVisual@@@Z
    virtual long CreateVisual(IDCompositionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisual@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionVisual2@@@Z
    virtual long CreateVisual(IDCompositionVisual2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualBitmap@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionVisualBitmapPartner@@@Z
    virtual long CreateVisualBitmap(IDCompositionVisualBitmapPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualReferenceController@CDevice@DirectComposition@@UEAAJPEAUIDCompositionVisual@@PEAPEAUIDCompositionVisualReferenceControllerPartner@@@Z
    virtual long CreateVisualReferenceController(IDCompositionVisual *, IDCompositionVisualReferenceControllerPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowNode@CDevice@DirectComposition@@UEAAJPEAUHWND__@@PEAUHSPRITE__@@UDCOMPOSITION_PROCESS_ATTRIBUTION@@PEAPEAUIDCompositionWindowNodePartner@@@Z
    virtual long CreateWindowNode(HWND__*, HSPRITE__*, DCOMPOSITION_PROCESS_ATTRIBUTION, IDCompositionWindowNodePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowTarget@CDevice@DirectComposition@@UEAAJPEAUHWND__@@PEAPEAUIDCompositionTarget@@@Z
    virtual long CreateWindowTarget(HWND__*, IDCompositionTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateYCbCrSurface@CDevice@DirectComposition@@UEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAUIDCompositionYCbCrSurfacePartner@@@Z
    virtual long CreateYCbCrSurface(unsigned int, unsigned int, int, IDCompositionYCbCrSurfacePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DCompositionCreateDevice@CDevice@DirectComposition@@SAJPEAUIDXGIDevice@@AEBU_GUID@@PEAPEAX@Z
    static long DCompositionCreateDevice(IDXGIDevice *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DCompositionCreateDevice2@CDevice@DirectComposition@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long DCompositionCreateDevice2(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DCompositionCreateDevice3@CDevice@DirectComposition@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long DCompositionCreateDevice3(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DCompositionCreateDwmDevice@CDevice@DirectComposition@@SAJAEBU_GUID@@PEAPEAXPEAPEAUIDwmChannel@@@Z
    static long DCompositionCreateDwmDevice(_GUID const &, void * *, IDwmChannel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableD2DStatePreservation@CDevice@DirectComposition@@UEAAJXZ
    virtual long DisableD2DStatePreservation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableDebugCounters@CDevice@DirectComposition@@UEAAJXZ
    virtual long DisableDebugCounters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawPrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAUID2D1DeviceContext@@AEBUD2D_MATRIX_4X4_F@@MW4DCOMPOSITION_COMPOSITE_MODE@@@Z
    virtual long DrawPrimitiveGroup(IDCompositionPrimitiveGroupPartner *, ID2D1DeviceContext *, D2D_MATRIX_4X4_F const &, float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateSharedMilResource@CDevice@DirectComposition@@UEAAJPEAXW4MIL_RESOURCE_TYPE@@_NPEAIPEAPEAUIUnknown@@@Z
    virtual long DuplicateSharedMilResource(void *, int, bool, unsigned int *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDebugCounters@CDevice@DirectComposition@@UEAAJXZ
    virtual long EnableDebugCounters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableWhitePixelOptimization@CDevice@DirectComposition@@UEAAJH@Z
    virtual long EnableWhitePixelOptimization(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnforceStrictSurfaceUsage@CDevice@DirectComposition@@QEAAJ_N@Z
    long EnforceStrictSurfaceUsage(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CDevice@DirectComposition@@UEAAJXZ
    virtual long Flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceCompositionTexturesLost@CDevice@DirectComposition@@UEAAXXZ
    virtual void ForceCompositionTexturesLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRender@CDevice@DirectComposition@@UEAAJXZ
    virtual long ForceRender();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChannelHandle@CDevice@DirectComposition@@UEAAIXZ
    virtual unsigned int GetChannelHandle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentBatchID@CDevice@DirectComposition@@UEAAJPEAK@Z
    virtual long GetCurrentBatchID(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentBatchId@CDevice@DirectComposition@@UEAAJPEAK@Z
    virtual long GetCurrentBatchId(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceAndHandleI@CDevice@DirectComposition@@SAXPEAVCResourceProxy@2@PEAPEAV12@PEAI@Z
    static void GetDeviceAndHandleI(WindissectOpaque *, WindissectOpaque * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDwmChannel@CDevice@DirectComposition@@QEAAPEAUIDwmChannel@@XZ
    IDwmChannel * GetDwmChannel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameIdFromBatchId@CDevice@DirectComposition@@UEAAJKPEA_K@Z
    virtual long GetFrameIdFromBatchId(unsigned long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStatistics@CDevice@DirectComposition@@UEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z
    virtual long GetFrameStatistics(DCOMPOSITION_FRAME_STATISTICS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastConfirmedBatchId@CDevice@DirectComposition@@UEAAJPEAK@Z
    virtual long GetLastConfirmedBatchId(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxTextureSize@CDevice@DirectComposition@@UEAAIXZ
    virtual unsigned int GetMaxTextureSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSafeMaxTextureSize@CDevice@DirectComposition@@QEAAIXZ
    unsigned int GetSafeMaxTextureSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenSynchronizationId@CDevice@DirectComposition@@QEAAJPEA_K@Z
    long GetTokenSynchronizationId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z
    static long HRESULTFromNTSTATUS(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HintSize@CDevice@DirectComposition@@UEAAJII@Z
    virtual long HintSize(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HintTiles@CDevice@DirectComposition@@UEAAJPEBUtagRECT@@I@Z
    virtual long HintTiles(tagRECT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionCapturePointer@CDevice@DirectComposition@@QEAAJIII_K@Z
    long InteractionCapturePointer(unsigned int, unsigned int, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCommit@CDevice@DirectComposition@@UEAAJPEAX@Z
    virtual long InternalCommit(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalRenderVisual@CDevice@DirectComposition@@QEAAJIIIIIW4DXGI_FORMAT@@PEAPEAX1PEAI@Z
    long InternalRenderVisual(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, void * *, void * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemoteTreeEnabled@CDevice@DirectComposition@@UEAAJPEAH@Z
    virtual long IsRemoteTreeEnabled(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CDevice@DirectComposition@@UEAAXXZ
    virtual void Lock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxTextureSizeFromFeatureLevel@CDevice@DirectComposition@@SAIW4D3D_FEATURE_LEVEL@@@Z
    static unsigned int MaxTextureSizeFromFeatureLevel(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySuperWetInkWork@CDevice@DirectComposition@@QEAAJXZ
    long NotifySuperWetInkWork();
    // Category: Method | Source: PE Export
    // Symbol: ?OfferSurfaceResources@CDevice@DirectComposition@@UEAAJXZ
    virtual long OfferSurfaceResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResource@CDevice@DirectComposition@@UEAAJPEAXHAEBU_GUID@@PEAPEAX@Z
    virtual long OpenSharedResource(void *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResource@CDevice@DirectComposition@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z
    virtual long OpenSharedResource(void *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResourceHandle@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAX@Z
    virtual long OpenSharedResourceHandle(IUnknown *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentCompositionTextures@CDevice@DirectComposition@@UEAAJPEBQEAUIUnknown@@I@Z
    virtual long PresentCompositionTextures(IUnknown * const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryExtensionInterface@CDevice@DirectComposition@@SAJPEAUIUnknown@@PEAXPEAPEAX@Z
    static long QueryExtensionInterface(IUnknown *, void *, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDevice@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimSurfaceResources@CDevice@DirectComposition@@UEAAJPEAH@Z
    virtual long ReclaimSurfaceResources(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshRemoteTreeConnection@CDevice@DirectComposition@@UEAAJXZ
    virtual long RefreshRemoteTreeConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCallbackThread@CDevice@DirectComposition@@UEAAJXZ
    virtual long RegisterCallbackThread();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDevice@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMilResource@CDevice@DirectComposition@@UEAAXPEAUIUnknown@@@Z
    virtual void ReleaseMilResource(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseProxiedCallbackId@CDevice@DirectComposition@@QEAAXII@Z
    void ReleaseProxiedCallbackId(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseProxyForInterop@CDevice@DirectComposition@@SAXPEAX@Z
    static void ReleaseProxyForInterop(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAnimationBuilder@CDevice@DirectComposition@@QEAAXPEAVCAnimationBuilder@2@@Z
    void RemoveAnimationBuilder(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z
    void RemoveDirtyRebuildableObject(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveNoRefProxy@CDevice@DirectComposition@@SAXPEAX@Z
    static void RemoveNoRefProxy(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z
    static void RemoveProxy(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSurfaceFactory@CDevice@DirectComposition@@QEAAXPEAVCSurfaceFactory@2@@Z
    void RemoveSurfaceFactory(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderVisual@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@IIIIW4DXGI_FORMAT@@PEAPEAX2PEAI@Z
    virtual long RenderVisual(IUnknown *, unsigned int, unsigned int, unsigned int, unsigned int, int, void * *, void * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestProxiedCallbackId@CDevice@DirectComposition@@QEAAJIPEAXPEAI@Z
    long RequestProxiedCallbackId(unsigned int, void *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResourceOpenSharedHandle@CDevice@DirectComposition@@QEAAJIPEAPEAX@Z
    long ResourceOpenSharedHandle(unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResourceSetAnimationProperty@CDevice@DirectComposition@@QEAAXIII@Z
    void ResourceSetAnimationProperty(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z
    void ResourceSetBufferProperty(unsigned int, unsigned int, void const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResourceSetBufferPropertyCustomWrite@CDevice@DirectComposition@@QEAAPEAXII_K@Z
    void * ResourceSetBufferPropertyCustomWrite(unsigned int, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResourceSetCallbackId@CDevice@DirectComposition@@QEAAXII@Z
    void ResourceSetCallbackId(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResourceSetDeletedNotificationTag@CDevice@DirectComposition@@QEAAXIPEAVCDelayedDestructionObject@2@@Z
    void ResourceSetDeletedNotificationTag(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z
    void ResourceSetFloatProperty(unsigned int, unsigned int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResourceSetHandleArrayProperty@CDevice@DirectComposition@@QEAAJIIPEBQEAXI@Z
    long ResourceSetHandleArrayProperty(unsigned int, unsigned int, void * const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResourceSetHandleProperty@CDevice@DirectComposition@@QEAAJIIPEAX@Z
    long ResourceSetHandleProperty(unsigned int, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z
    void ResourceSetIntegerProperty(unsigned int, unsigned int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z
    void ResourceSetReferenceProperty(unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClientDrawInProgress@CDevice@DirectComposition@@QEAAXXZ
    void SetClientDrawInProgress();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCommitCompletionEvent@CDevice@DirectComposition@@QEAAJPEAX_N@Z
    long SetCommitCompletionEvent(void *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCommitCompletionEvent@CDevice@DirectComposition@@UEAAJPEAX@Z
    virtual long SetCommitCompletionEvent(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionPrimitiveGroupRendererEnabled@CDevice@DirectComposition@@UEAAJH@Z
    virtual long SetCompositionPrimitiveGroupRendererEnabled(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSynchronization@CDevice@DirectComposition@@UEAAJPEAX@Z
    virtual long SetSynchronization(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapAnimationReadBackTime@CDevice@DirectComposition@@UEAAJXZ
    virtual long SnapAnimationReadBackTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizedCommit@CDevice@DirectComposition@@UEAAJPEAX@Z
    virtual long SynchronizedCommit(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TelemetrySetApplicationId@CDevice@DirectComposition@@UEAAJGPEBG@Z
    virtual long TelemetrySetApplicationId(unsigned short, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CDevice@DirectComposition@@UEAAXXZ
    virtual void Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCursorMouseMove@CDevice@DirectComposition@@UEAAJXZ
    virtual long UpdateCursorMouseMove();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLastConfirmedBatchId@CDevice@DirectComposition@@QEAAJXZ
    long UpdateLastConfirmedBatchId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidFlipFormat@CDevice@DirectComposition@@SA_NW4DXGI_FORMAT@@_N@Z
    static bool ValidFlipFormat(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualAddChild@CDevice@DirectComposition@@QEAAXIIHI@Z
    void VisualAddChild(unsigned int, unsigned int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualRedirectMouseToHwnd@CDevice@DirectComposition@@QEAAJIPEAUHWND__@@KK@Z
    long VisualRedirectMouseToHwnd(unsigned int, HWND__*, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualRemoveAllChildren@CDevice@DirectComposition@@QEAAXI@Z
    void VisualRemoveAllChildren(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualRemoveChild@CDevice@DirectComposition@@QEAAXII@Z
    void VisualRemoveChild(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualSetInputSink@CDevice@DirectComposition@@QEAAJIPEAX@Z
    long VisualSetInputSink(unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForCommitCompletion@CDevice@DirectComposition@@UEAAJXZ
    virtual long WaitForCommitCompletion();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDevice@DirectComposition@@QEAA@XZ
    ~CDevice();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z
    void BeginKernelCommand(unsigned int, void * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitToKernel@CDevice@DirectComposition@@AEAAJ_NPEAX@Z
    long CommitToKernel(bool, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructProxyObjectForMilResource@CDevice@DirectComposition@@AEAAJW4MIL_RESOURCE_TYPE@@PEAXIPEAPEAUIUnknown@@@Z
    long ConstructProxyObjectForMilResource(int, void *, unsigned int, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicViewerCore@CDevice@DirectComposition@@AEAAJIIW4DXGI_FORMAT@@_NIAEBU_GUID@@IPEAPEAUIDCompositionHolographicViewer@@@Z
    long CreateHolographicViewerCore(unsigned int, unsigned int, int, bool, unsigned int, _GUID const &, unsigned int, IDCompositionHolographicViewer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z
    long CreateProxyInternal(unsigned int, bool, void * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTargetHelper@CDevice@DirectComposition@@AEAAJPEAUHWND__@@KPEAPEAUIDCompositionTarget@@@Z
    long CreateTargetHelper(HWND__*, unsigned long, IDCompositionTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDeviceTextureManagerForTexture@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@PEAPEAVCDeviceTextureManagerBase@2@@Z
    long EnsureDeviceTextureManagerForTexture(IUnknown *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailFastForKernelBatchFailure@CDevice@DirectComposition@@AEAAXI@Z
    void FailFastForKernelBatchFailure(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z
    void FlushKernelCommands(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z
    static void GetDeviceAndHandleWorker(void *, WindissectOpaque * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideSurfacesPendingOffer@CDevice@DirectComposition@@AEAAJXZ
    long HideSurfacesPendingOffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z
    long Initialize(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDeviceOwnerOfChange@CDevice@DirectComposition@@AEAAXXZ
    void NotifyDeviceOwnerOfChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferPendingSurfaces@CDevice@DirectComposition@@AEAAJXZ
    long OfferPendingSurfaces();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedProxy@CDevice@DirectComposition@@AEAAJPEAXI_NPEAPEAXPEAI@Z
    long OpenSharedProxy(void *, unsigned int, bool, void * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentSurfaceFactories@CDevice@DirectComposition@@AEAAJXZ
    long PresentSurfaceFactories();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldBlockForExcessivePending@CDevice@DirectComposition@@AEAA_NXZ
    bool ShouldBlockForExcessivePending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z
    long TryFlushKernelCommands(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidatePrimitiveParameters@CDevice@DirectComposition@@AEAAJPEAUIDCompositionSurface@@PEAUIDCompositionColorPartner@@0PEAPEAUIDCompositionPrimitivePartner@@PEAPEAVCBitmapInfoFront@2@3PEAPEAVCVirtualSurface@2@@Z
    long ValidatePrimitiveParameters(IDCompositionSurface *, IDCompositionColorPartner *, IDCompositionSurface *, IDCompositionPrimitivePartner * *, WindissectOpaque * *, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForCommitCompletionInternal@CDevice@DirectComposition@@AEAAJ_N@Z
    long WaitForCommitCompletionInternal(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OnCallbackMessage_NoLock@CDevice@DirectComposition@@CAJPEBX00I@Z
    static long s_OnCallbackMessage_NoLock(void const *, void const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ProcessPendingCallbackDeletions_NoLock@CDevice@DirectComposition@@CAJPEAX@Z
    static long s_ProcessPendingCallbackDeletions_NoLock(void *);
};
} // namespace DirectComposition
