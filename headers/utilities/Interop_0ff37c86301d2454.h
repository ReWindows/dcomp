#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::CompositionGraphicsDevice {
class Interop {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderingDevice@Interop@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetRenderingDevice(IUnknown * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Interop@CompositionGraphicsDevice@Composition@UI@Windows@@QEAA@XZ
    Interop();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRenderingDevice@Interop@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long SetRenderingDevice(IUnknown *);
};
} // namespace Windows::UI::Composition::CompositionGraphicsDevice
