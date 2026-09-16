#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::Internal::CaptureRenderTarget {
class Interop {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Interop@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAA@XZ
    Interop();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdapterLuidAndBuffers@Interop@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJAEBU_LUID@@IPEAPEAX@Z
    virtual long SetAdapterLuidAndBuffers(_LUID const &, unsigned int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlipManagerWithHandle@Interop@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJPEAX@Z
    virtual long SetFlipManagerWithHandle(void *);
};
} // namespace Windows::UI::Composition::Internal::CaptureRenderTarget
