#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::SpringScalarNaturalMotionAnimation {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DampingRatio@Api@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_DampingRatio(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Period@Api@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAUTimeSpan@Foundation@5@@Z
    virtual long get_Period(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DampingRatio@Api@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_DampingRatio(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Period@Api@SpringScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJUTimeSpan@Foundation@5@@Z
    virtual long put_Period(WindissectOpaque);
};
} // namespace Windows::UI::Composition::SpringScalarNaturalMotionAnimation
