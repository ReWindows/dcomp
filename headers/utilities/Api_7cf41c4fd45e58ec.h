#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::ScalarKeyFrameAnimation {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ScalarKeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrame@Api@ScalarKeyFrameAnimation@Composition@UI@Windows@@UEAAJMM@Z
    virtual long InsertKeyFrame(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertKeyFrameWithEasingFunction@Api@ScalarKeyFrameAnimation@Composition@UI@Windows@@UEAAJMMPEAUICompositionEasingFunction@345@@Z
    virtual long InsertKeyFrameWithEasingFunction(float, float, WindissectOpaque *);
};
} // namespace Windows::UI::Composition::ScalarKeyFrameAnimation
