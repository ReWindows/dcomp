#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition::BounceEasingFunction {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@BounceEasingFunction@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounces@Api@BounceEasingFunction@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_Bounces(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounciness@Api@BounceEasingFunction@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Bounciness(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mode@Api@BounceEasingFunction@Composition@UI@Windows@@UEAAJPEAW4CompositionEasingFunctionMode@345@@Z
    virtual long get_Mode(int *);
};
} // namespace Windows::UI::Composition::BounceEasingFunction
