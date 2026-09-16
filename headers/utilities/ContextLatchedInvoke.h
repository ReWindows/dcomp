#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Microsoft::WRL2 {
class ContextLatchedInvoke {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@ContextLatchedInvoke@WRL2@Microsoft@@QEAAXXZ
    void Cancel();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContextLatchedInvoke@WRL2@Microsoft@@QEAA@XZ
    ~ContextLatchedInvoke();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Static_DeferredNotify_NoLock@ContextLatchedInvoke@WRL2@Microsoft@@CAJPEAX@Z
    static long Static_DeferredNotify_NoLock(void *);
};
} // namespace Microsoft::WRL2
