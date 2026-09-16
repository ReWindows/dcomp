#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::SpringVector2NaturalMotionAnimation {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SpringVector2NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DampingRatio@Api@SpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_DampingRatio(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Period@Api@SpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAUTimeSpan@Foundation@5@@Z
    virtual long get_Period(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DampingRatio@Api@SpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_DampingRatio(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Period@Api@SpringVector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJUTimeSpan@Foundation@5@@Z
    virtual long put_Period(WindissectOpaque);
};
} // namespace Windows::UI::Composition::SpringVector2NaturalMotionAnimation
