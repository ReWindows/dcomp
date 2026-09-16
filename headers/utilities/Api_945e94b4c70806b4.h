#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::QuaternionKeyFrameAnimation {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@QuaternionKeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrame@Api@QuaternionKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUQuaternion@Numerics@Foundation@5@@Z
    virtual long InsertKeyFrame(float, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrameWithEasingFunction@Api@QuaternionKeyFrameAnimation@Composition@UI@Windows@@UEAAJMUQuaternion@Numerics@Foundation@5@PEAUICompositionEasingFunction@345@@Z
    virtual long InsertKeyFrameWithEasingFunction(float, WindissectOpaque, WindissectOpaque *);
};
} // namespace Windows::UI::Composition::QuaternionKeyFrameAnimation
