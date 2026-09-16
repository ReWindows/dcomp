#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::RedirectVisual {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@RedirectVisual@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source@Api@RedirectVisual@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_Source(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source@Api@RedirectVisual@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long put_Source(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::RedirectVisual
