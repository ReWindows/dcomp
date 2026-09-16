#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
class CSynchronizationContext11Driverless {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Cancel@CSynchronizationContext11Driverless@@UEAAJU_LUID@@_K1@Z
    virtual long Cancel(_LUID, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSynchronizationContext11Driverless@@UEAAJXZ
    virtual long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSynchronizationContext11Driverless@@UEAA@XZ
    virtual ~CSynchronizationContext11Driverless();
};
