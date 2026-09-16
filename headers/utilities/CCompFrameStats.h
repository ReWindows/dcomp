#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 44 member(s).
class CCompFrameStats {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompFrameStats@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCompFrameStats@@SAJPEAPEAVIDCompositionStats@@@Z
    static long Create(IDCompositionStats * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentFrameId@CCompFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z
    virtual uint64_t CurrentFrameId(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFrameId@CCompFrameStats@@UEBA_KXZ
    virtual uint64_t EndFrameId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z
    virtual bool FrameTargetData(uint64_t, tagCOMPOSITION_FRAME_STATS *, tagCOMPOSITION_TARGET_ID const *, tagCOMPOSITION_TARGET_STATS *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMultiMon@CCompFrameStats@@UEBA_NXZ
    virtual bool IsMultiMon() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWarp@CCompFrameStats@@SA_NXZ
    static bool IsWarp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrimaryTargetId@CCompFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z
    virtual long PrimaryTargetId(tagCOMPOSITION_TARGET_ID *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QPCFrequency@CCompFrameStats@@UEBA_KXZ
    virtual uint64_t QPCFrequency() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompFrameStats@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompFrameStats@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCollection@CCompFrameStats@@UEAAX_K@Z
    virtual void StartCollection(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFrameId@CCompFrameStats@@UEBA_KXZ
    virtual uint64_t StartFrameId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopCollection@CCompFrameStats@@UEAAX_K@Z
    virtual void StopCollection(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetAverageFrameDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z
    virtual float TargetAverageFrameDuration(tagCOMPOSITION_TARGET_ID const &, float *, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetAverageGlitchDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z
    virtual float TargetAverageGlitchDuration(tagCOMPOSITION_TARGET_ID const &, float *, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFrameRate@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual float TargetFrameRate(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesCPUGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesCPUGlitched(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesGPUGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesGPUGlitched(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesGlitched(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesPresented@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesPresented(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetFramesPresentedWithOutstandingPresents@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetFramesPresentedWithOutstandingPresents(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetMaxTimeBetweenFrames@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual uint64_t TargetMaxTimeBetweenFrames(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetMaxVBlankGlitchDuration@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual unsigned int TargetMaxVBlankGlitchDuration(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetTimeToFirstFrame@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z
    virtual uint64_t TargetTimeToFirstFrame(tagCOMPOSITION_TARGET_ID const &, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetTotalGlitchDuration@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z
    virtual uint64_t TargetTotalGlitchDuration(tagCOMPOSITION_TARGET_ID const &, uint64_t, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCollection@CCompFrameStats@@UEAAXXZ
    virtual void UpdateCollection();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompFrameStats@@IEAA@T_LARGE_INTEGER@@J@Z
    CCompFrameStats(_LARGE_INTEGER, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z
    void CalcFrameRange(uint64_t *, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectStats@CCompFrameStats@@MEAAX_K@Z
    virtual void CollectStats(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExceededMaxDuration@CCompFrameStats@@MEAAXXZ
    virtual void ExceededMaxDuration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameIdFromTime@CCompFrameStats@@IEBA_K_K@Z
    uint64_t FrameIdFromTime(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCompFrameStats@@IEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CCompFrameStats@@MEAAXXZ
    virtual void Invalidate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGPUGlitch@CCompFrameStats@@KA_NAEBUtagCOMPOSITION_TARGET_STATS@@@Z
    static bool IsGPUGlitch(tagCOMPOSITION_TARGET_STATS const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendTelemetry@CCompFrameStats@@MEAAXXZ
    virtual void SendTelemetry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CCompFrameStats@@IEAAXXZ
    void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StatsCollectionThread@CCompFrameStats@@IEAAXXZ
    void StatsCollectionThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadEntryPoint@CCompFrameStats@@KAKPEAX@Z
    static unsigned long ThreadEntryPoint(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateFrameRange@CCompFrameStats@@IEAAXXZ
    void ValidateFrameRange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForCompletedFrameStats@CCompFrameStats@@IEAA_N_KI@Z
    bool WaitForCompletedFrameStats(uint64_t, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompFrameStats@@MEAA@XZ
    virtual ~CCompFrameStats();
};
