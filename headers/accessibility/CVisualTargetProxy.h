#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace DirectComposition {
class CVisualTargetProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVisualTargetProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisualTargetProxy@DirectComposition@@QEAA@I@Z
    CVisualTargetProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVisualTargetProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVisualTargetProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CVisualTargetProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetRoot(IDCompositionVisual *);
};
} // namespace DirectComposition
