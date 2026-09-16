#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
class CSynchronizationContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSupport@CSynchronizationContext@@SAXPEAUIUnknown@@PEA_N1@Z
    static void CheckSupport(IUnknown *, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSynchronizationContext@@SAJPEAUIUnknown@@PEAPEAV1@@Z
    static long Create(IUnknown *, CSynchronizationContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAdvancedSyncExperimentalMode@CSynchronizationContext@@UEAAXXZ
    virtual void EnsureAdvancedSyncExperimentalMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PollPresentProgress@CSynchronizationContext@@UEAAJU_LUID@@PEAX@Z
    virtual long PollPresentProgress(_LUID, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsDX12@CSynchronizationContext@@UEAA_NXZ
    virtual bool SupportsDX12();
};
