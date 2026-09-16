#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::CompositionProjectedShadowCasterCollection {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVCompositionProjectedShadowCaster@Composition@UI@Windows@@@Collections@Foundation@5@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAbove@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@0@Z
    virtual long InsertAbove(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAtBottom@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@@Z
    virtual long InsertAtBottom(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAtTop@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@@Z
    virtual long InsertAtTop(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertBelow@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@0@Z
    virtual long InsertBelow(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@@Z
    virtual long Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJXZ
    virtual long RemoveAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_Count(int *);
};
} // namespace Windows::UI::Composition::CompositionProjectedShadowCasterCollection
