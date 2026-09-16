#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition::Internal::CaptureRenderTarget {
class Partner {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Controller@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJPEAPEAUICaptureControllerBase@3456@@Z
    virtual long get_Controller(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DirtyRegionMode@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJPEAW4CompositionDirtyRegionMode@3456@@Z
    virtual long get_DirtyRegionMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCursorEnabled@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsCursorEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinUpdateInterval@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJPEAI@Z
    virtual long get_MinUpdateInterval(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SDRBoost@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_SDRBoost(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Controller@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJPEAUICaptureControllerBase@3456@@Z
    virtual long put_Controller(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DirtyRegionMode@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJW4CompositionDirtyRegionMode@3456@@Z
    virtual long put_DirtyRegionMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsCursorEnabled@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJE@Z
    virtual long put_IsCursorEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinUpdateInterval@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJI@Z
    virtual long put_MinUpdateInterval(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SDRBoost@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_SDRBoost(float);
};
} // namespace Windows::UI::Composition::Internal::CaptureRenderTarget
