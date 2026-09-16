#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 2 member(s).
namespace Windows::UI::Composition {
class SharedAllocationHolder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SharedAllocationHolder@Composition@UI@Windows@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@SharedAllocationHolder@Composition@UI@Windows@@QEAAXPEAVCSharedAllocation@DirectComposition@@@Z
    void Set(WindissectOpaque *);
};
} // namespace Windows::UI::Composition
