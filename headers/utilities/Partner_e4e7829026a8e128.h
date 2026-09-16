#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition::CompositorCommon {
class Partner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCursorVisual@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJ_KPEAPEAUICursorVisualPartner@345@@Z
    virtual long CreateCursorVisual(uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedTarget@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIVisualTargetPartner@345@@Z
    virtual long CreateSharedTarget(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedVisual@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long CreateSharedVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HintSize@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJII@Z
    virtual long HintSize(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferSurfaceResources@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJXZ
    virtual long OfferSurfaceResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResourceHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionObject@345@PEAPEAX@Z
    virtual long OpenSharedResourceHandle(WindissectOpaque *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedTargetFromHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIVisualTargetPartner@345@@Z
    virtual long OpenSharedTargetFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedTargetFromVisual@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAPEAUIVisualTargetPartner@345@@Z
    virtual long OpenSharedTargetFromVisual(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedVisualFromHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIVisual@345@@Z
    virtual long OpenSharedVisualFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedVisualFromTarget@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIVisualTargetPartner@345@PEAPEAUIVisual@345@@Z
    virtual long OpenSharedVisualFromTarget(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedVisualReferenceFromHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIVisualReference@Internal@345@@Z
    virtual long OpenSharedVisualReferenceFromHandle(void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimSurfaceResources@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long ReclaimSurfaceResources(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionCommittedListener@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionNotifyCommittedPartner@345@@Z
    virtual long SetCompositionCommittedListener(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::CompositorCommon
