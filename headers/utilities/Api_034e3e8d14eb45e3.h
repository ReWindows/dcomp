#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::CompositionAnimationGroup {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Api@CompositionAnimationGroup@Composition@UI@Windows@@UEAAJPEAUICompositionAnimation@345@@Z
    virtual long Add(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionAnimationGroup@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@CompositionAnimationGroup@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVCompositionAnimation@Composition@UI@Windows@@@Collections@Foundation@5@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Api@CompositionAnimationGroup@Composition@UI@Windows@@UEAAJPEAUICompositionAnimation@345@@Z
    virtual long Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@Api@CompositionAnimationGroup@Composition@UI@Windows@@UEAAJXZ
    virtual long RemoveAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@Api@CompositionAnimationGroup@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_Count(int *);
};
} // namespace Windows::UI::Composition::CompositionAnimationGroup
