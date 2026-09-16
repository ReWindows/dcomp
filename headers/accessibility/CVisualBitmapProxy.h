#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace DirectComposition {
class CVisualBitmapProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVisualBitmapProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisualBitmapProxy@DirectComposition@@QEAA@I@Z
    CVisualBitmapProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVisualBitmapProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVisualBitmapProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisual@CVisualBitmapProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetVisual(IDCompositionVisual *);
};
} // namespace DirectComposition
