#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition::ElasticEasingFunction {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ElasticEasingFunction@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mode@Api@ElasticEasingFunction@Composition@UI@Windows@@UEAAJPEAW4CompositionEasingFunctionMode@345@@Z
    virtual long get_Mode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Oscillations@Api@ElasticEasingFunction@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_Oscillations(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Springiness@Api@ElasticEasingFunction@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Springiness(float *);
};
} // namespace Windows::UI::Composition::ElasticEasingFunction
