#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::VisualUnorderedCollectionIterator {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJIPEAPEAUIVisual@345@PEAI@Z
    virtual long GetMany(unsigned int, WindissectOpaque * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_Current(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@Api@VisualUnorderedCollectionIterator@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
};
} // namespace Windows::UI::Composition::VisualUnorderedCollectionIterator
