#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 12 member(s).
namespace DirectComposition {
class CInteractionConfiguration {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractionConfiguration@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateConfigurationChange@CInteractionConfiguration@DirectComposition@@SAJAEBUInteractionConfigurationInternal@@PEAPEAXPEA_K@Z
    static long AllocateConfigurationChange(InteractionConfigurationInternal const &, void * *, uint64_t *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractionConfiguration@DirectComposition@@QEAA@XZ
    CInteractionConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfiguration@CInteractionConfiguration@DirectComposition@@UEAAJPEAUInteractionConfigurationInternal@@@Z
    virtual long GetConfiguration(InteractionConfigurationInternal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CInteractionConfiguration@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractionConfiguration@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractionConfiguration@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace DirectComposition
