#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace DirectComposition {
class CAtlasNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@CAtlasNode@DirectComposition@@QEAAJKKPEAPEAV12@@Z
    long Allocate(unsigned long, unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ
    void CollectDead();
};
} // namespace DirectComposition
