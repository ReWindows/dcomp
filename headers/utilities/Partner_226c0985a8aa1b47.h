#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::LayerVisual {
class Partner {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@LayerVisual@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomaticBoundsExpansion@Partner@LayerVisual@Composition@UI@Windows@@UEAAJ_N@Z
    virtual long SetAutomaticBoundsExpansion(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlatteningToLocalSpace@Partner@LayerVisual@Composition@UI@Windows@@UEAAJ_N@Z
    virtual long SetFlatteningToLocalSpace(bool);
};
} // namespace Windows::UI::Composition::LayerVisual
