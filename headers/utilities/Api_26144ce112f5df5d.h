#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::Vector4KeyFrameAnimation {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@Vector4KeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrame@Api@Vector4KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector4@Numerics@Foundation@5@@Z
    virtual long InsertKeyFrame(float, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrameWithEasingFunction@Api@Vector4KeyFrameAnimation@Composition@UI@Windows@@UEAAJMUVector4@Numerics@Foundation@5@PEAUICompositionEasingFunction@345@@Z
    virtual long InsertKeyFrameWithEasingFunction(float, WindissectOpaque, WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Vector4KeyFrameAnimation
