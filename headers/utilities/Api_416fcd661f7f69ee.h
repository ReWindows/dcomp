#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::VisualUnorderedCollection {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long Add(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@VisualUnorderedCollection@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVVisual@Composition@UI@Windows@@@Collections@Foundation@5@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJXZ
    virtual long RemoveAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Count@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_Count(int *);
};
} // namespace Windows::UI::Composition::VisualUnorderedCollection
