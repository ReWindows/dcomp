#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::Desktop::DesktopWindowTarget {
class Partner {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoot@Partner@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@456@@Z
    virtual long GetRoot(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@DesktopWindowTarget@Desktop@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@Partner@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z
    virtual long SetRoot(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Desktop::DesktopWindowTarget
