#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 87 member(s).
class CTouchFrameStats {
public:
    class CBatchStats;
    class CInteractionInfo;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTouchFrameStats@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTouchFrameStats@@SAJPEAUIDCompositionDeviceInternal@@PEAPEAVIDCompositionManipulationStats@@@Z
    static long Create(IDCompositionDeviceInternal *, IDCompositionManipulationStats * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentFrameId@CTouchFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z
    virtual uint64_t CurrentFrameId(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAnimation@CTouchFrameStats@@UEAAXXZ
    virtual void EndAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFrameId@CTouchFrameStats@@UEBA_KXZ
    virtual uint64_t EndFrameId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTouchInteraction@CTouchFrameStats@@UEAAXXZ
    virtual void EndTouchInteraction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameTargetData@CTouchFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z
    virtual bool FrameTargetData(uint64_t, tagCOMPOSITION_FRAME_STATS *, tagCOMPOSITION_TARGET_ID const *, tagCOMPOSITION_TARGET_STATS *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMultiMon@CTouchFrameStats@@UEBA_NXZ
    virtual bool IsMultiMon() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrimaryTargetId@CTouchFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z
    virtual long PrimaryTargetId(tagCOMPOSITION_TARGET_ID *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QPCFrequency@CTouchFrameStats@@UEBA_KXZ
    virtual uint64_t QPCFrequency() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTouchFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTouchFrameStats@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@CTouchFrameStats@@UEAAXPEBG@Z
    virtual void StartAnimation(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCollection@CTouchFrameStats@@UEAAX_K@Z
    virtual void StartCollection(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFrameId@CTouchFrameStats@@UEBA_KXZ
    virtual uint64_t StartFrameId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTouchInteraction@CTouchFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@@Z
    virtual void StartTouchInteraction(TOUCH_TELEMETRY_BEGIN_INFO const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopCollection@CTouchFrameStats@@UEAAX_K@Z
    virtual void StopCollection(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetAverageFrameDuration@CTouchFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z
    virtual float TargetAverageFrameDuration(tagCOMPOSITION_TARGET_ID const &, float *, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetAverageGlitchDuration@CTouchFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z
    virtual float TargetAverageGlitchDuration(tagCOMPOSITION_TARGET_ID const &, float *, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFrameRate@CTouchFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual float TargetFrameRate(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesCPUGlitched@CTouchFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesCPUGlitched(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesGPUGlitched@CTouchFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesGPUGlitched(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesGlitched@CTouchFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesGlitched(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesPresented@CTouchFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesPresented(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesPresentedWithOutstandingPresents@CTouchFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesPresentedWithOutstandingPresents(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetMaxTimeBetweenFrames@CTouchFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual uint64_t TargetMaxTimeBetweenFrames(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetMaxVBlankGlitchDuration@CTouchFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetMaxVBlankGlitchDuration(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetTimeToFirstFrame@CTouchFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z
    virtual uint64_t TargetTimeToFirstFrame(tagCOMPOSITION_TARGET_ID const &, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetTotalGlitchDuration@CTouchFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual uint64_t TargetTotalGlitchDuration(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchInteractionUpdate@CTouchFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z
    virtual void TouchInteractionUpdate(TOUCH_TELEMETRY_UPDATE_INFO const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCollection@CTouchFrameStats@@UEAAXXZ
    virtual void UpdateCollection();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTouchFrameStats@@IEAA@PEAUIDCompositionDeviceInternal@@T_LARGE_INTEGER@@@Z
    CTouchFrameStats(IDCompositionDeviceInternal *, _LARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcAverageAppCommitLatency@CTouchFrameStats@@IEBAMXZ
    float CalcAverageAppCommitLatency() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcAverageAppDeliveryLatency@CTouchFrameStats@@IEBAMXZ
    float CalcAverageAppDeliveryLatency() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcAverageAppInputLatency@CTouchFrameStats@@IEBAMXZ
    float CalcAverageAppInputLatency() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcAverageAppLatency@CTouchFrameStats@@IEBAMXZ
    float CalcAverageAppLatency() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcAverageDwmPresentLatency@CTouchFrameStats@@IEBAMXZ
    float CalcAverageDwmPresentLatency() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcAverageDwmRenderLatency@CTouchFrameStats@@IEBAMXZ
    float CalcAverageDwmRenderLatency() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcAverageGestureTargetingLatency@CTouchFrameStats@@IEBAMXZ
    float CalcAverageGestureTargetingLatency() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcAverageInputProcessorLatency@CTouchFrameStats@@IEBAMXZ
    float CalcAverageInputProcessorLatency() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcAverageIsmLatency@CTouchFrameStats@@IEBAMXZ
    float CalcAverageIsmLatency() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcAverageRimQueueLatency@CTouchFrameStats@@IEBAMXZ
    float CalcAverageRimQueueLatency() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcAverageRimReadLatency@CTouchFrameStats@@IEBAMXZ
    float CalcAverageRimReadLatency() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcAverageRimSignalLatency@CTouchFrameStats@@IEBAMXZ
    float CalcAverageRimSignalLatency() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcAverageTotalLatency@CTouchFrameStats@@IEBAMW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@@Z
    float CalcAverageTotalLatency(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcAverageVSyncsMissed@CTouchFrameStats@@IEBAMXZ
    float CalcAverageVSyncsMissed() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInertiaTimes@CTouchFrameStats@@MEBAXPEA_K0@Z
    virtual void CalcInertiaTimes(uint64_t *, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInputGlitches@CTouchFrameStats@@IEBAIXZ
    unsigned int CalcInputGlitches() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInteractionTimes@CTouchFrameStats@@MEBAXPEA_K0@Z
    virtual void CalcInteractionTimes(uint64_t *, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcMaxVSyncsMissed@CTouchFrameStats@@IEBAIXZ
    unsigned int CalcMaxVSyncsMissed() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcRenderGlitches@CTouchFrameStats@@IEBAIXZ
    unsigned int CalcRenderGlitches() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectStats@CTouchFrameStats@@MEAAX_K@Z
    virtual void CollectStats(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameIdFromBatchId@CTouchFrameStats@@IEBA_KK@Z
    uint64_t FrameIdFromBatchId(unsigned long) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBatchStats@CTouchFrameStats@@IEAAPEAVCBatchStats@1@K@Z
    WindissectOpaque * GetBatchStats(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentBatchId@CTouchFrameStats@@IEAAKXZ
    unsigned long GetCurrentBatchId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CTouchFrameStats@@MEAAXXZ
    virtual void Invalidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveFrames@CTouchFrameStats@@IEAA_NAEBUtagCOMPOSITION_TARGET_ID@@@Z
    bool ResolveFrames(tagCOMPOSITION_TARGET_ID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendTelemetry@CTouchFrameStats@@MEAAXXZ
    virtual void SendTelemetry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForBatchConfirmation@CTouchFrameStats@@IEAA_KKI@Z
    uint64_t WaitForBatchConfirmation(unsigned long, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTouchFrameStats@@MEAA@XZ
    virtual ~CTouchFrameStats();
};
