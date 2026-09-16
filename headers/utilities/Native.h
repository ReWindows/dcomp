#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 2 member(s).
namespace Windows::UI::Composition::CompositorCommon {
class Native {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenReadCaptureControllerFromHandle@Native@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIReadCaptureController@Internal@345@@Z
    virtual long OpenReadCaptureControllerFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenWriteCaptureControllerFromHandle@Native@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIWriteCaptureController@Internal@345@@Z
    virtual long OpenWriteCaptureControllerFromHandle(void *, WindissectOpaque * *);
};
} // namespace Windows::UI::Composition::CompositorCommon
