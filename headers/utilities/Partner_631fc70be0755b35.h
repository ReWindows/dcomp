#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionTarget {
class Partner {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoot@Partner@CompositionTarget@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long GetRoot(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@CompositionTarget@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@Partner@CompositionTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long SetRoot(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceLowColor@Partner@CompositionTarget@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_ForceLowColor(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForceLowColor@Partner@CompositionTarget@Composition@UI@Windows@@UEAAJE@Z
    virtual long put_ForceLowColor(unsigned char);
};
} // namespace Windows::UI::Composition::CompositionTarget
