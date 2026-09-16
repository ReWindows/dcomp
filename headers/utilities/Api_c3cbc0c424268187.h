#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::NaturalMotionAnimation {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DelayBehavior@Api@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAW4AnimationDelayBehavior@345@@Z
    virtual long get_DelayBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DelayTime@Api@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAUTimeSpan@Foundation@5@@Z
    virtual long get_DelayTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StopBehavior@Api@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAW4AnimationStopBehavior@345@@Z
    virtual long get_StopBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DelayBehavior@Api@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJW4AnimationDelayBehavior@345@@Z
    virtual long put_DelayBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DelayTime@Api@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJUTimeSpan@Foundation@5@@Z
    virtual long put_DelayTime(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StopBehavior@Api@NaturalMotionAnimation@Composition@UI@Windows@@UEAAJW4AnimationStopBehavior@345@@Z
    virtual long put_StopBehavior(int);
};
} // namespace Windows::UI::Composition::NaturalMotionAnimation
