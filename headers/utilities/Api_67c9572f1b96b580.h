#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::BackEasingFunction {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@BackEasingFunction@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Amplitude@Api@BackEasingFunction@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Amplitude(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mode@Api@BackEasingFunction@Composition@UI@Windows@@UEAAJPEAW4CompositionEasingFunctionMode@345@@Z
    virtual long get_Mode(int *);
};
} // namespace Windows::UI::Composition::BackEasingFunction
