#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 94 member(s).
class CInteractionFrameStats {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractionFrameStats@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CInteractionFrameStats@@SAJPEBGPEAPEAVIDCompositionInteractionStats@@@Z
    static long Create(unsigned short const *, IDCompositionInteractionStats * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentFrameId@CInteractionFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z
    virtual uint64_t CurrentFrameId(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAnimation@CInteractionFrameStats@@UEAAXXZ
    virtual void EndAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFrameId@CInteractionFrameStats@@UEBA_KXZ
    virtual uint64_t EndFrameId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndInteraction@CInteractionFrameStats@@UEAAX_K@Z
    virtual void EndInteraction(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTouchInteraction@CInteractionFrameStats@@UEAAXXZ
    virtual void EndTouchInteraction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushInteractionUpdates@CInteractionFrameStats@@UEAAX_K0@Z
    virtual void FlushInteractionUpdates(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameTargetData@CInteractionFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z
    virtual bool FrameTargetData(uint64_t, tagCOMPOSITION_FRAME_STATS *, tagCOMPOSITION_TARGET_ID const *, tagCOMPOSITION_TARGET_STATS *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InertiaStart@CInteractionFrameStats@@UEAAX_K@Z
    virtual void InertiaStart(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMultiMon@CInteractionFrameStats@@UEBA_NXZ
    virtual bool IsMultiMon() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PendingInteractionUpdate@CInteractionFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z
    virtual void PendingInteractionUpdate(TOUCH_TELEMETRY_UPDATE_INFO const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrimaryTargetId@CInteractionFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z
    virtual long PrimaryTargetId(tagCOMPOSITION_TARGET_ID *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QPCFrequency@CInteractionFrameStats@@UEBA_KXZ
    virtual uint64_t QPCFrequency() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractionFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractionFrameStats@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@CInteractionFrameStats@@UEAAXPEBG@Z
    virtual void StartAnimation(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCollection@CInteractionFrameStats@@UEAAX_K@Z
    virtual void StartCollection(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFrameId@CInteractionFrameStats@@UEBA_KXZ
    virtual uint64_t StartFrameId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInteraction@CInteractionFrameStats@@UEAAX_KAEBUTOUCH_TELEMETRY_BEGIN_INFO@@@Z
    virtual void StartInteraction(uint64_t, TOUCH_TELEMETRY_BEGIN_INFO const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTouchInteraction@CInteractionFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@@Z
    virtual void StartTouchInteraction(TOUCH_TELEMETRY_BEGIN_INFO const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopCollection@CInteractionFrameStats@@UEAAX_K@Z
    virtual void StopCollection(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetAverageFrameDuration@CInteractionFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z
    virtual float TargetAverageFrameDuration(tagCOMPOSITION_TARGET_ID const &, float *, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetAverageGlitchDuration@CInteractionFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z
    virtual float TargetAverageGlitchDuration(tagCOMPOSITION_TARGET_ID const &, float *, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFrameRate@CInteractionFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual float TargetFrameRate(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesCPUGlitched@CInteractionFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesCPUGlitched(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesGPUGlitched@CInteractionFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesGPUGlitched(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesGlitched@CInteractionFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesGlitched(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesPresented@CInteractionFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesPresented(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesPresentedWithOutstandingPresents@CInteractionFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesPresentedWithOutstandingPresents(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetMaxTimeBetweenFrames@CInteractionFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual uint64_t TargetMaxTimeBetweenFrames(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetMaxVBlankGlitchDuration@CInteractionFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetMaxVBlankGlitchDuration(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetTimeToFirstFrame@CInteractionFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z
    virtual uint64_t TargetTimeToFirstFrame(tagCOMPOSITION_TARGET_ID const &, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetTotalGlitchDuration@CInteractionFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual uint64_t TargetTotalGlitchDuration(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchInteractionUpdate@CInteractionFrameStats@@UEAAXAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z
    virtual void TouchInteractionUpdate(TOUCH_TELEMETRY_UPDATE_INFO const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCollection@CInteractionFrameStats@@UEAAXXZ
    virtual void UpdateCollection();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractionFrameStats@@IEAA@PEBGT_LARGE_INTEGER@@@Z
    CInteractionFrameStats(unsigned short const *, _LARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInertiaTimes@CInteractionFrameStats@@MEBAXPEA_K0@Z
    virtual void CalcInertiaTimes(uint64_t *, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcInteractionTimes@CInteractionFrameStats@@MEBAXPEA_K0@Z
    virtual void CalcInteractionTimes(uint64_t *, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CInteractionFrameStats@@MEAAXXZ
    virtual void Invalidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ
    virtual void SendTelemetry();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractionFrameStats@@MEAA@XZ
    virtual ~CInteractionFrameStats();
};
