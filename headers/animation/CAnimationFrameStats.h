#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 60 member(s).
class CAnimationFrameStats {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAnimationFrameStats@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationLastFrameTelemetry@CAnimationFrameStats@@UEAAXAEBU_GUID@@UtagCOMPOSITION_TARGET_ID@@@Z
    virtual void AnimationLastFrameTelemetry(_GUID const &, tagCOMPOSITION_TARGET_ID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationLastFrameTelemetry@CAnimationFrameStats@@UEAAXUtagCOMPOSITION_TARGET_ID@@PEBG111I@Z
    virtual void AnimationLastFrameTelemetry(tagCOMPOSITION_TARGET_ID, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAnimationFrameStats@@SAJPEAPEAVIDCompositionAnimationStats@@@Z
    static long Create(IDCompositionAnimationStats * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentFrameId@CAnimationFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z
    virtual uint64_t CurrentFrameId(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFrameId@CAnimationFrameStats@@UEBA_KXZ
    virtual uint64_t EndFrameId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameTargetData@CAnimationFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z
    virtual bool FrameTargetData(uint64_t, tagCOMPOSITION_FRAME_STATS *, tagCOMPOSITION_TARGET_ID const *, tagCOMPOSITION_TARGET_STATS *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMultiMon@CAnimationFrameStats@@UEBA_NXZ
    virtual bool IsMultiMon() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrimaryTargetId@CAnimationFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z
    virtual long PrimaryTargetId(tagCOMPOSITION_TARGET_ID *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QPCFrequency@CAnimationFrameStats@@UEBA_KXZ
    virtual uint64_t QPCFrequency() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAnimationFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAnimationFrameStats@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCollection@CAnimationFrameStats@@UEAAX_K@Z
    virtual void StartCollection(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFrameId@CAnimationFrameStats@@UEBA_KXZ
    virtual uint64_t StartFrameId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTimedCollection@CAnimationFrameStats@@UEAAXII@Z
    virtual void StartTimedCollection(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopCollection@CAnimationFrameStats@@UEAAX_K@Z
    virtual void StopCollection(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetAverageFrameDuration@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z
    virtual float TargetAverageFrameDuration(tagCOMPOSITION_TARGET_ID const &, float *, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetAverageGlitchDuration@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z
    virtual float TargetAverageGlitchDuration(tagCOMPOSITION_TARGET_ID const &, float *, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFrameRate@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual float TargetFrameRate(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesCPUGlitched@CAnimationFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesCPUGlitched(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesGPUGlitched@CAnimationFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesGPUGlitched(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesGlitched@CAnimationFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesGlitched(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesPresented@CAnimationFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesPresented(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesPresentedWithOutstandingPresents@CAnimationFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesPresentedWithOutstandingPresents(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetMaxTimeBetweenFrames@CAnimationFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual uint64_t TargetMaxTimeBetweenFrames(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetMaxVBlankGlitchDuration@CAnimationFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetMaxVBlankGlitchDuration(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetTimeToFirstFrame@CAnimationFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z
    virtual uint64_t TargetTimeToFirstFrame(tagCOMPOSITION_TARGET_ID const &, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetTotalGlitchDuration@CAnimationFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual uint64_t TargetTotalGlitchDuration(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetTotalVSyncsGlitched@CAnimationFrameStats@@QEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    uint64_t TargetTotalVSyncsGlitched(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCollection@CAnimationFrameStats@@UEAAXXZ
    virtual void UpdateCollection();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimationFrameStats@@IEAA@T_LARGE_INTEGER@@@Z
    CAnimationFrameStats(_LARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExceededMaxDuration@CAnimationFrameStats@@MEAAXXZ
    virtual void ExceededMaxDuration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ
    virtual void SendTelemetry();
};
