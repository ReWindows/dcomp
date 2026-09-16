#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 41 member(s).
namespace Windows::UI::Composition::Interactions::InteractionTracker {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustPositionXIfGreaterThanThreshold@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJMM@Z
    virtual long AdjustPositionXIfGreaterThanThreshold(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustPositionYIfGreaterThanThreshold@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJMM@Z
    virtual long AdjustPositionYIfGreaterThanThreshold(float, float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InteractionTracker@Interactions@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCenterPointXInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long ConfigureCenterPointXInertiaModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCenterPointYInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVCompositionConditionalValue@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long ConfigureCenterPointYInertiaModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigurePositionXInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long ConfigurePositionXInertiaModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigurePositionYInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long ConfigurePositionYInertiaModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureScaleInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVInteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long ConfigureScaleInertiaModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureVector2PositionInertiaModifiers@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IIterable@PEAVInteractionTrackerVector2InertiaModifier@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long ConfigureVector2PositionInertiaModifiers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePosition@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@PEAH@Z
    virtual long TryUpdatePosition(WindissectOpaque, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionBy@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@PEAH@Z
    virtual long TryUpdatePositionBy(WindissectOpaque, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionByWithOption@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@W4InteractionTrackerClampingOption@3456@PEAH@Z
    virtual long TryUpdatePositionByWithOption(WindissectOpaque, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionWithAdditionalVelocity@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@PEAH@Z
    virtual long TryUpdatePositionWithAdditionalVelocity(WindissectOpaque, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionWithAnimation@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionAnimation@456@PEAH@Z
    virtual long TryUpdatePositionWithAnimation(WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionWithOption@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@W4InteractionTrackerClampingOption@3456@W4InteractionTrackerPositionUpdateOption@3456@PEAH@Z
    virtual long TryUpdatePositionWithOption(WindissectOpaque, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdatePositionWithOption@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@W4InteractionTrackerClampingOption@3456@PEAH@Z
    virtual long TryUpdatePositionWithOption(WindissectOpaque, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateScale@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJMUVector3@Numerics@Foundation@6@PEAH@Z
    virtual long TryUpdateScale(float, WindissectOpaque, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateScaleWithAdditionalVelocity@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJMUVector3@Numerics@Foundation@6@PEAH@Z
    virtual long TryUpdateScaleWithAdditionalVelocity(float, WindissectOpaque, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateScaleWithAnimation@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionAnimation@456@UVector3@Numerics@Foundation@6@PEAH@Z
    virtual long TryUpdateScaleWithAnimation(WindissectOpaque *, WindissectOpaque, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InteractionSources@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUICompositionInteractionSourceCollection@3456@@Z
    virtual long get_InteractionSources(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInertiaFromImpulse@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsInertiaFromImpulse(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPositionRoundingSuggested@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsPositionRoundingSuggested(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxPosition@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_MaxPosition(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxScale@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MaxScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinPosition@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_MinPosition(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinScale@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MinScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NaturalRestingPosition@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_NaturalRestingPosition(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NaturalRestingScale@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_NaturalRestingScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Owner@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIInteractionTrackerOwner@3456@@Z
    virtual long get_Owner(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_Position(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@6@@Z
    virtual long get_PositionInertiaDecayRate(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionVelocityInPixelsPerSecond@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_PositionVelocityInPixelsPerSecond(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scale@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Scale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@M@Foundation@6@@Z
    virtual long get_ScaleInertiaDecayRate(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleVelocityInPercentPerSecond@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_ScaleVelocityInPercentPerSecond(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxPosition@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@@Z
    virtual long put_MaxPosition(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxScale@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_MaxScale(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinPosition@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@@Z
    virtual long put_MinPosition(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinScale@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_MinScale(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PositionInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@6@@Z
    virtual long put_PositionInertiaDecayRate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScaleInertiaDecayRate@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAU?$IReference@M@Foundation@6@@Z
    virtual long put_ScaleInertiaDecayRate(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Interactions::InteractionTracker
