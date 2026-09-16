#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition {
class Spring {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDampingRatio@Spring@Composition@UI@Windows@@QEAAJM@Z
    long SetDampingRatio(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPeriod@Spring@Composition@UI@Windows@@QEAAJUTimeSpan@Foundation@4@@Z
    long SetPeriod(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperties@Spring@Composition@UI@Windows@@QEAAXPEAVNaturalMotionAnimator@234@@Z
    void SetProperties(WindissectOpaque *);
};
} // namespace Windows::UI::Composition
