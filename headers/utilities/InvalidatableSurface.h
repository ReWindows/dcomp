#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition {
class InvalidatableSurface {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InvalidatableSurface@Composition@UI@Windows@@MEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyUnderlyingContentChange@InvalidatableSurface@Composition@UI@Windows@@IEAAXXZ
    void NotifyUnderlyingContentChange();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InvalidatableSurface@Composition@UI@Windows@@MEAA@XZ
    virtual ~InvalidatableSurface();
};
} // namespace Windows::UI::Composition
