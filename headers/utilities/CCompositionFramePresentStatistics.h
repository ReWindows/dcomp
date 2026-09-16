#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
class CCompositionFramePresentStatistics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompositionFramePresentStatistics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompositionFramePresentStatistics@@QEAA@XZ
    CCompositionFramePresentStatistics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionFrameId@CCompositionFramePresentStatistics@@UEAA_KXZ
    virtual uint64_t GetCompositionFrameId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentTag@CCompositionFramePresentStatistics@@UEAA_KXZ
    virtual uint64_t GetContentTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayInstanceArray@CCompositionFramePresentStatistics@@UEAAXPEAIPEAPEBUCompositionFrameDisplayInstance@@@Z
    virtual void GetDisplayInstanceArray(unsigned int *, CompositionFrameDisplayInstance const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKind@CCompositionFramePresentStatistics@@UEAA?AW4PresentStatisticsKind@@XZ
    virtual int GetKind();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentId@CCompositionFramePresentStatistics@@UEAA_KXZ
    virtual uint64_t GetPresentId();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompositionFramePresentStatistics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompositionFramePresentStatistics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionFramePresentStatistics@@UEAA@XZ
    virtual ~CCompositionFramePresentStatistics();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CCompositionFramePresentStatistics@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
};
