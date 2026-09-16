#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
class CIndependentFlipFramePresentStatistics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CIndependentFlipFramePresentStatistics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIndependentFlipFramePresentStatistics@@QEAA@XZ
    CIndependentFlipFramePresentStatistics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentTag@CIndependentFlipFramePresentStatistics@@UEAA_KXZ
    virtual uint64_t GetContentTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayedTime@CIndependentFlipFramePresentStatistics@@UEAA?AUSystemInterruptTime@@XZ
    virtual SystemInterruptTime GetDisplayedTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKind@CIndependentFlipFramePresentStatistics@@UEAA?AW4PresentStatisticsKind@@XZ
    virtual int GetKind();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputAdapterLUID@CIndependentFlipFramePresentStatistics@@UEAA?AU_LUID@@XZ
    virtual _LUID GetOutputAdapterLUID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputVidPnSourceId@CIndependentFlipFramePresentStatistics@@UEAAIXZ
    virtual unsigned int GetOutputVidPnSourceId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentDuration@CIndependentFlipFramePresentStatistics@@UEAA?AUSystemInterruptTime@@XZ
    virtual SystemInterruptTime GetPresentDuration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentId@CIndependentFlipFramePresentStatistics@@UEAA_KXZ
    virtual uint64_t GetPresentId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CIndependentFlipFramePresentStatistics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CIndependentFlipFramePresentStatistics@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CIndependentFlipFramePresentStatistics@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
};
