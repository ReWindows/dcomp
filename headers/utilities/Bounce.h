#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition {
class Bounce {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAcceleration@Bounce@Composition@UI@Windows@@QEAAJM@Z
    long SetAcceleration(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperties@Bounce@Composition@UI@Windows@@QEAAXPEAVNaturalMotionAnimator@234@@Z
    void SetProperties(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRestitution@Bounce@Composition@UI@Windows@@QEAAJM@Z
    long SetRestitution(float);
};
} // namespace Windows::UI::Composition
