#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace DirectComposition {
class CLegacyAnimationTrigger {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLegacyAnimationTrigger@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLegacyAnimationTrigger@DirectComposition@@QEAA@I@Z
    CLegacyAnimationTrigger(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLegacyAnimationTrigger@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLegacyAnimationTrigger@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trigger@CLegacyAnimationTrigger@DirectComposition@@UEAAJPEA_K@Z
    virtual long Trigger(uint64_t *);
};
} // namespace DirectComposition
