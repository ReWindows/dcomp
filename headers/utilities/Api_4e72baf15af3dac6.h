#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::ExpressionAnimation {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ExpressionAnimation@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Expression@Api@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Expression(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Expression@Api@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Expression(HSTRING__*);
};
} // namespace Windows::UI::Composition::ExpressionAnimation
