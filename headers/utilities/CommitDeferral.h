#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition {
class CommitDeferral {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalBeginDeferral@CommitDeferral@Composition@UI@Windows@@MEAAJPEAVCompositor@234@@Z
    virtual long InternalBeginDeferral(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalEndDeferral@CommitDeferral@Composition@UI@Windows@@MEAAJXZ
    virtual long InternalEndDeferral();
};
} // namespace Windows::UI::Composition
