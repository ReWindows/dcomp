#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Flip {
class CFlipBufferPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXU_LUID@@IPEAUFlipPropertyItem@@@Z
    long InsertPoolBuffer(void *, _LUID, unsigned int, FlipPropertyItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAX@Z
    long RemovePoolBuffer(void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPoolBufferInternal@CFlipBufferPool@Flip@@AEAAXPEAXPEAPEBUPoolBufferEntry@12@PEAI@Z
    void FindPoolBufferInternal(void *, WindissectOpaque const * *, unsigned int *);
};
} // namespace Flip
