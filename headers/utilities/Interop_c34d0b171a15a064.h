#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 2 member(s).
namespace Windows::UI::Composition::CompositionTexture {
class Interop {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAvailableFence@Interop@CompositionTexture@Composition@UI@Windows@@UEAAJPEA_KAEBU_GUID@@PEAPEAX@Z
    virtual long GetAvailableFence(uint64_t *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Interop@CompositionTexture@Composition@UI@Windows@@QEAA@XZ
    Interop();
};
} // namespace Windows::UI::Composition::CompositionTexture
