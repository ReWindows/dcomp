#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::ExponentialEasingFunction {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ExponentialEasingFunction@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Exponent@Api@ExponentialEasingFunction@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Exponent(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mode@Api@ExponentialEasingFunction@Composition@UI@Windows@@UEAAJPEAW4CompositionEasingFunctionMode@345@@Z
    virtual long get_Mode(int *);
};
} // namespace Windows::UI::Composition::ExponentialEasingFunction
