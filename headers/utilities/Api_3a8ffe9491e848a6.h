#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@UEAAJIPEAPEAUICompositionInteractionSource@3456@PEAI@Z
    virtual long GetMany(unsigned int, WindissectOpaque * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUICompositionInteractionSource@3456@@Z
    virtual long get_Current(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
};
} // namespace Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator
