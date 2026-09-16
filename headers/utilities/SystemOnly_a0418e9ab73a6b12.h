#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionTarget {
class SystemOnly {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemOnly@CompositionTarget@Composition@UI@Windows@@QEAA@XZ
    SystemOnly();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Root@SystemOnly@CompositionTarget@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_Root(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemBackdrop@SystemOnly@CompositionTarget@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z
    virtual long get_SystemBackdrop(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Root@SystemOnly@CompositionTarget@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long put_Root(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SystemBackdrop@SystemOnly@CompositionTarget@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z
    virtual long put_SystemBackdrop(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::CompositionTarget
