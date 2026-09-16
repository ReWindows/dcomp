#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace DirectComposition {
class CHolographicCompositionProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHolographicCompositionProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHolographicCompositionProxy@DirectComposition@@QEAA@I@Z
    CHolographicCompositionProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHolographicCompositionProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHolographicCompositionProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQualityLevel@CHolographicCompositionProxy@DirectComposition@@UEAAJI@Z
    virtual long SetQualityLevel(unsigned int);
};
} // namespace DirectComposition
