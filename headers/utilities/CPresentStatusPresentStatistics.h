#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
class CPresentStatusPresentStatistics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPresentStatusPresentStatistics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPresentStatusPresentStatistics@@QEAA@XZ
    CPresentStatusPresentStatistics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionFrameId@CPresentStatusPresentStatistics@@UEAA_KXZ
    virtual uint64_t GetCompositionFrameId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKind@CPresentStatusPresentStatistics@@UEAA?AW4PresentStatisticsKind@@XZ
    virtual int GetKind();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentId@CPresentStatusPresentStatistics@@UEAA_KXZ
    virtual uint64_t GetPresentId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentStatus@CPresentStatusPresentStatistics@@UEAA?AW4PresentStatus@@XZ
    virtual int GetPresentStatus();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPresentStatusPresentStatistics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPresentStatusPresentStatistics@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CPresentStatusPresentStatistics@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
};
