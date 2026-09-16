// Flat C exports observed in dcomp.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef DCOMP_C_H
#define DCOMP_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: #ordinal2000 (ABI unverified)
// Export: CreateFlipObject (ABI unverified)
// Export: #ordinal2002 (ABI unverified)
// Export: OpenFlipConsumer (ABI unverified)
// Export: #ordinal2001 (ABI unverified)
// Export: OpenFlipProducer (ABI unverified)
// Export: #ordinal1031 (ABI unverified)
// Export: DCompositionGetFrameStatistics (ABI unverified)
// Export: #ordinal2501 (ABI unverified)
// Export: GetAnimationScenarioNameFromGUID (ABI unverified)
// Export: DllCanUnloadNow (ABI unverified)
// Export: DllGetActivationFactory (ABI unverified)
// Export: DCompositionGetStatistics (ABI unverified)
// Export: DwmFlush (ABI unverified)
// Export: DwmpEnableDDASupport (ABI unverified)
// Export: DCompositionGetTargetStatistics (ABI unverified)
// Export: #ordinal2502 (ABI unverified)
// Export: DCompositionCreateAnimationStats (ABI unverified)
// Export: DCompositionCreateSurfaceHandle (ABI unverified)
// Export: #ordinal1040 (ABI unverified)
// Export: DCompositionCreateSharedVisualHandle (ABI unverified)
// Export: DCompositionWaitForCompositorClock (ABI unverified)
// Export: #ordinal2503 (ABI unverified)
// Export: DCompositionCreateManipulationStats (ABI unverified)
// Export: #ordinal1041 (ABI unverified)
// Export: DCompositionCreateCrossDeviceVisualHandle (ABI unverified)
// Export: DCompositionGetFrameId (ABI unverified)
// Export: DCompositionBoostCompositorClock (ABI unverified)
// Export: #ordinal1038 (ABI unverified)
// Export: DCompositionCreateTargetForHandle (ABI unverified)
// Export: DCompositionCreateDevice3 (ABI unverified)
// Export: #ordinal1039 (ABI unverified)
// Export: DCompositionCreateCrossDeviceVisual (ABI unverified)
// Export: DCompositionCreateDevice2 (ABI unverified)
// Export: #ordinal1060 (ABI unverified)
// Export: DCompositionCreateSharedResourceHandle (ABI unverified)
// Export: DCompositionCreateDevice (ABI unverified)
// Export: DwmEnableMMCSS (ABI unverified)
// Export: DCompositionAttachMouseDragToHwnd (ABI unverified)
// Export: DCompositionAttachMouseWheelToHwnd (ABI unverified)
// Export: #ordinal2505 (ABI unverified)
// Export: DCompositionCreateBufferCollection (ABI unverified)
// Export: #ordinal2007 (ABI unverified)
// Export: DCompositionCreateDwmDevice (ABI unverified)
// Export: #ordinal2006 (ABI unverified)
// Export: CreateCompositionInteropDiagnostics (ABI unverified)
// Export: #ordinal1042 (ABI unverified)
// Export: DCompositionSetTransformMode (ABI unverified)
// Export: DllGetClassObject (ABI unverified)
// Export: #ordinal2504 (ABI unverified)
// Export: DCompositionCreateInteractionStats (ABI unverified)
// Export: #ordinal2500 (ABI unverified)
// Export: DCompositionCreateStats (ABI unverified)
// Export: CreatePresentationFactory (ABI unverified)
// Export: #ordinal1043 (ABI unverified)
// Export: #ordinal1019 (ABI unverified)
// Export: #ordinal1044 (ABI unverified)
// Export: #ordinal1045 (ABI unverified)
// Export: #ordinal1046 (ABI unverified)
// Export: #ordinal1028 (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // DCOMP_C_H
