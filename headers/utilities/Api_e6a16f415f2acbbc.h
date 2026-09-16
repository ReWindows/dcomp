#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionInteractionSource@3456@@Z
    virtual long Add(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAUICompositionInteractionSource@Interactions@Composition@UI@Windows@@@Collections@Foundation@6@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionInteractionSource@3456@@Z
    virtual long Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAJXZ
    virtual long RemoveAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@Api@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_Count(int *);
};
} // namespace Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection
