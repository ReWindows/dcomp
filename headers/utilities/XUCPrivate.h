#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::CompositorCommon {
class XUCPrivate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDataSourceReader@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJ_K0PEAPEAUIDataSourceReader@Private@345@@Z
    virtual long CreateDataSourceReader(uint64_t, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNotificationDeferral@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionDeferralHandlerPrivate@Private@345@IPEAPEAUIInspectable@@@Z
    virtual long CreateNotificationDeferral(WindissectOpaque *, unsigned int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaleVisual@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIScaleVisual@Private@345@@Z
    virtual long CreateScaleVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedTarget@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionTargetPartner@Private@345@@Z
    virtual long CreateSharedTarget(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDestroying@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long IsDestroying(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentBatchId@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAI@Z
    virtual long get_CurrentBatchId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastConfirmedBatchId@XUCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAI@Z
    virtual long get_LastConfirmedBatchId(unsigned int *);
};
} // namespace Windows::UI::Composition::CompositorCommon
