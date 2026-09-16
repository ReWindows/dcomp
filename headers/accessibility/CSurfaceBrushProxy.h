#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace DirectComposition {
class CSurfaceBrushProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSurfaceBrushProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSurfaceBrushProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSurfaceBrushProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurface@CSurfaceBrushProxy@DirectComposition@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSurface(IUnknown *);
};
} // namespace DirectComposition
