#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace DirectComposition {
class CAnimationData {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastPrimitiveEndTime@CAnimationData@DirectComposition@@QEAA_JXZ
    int64_t GetLastPrimitiveEndTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z
    DwmAnimationPrimitive & PrimitiveAtIndex(uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CAnimationData@DirectComposition@@QEAAXXZ
    void Reset();
};
} // namespace DirectComposition
