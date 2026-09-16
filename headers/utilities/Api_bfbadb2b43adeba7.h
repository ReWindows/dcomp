#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::BounceScalarNaturalMotionAnimation {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Acceleration@Api@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Acceleration(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Restitution@Api@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Restitution(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Acceleration@Api@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_Acceleration(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Restitution@Api@BounceScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_Restitution(float);
};
} // namespace Windows::UI::Composition::BounceScalarNaturalMotionAnimation
