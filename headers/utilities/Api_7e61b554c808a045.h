#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::CompositionVisualSurface {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionVisualSurface@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceOffset@Api@CompositionVisualSurface@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_SourceOffset(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceSize@Api@CompositionVisualSurface@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_SourceSize(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceVisual@Api@CompositionVisualSurface@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_SourceVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourceOffset@Api@CompositionVisualSurface@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_SourceOffset(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourceSize@Api@CompositionVisualSurface@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_SourceSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourceVisual@Api@CompositionVisualSurface@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long put_SourceVisual(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::CompositionVisualSurface
