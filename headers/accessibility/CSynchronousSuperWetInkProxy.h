#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace DirectComposition {
class CSynchronousSuperWetInkProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSynchronousSuperWetInkProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSynchronousSuperWetInkProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSynchronousSuperWetInkProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace DirectComposition
