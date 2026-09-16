#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace DirectComposition {
class CHolographicExclusiveViewProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicExclusiveViewProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicExclusiveViewProxy@DirectComposition@@QEAA@I@Z
    CHolographicExclusiveViewProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicExclusiveViewProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicExclusiveViewProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrameEvent@CHolographicExclusiveViewProxy@DirectComposition@@UEAAJPEAX@Z
    virtual long SetFrameEvent(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChain@CHolographicExclusiveViewProxy@DirectComposition@@UEAAJPEAUIDCompositionSurface@@@Z
    virtual long SetSwapChain(IDCompositionSurface *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewData@CHolographicExclusiveViewProxy@DirectComposition@@UEAAJPEAX0@Z
    virtual long SetViewData(void *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewId@CHolographicExclusiveViewProxy@DirectComposition@@UEAAJI@Z
    virtual long SetViewId(unsigned int);
};
} // namespace DirectComposition
