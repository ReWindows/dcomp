#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace DirectComposition {
class CCursorVisualProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCursorVisualProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCursorVisualProxy@DirectComposition@@QEAA@I@Z
    CCursorVisualProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCursorVisualProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCursorVisualProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHardwareCursorEnabled@CCursorVisualProxy@DirectComposition@@UEAAJH@Z
    virtual long SetIsHardwareCursorEnabled(int);
};
} // namespace DirectComposition
