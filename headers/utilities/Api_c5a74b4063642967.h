#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 23 member(s).
namespace Windows::UI::Composition::CompositionIsland {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionIsland@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStateChangedDeferral@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAPEAUICompositionNotificationDeferral@345@@Z
    virtual long CreateStateChangedDeferral(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AutomationProviderRequested@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandAutomationProviderRequestedEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_AutomationProviderRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Closed@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Closed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CompositorConnected@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_CompositorConnected(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_StateChanged@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_StateChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActualSize@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_ActualSize(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutomationHostProvider@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_AutomationHostProvider(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayScale@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_DisplayScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Environment@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAPEAUICompositionIslandEnvironment@345@@Z
    virtual long get_Environment(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEA_K@Z
    virtual long get_Id(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsContentVisible@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsContentVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSiteVisible@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsSiteVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Orientation@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z
    virtual long get_Orientation(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RasterizationScale@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_RasterizationScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestedSize@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_RequestedSize(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Environment@Api@CompositionIsland@Composition@UI@Windows@@UEAAJPEAUICompositionIslandEnvironment@345@@Z
    virtual long put_Environment(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsContentVisible@Api@CompositionIsland@Composition@UI@Windows@@UEAAJE@Z
    virtual long put_IsContentVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RequestedSize@Api@CompositionIsland@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_RequestedSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AutomationProviderRequested@Api@CompositionIsland@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AutomationProviderRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Closed@Api@CompositionIsland@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Closed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CompositorConnected@Api@CompositionIsland@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CompositorConnected(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_StateChanged@Api@CompositionIsland@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_StateChanged(EventRegistrationToken);
};
} // namespace Windows::UI::Composition::CompositionIsland
