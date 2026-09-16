#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
class CSynchronizationContext11Driver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CSynchronizationContext11Driver@@UEAAJU_LUID@@_K1@Z
    virtual long Cancel(_LUID, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSynchronizationContext11Driver@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PollPresentProgress@CSynchronizationContext11Driver@@UEAAJU_LUID@@PEAX@Z
    virtual long PollPresentProgress(_LUID, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSynchronizationContext11Driver@@UEAA@XZ
    virtual ~CSynchronizationContext11Driver();
};
