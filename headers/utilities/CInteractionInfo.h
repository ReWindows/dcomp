#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 19 member(s).
namespace CTouchFrameStats {
class CInteractionInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppCommitUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z
    unsigned int AppCommitUs(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppDeliveryUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z
    unsigned int AppDeliveryUs(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppInputUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z
    unsigned int AppInputUs(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z
    unsigned int AppUs(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmPresentUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z
    unsigned int DwmPresentUs(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwmRenderUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z
    unsigned int DwmRenderUs(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GestureTargetingUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z
    unsigned int GestureTargetingUs(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@PEBV12@@Z
    bool InputGlitch(int, WindissectOpaque const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputProcessorUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z
    unsigned int InputProcessorUs(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IsmUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z
    unsigned int IsmUs(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParallelMode@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ
    bool ParallelMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Presented@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ
    bool Presented() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ
    bool RenderGlitch() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RimQueueUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z
    unsigned int RimQueueUs(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RimReadUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z
    unsigned int RimReadUs(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RimSignalUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z
    unsigned int RimSignalUs(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTime@CInteractionInfo@CTouchFrameStats@@QEBA_KW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@@Z
    uint64_t StartTime(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TotalLatencyMs@CInteractionInfo@CTouchFrameStats@@QEBAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@_K@Z
    unsigned short TotalLatencyMs(int, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?VSyncsMissed@CInteractionInfo@CTouchFrameStats@@QEBAGXZ
    unsigned short VSyncsMissed() const;
};
} // namespace CTouchFrameStats
