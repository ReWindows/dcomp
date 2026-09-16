#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::CompositionIslandTarget {
class SystemOnly {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemOnly@CompositionIslandTarget@Composition@UI@Windows@@QEAA@XZ
    SystemOnly();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Root@SystemOnly@CompositionIslandTarget@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_Root(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Root@SystemOnly@CompositionIslandTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long put_Root(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::CompositionIslandTarget
