#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::CubicBezierEasingFunction {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CubicBezierEasingFunction@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ControlPoint1@Api@CubicBezierEasingFunction@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_ControlPoint1(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ControlPoint2@Api@CubicBezierEasingFunction@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_ControlPoint2(WindissectOpaque*);
};
} // namespace Windows::UI::Composition::CubicBezierEasingFunction
