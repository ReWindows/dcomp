#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::PowerEasingFunction {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@PowerEasingFunction@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mode@Api@PowerEasingFunction@Composition@UI@Windows@@UEAAJPEAW4CompositionEasingFunctionMode@345@@Z
    virtual long get_Mode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Power@Api@PowerEasingFunction@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Power(float *);
};
} // namespace Windows::UI::Composition::PowerEasingFunction
