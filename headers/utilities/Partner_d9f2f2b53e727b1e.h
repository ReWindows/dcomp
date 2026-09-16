#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::CompositionIslandTarget {
class Partner {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoot@Partner@CompositionIslandTarget@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long GetRoot(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@CompositionIslandTarget@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@Partner@CompositionIslandTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long SetRoot(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::CompositionIslandTarget
