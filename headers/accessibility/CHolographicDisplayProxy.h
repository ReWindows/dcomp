#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace DirectComposition {
class CHolographicDisplayProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicDisplayProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicDisplayProxy@DirectComposition@@QEAA@I@Z
    CHolographicDisplayProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicDisplayProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicDisplayProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CHolographicDisplayProxy@DirectComposition@@UEAAJI@Z
    virtual long SetFlags(unsigned int);
};
} // namespace DirectComposition
