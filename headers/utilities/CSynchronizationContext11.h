#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
class CSynchronizationContext11 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSupport@CSynchronizationContext11@@SAXPEAUIUnknown@@PEA_N1@Z
    static void CheckSupport(IUnknown *, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuid@CSynchronizationContext11@@UEAA?AU_LUID@@XZ
    virtual _LUID GetAdapterLuid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferInfo@CSynchronizationContext11@@UEAAJPEAUIUnknown@@PEAUFlipContentBufferFormatInfo@@PEAU_LUID@@PEAPEAX@Z
    virtual long GetBufferInfo(IUnknown *, FlipContentBufferFormatInfo *, _LUID *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentRetiringFence@CSynchronizationContext11@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetPresentRetiringFence(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentRetiringFenceHandle@CSynchronizationContext11@@UEAAPEAXXZ
    virtual void * GetPresentRetiringFenceHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSynchronizationContext11@@UEAAJXZ
    virtual long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSynchronizationContext11@@UEAA@XZ
    virtual ~CSynchronizationContext11();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSynchronizationContext11@@IEAA@PEAUIUnknown@@@Z
    CSynchronizationContext11(IUnknown *);
};
