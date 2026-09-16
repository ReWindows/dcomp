#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionLinearGradientBrush {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionLinearGradientBrush@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EndPoint@Api@CompositionLinearGradientBrush@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_EndPoint(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartPoint@Api@CompositionLinearGradientBrush@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_StartPoint(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EndPoint@Api@CompositionLinearGradientBrush@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_EndPoint(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StartPoint@Api@CompositionLinearGradientBrush@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_StartPoint(WindissectOpaque);
};
} // namespace Windows::UI::Composition::CompositionLinearGradientBrush
