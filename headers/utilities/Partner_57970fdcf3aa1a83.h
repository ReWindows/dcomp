#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::VisualTarget {
class Partner {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoot@Partner@VisualTarget@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long GetRoot(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@VisualTarget@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@Partner@VisualTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long SetRoot(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::VisualTarget
