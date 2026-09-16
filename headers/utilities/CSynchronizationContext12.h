#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
class CSynchronizationContext12 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CSynchronizationContext12@@UEAAJU_LUID@@_K1@Z
    virtual long Cancel(_LUID, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSupport@CSynchronizationContext12@@SAXPEAUIUnknown@@PEA_N1@Z
    static void CheckSupport(IUnknown *, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuid@CSynchronizationContext12@@UEAA?AU_LUID@@XZ
    virtual _LUID GetAdapterLuid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferInfo@CSynchronizationContext12@@UEAAJPEAUIUnknown@@PEAUFlipContentBufferFormatInfo@@PEAU_LUID@@PEAPEAX@Z
    virtual long GetBufferInfo(IUnknown *, FlipContentBufferFormatInfo *, _LUID *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentRetiringFence@CSynchronizationContext12@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetPresentRetiringFence(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentRetiringFenceHandle@CSynchronizationContext12@@UEAAPEAXXZ
    virtual void * GetPresentRetiringFenceHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSynchronizationContext12@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PollPresentProgress@CSynchronizationContext12@@UEAAJU_LUID@@PEAX@Z
    virtual long PollPresentProgress(_LUID, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsDX12@CSynchronizationContext12@@UEAA_NXZ
    virtual bool SupportsDX12();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSynchronizationContext12@@UEAA@XZ
    virtual ~CSynchronizationContext12();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSynchronizationContext12@@IEAA@PEAUIUnknown@@@Z
    CSynchronizationContext12(IUnknown *);
};
