#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition::InitialValueExpressionIterator {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InitialValueExpressionIterator@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@Api@InitialValueExpressionIterator@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@Api@InitialValueExpressionIterator@Composition@UI@Windows@@UEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z
    virtual long get_Current(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@Api@InitialValueExpressionIterator@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
};
} // namespace Windows::UI::Composition::InitialValueExpressionIterator
