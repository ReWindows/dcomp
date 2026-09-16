#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::VisualIslandSite {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@VisualIslandSite@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RequestedSizeChanged@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVVisualIslandSiteEventArgs@234@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_RequestedSizeChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActualSize@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_ActualSize(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSiteVisible@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsSiteVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestedSize@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_RequestedSize(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SiteVisual@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_SiteVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ActualSize@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_ActualSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsSiteVisible@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJE@Z
    virtual long put_IsSiteVisible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RequestedSizeChanged@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RequestedSizeChanged(EventRegistrationToken);
};
} // namespace Windows::UI::Composition::VisualIslandSite
