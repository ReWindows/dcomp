#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::Private::ScaleVisual {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ScaleVisual@Private@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResampleMode@Api@ScaleVisual@Private@Composition@UI@Windows@@UEAAJPEAW4CompositionResampleMode@3456@@Z
    virtual long get_ResampleMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ResampleMode@Api@ScaleVisual@Private@Composition@UI@Windows@@UEAAJW4CompositionResampleMode@3456@@Z
    virtual long put_ResampleMode(int);
};
} // namespace Windows::UI::Composition::Private::ScaleVisual
