#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition {
class ConditionalExpressionAnimation {
public:
    class ExpressionConditionListEntry;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCondition@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVExpressionAnimation@234@PEAVCompositionAnimation@234@@Z
    long AddCondition(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ConditionalExpressionAnimation@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4Enum@ConditionalExpressionAnimationSelectionMode@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConditionalExpressionAnimation@Composition@UI@Windows@@UEAA@XZ
    virtual ~ConditionalExpressionAnimation();
};
} // namespace Windows::UI::Composition
