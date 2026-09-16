#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace DirectComposition {
class CDeviceLock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ
    void AssertIsOwned() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ
    void Enter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ
    void Leave();
};
} // namespace DirectComposition
