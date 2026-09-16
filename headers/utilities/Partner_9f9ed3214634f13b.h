#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::VisualTreeIsland {
class Partner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableDesktopOffset@Partner@VisualTreeIsland@Composition@UI@Windows@@UEAAJXZ
    virtual long DisableDesktopOffset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDesktopOffset@Partner@VisualTreeIsland@Composition@UI@Windows@@UEAAJXZ
    virtual long EnableDesktopOffset();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@VisualTreeIsland@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentVisual@Partner@VisualTreeIsland@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_ContentVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesktopOffset@Partner@VisualTreeIsland@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_DesktopOffset(WindissectOpaque*);
};
} // namespace Windows::UI::Composition::VisualTreeIsland
