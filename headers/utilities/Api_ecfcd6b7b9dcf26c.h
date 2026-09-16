#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 18 member(s).
namespace Windows::UI::Composition::KeyFrameAnimation {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@KeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertExpressionKeyFrame@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJMPEAUHSTRING__@@@Z
    virtual long InsertExpressionKeyFrame(float, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertExpressionKeyFrameWithEasingFunction@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJMPEAUHSTRING__@@PEAUICompositionEasingFunction@345@@Z
    virtual long InsertExpressionKeyFrameWithEasingFunction(float, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DelayBehavior@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAW4AnimationDelayBehavior@345@@Z
    virtual long get_DelayBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DelayTime@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAUTimeSpan@Foundation@5@@Z
    virtual long get_DelayTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Direction@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAW4AnimationDirection@345@@Z
    virtual long get_Direction(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Duration@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAUTimeSpan@Foundation@5@@Z
    virtual long get_Duration(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IterationBehavior@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAW4AnimationIterationBehavior@345@@Z
    virtual long get_IterationBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IterationCount@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_IterationCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyFrameCount@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_KeyFrameCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StopBehavior@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAW4AnimationStopBehavior@345@@Z
    virtual long get_StopBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DelayBehavior@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJW4AnimationDelayBehavior@345@@Z
    virtual long put_DelayBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DelayTime@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJUTimeSpan@Foundation@5@@Z
    virtual long put_DelayTime(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Direction@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJW4AnimationDirection@345@@Z
    virtual long put_Direction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Duration@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJUTimeSpan@Foundation@5@@Z
    virtual long put_Duration(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IterationBehavior@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJW4AnimationIterationBehavior@345@@Z
    virtual long put_IterationBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IterationCount@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJH@Z
    virtual long put_IterationCount(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StopBehavior@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJW4AnimationStopBehavior@345@@Z
    virtual long put_StopBehavior(int);
};
} // namespace Windows::UI::Composition::KeyFrameAnimation
