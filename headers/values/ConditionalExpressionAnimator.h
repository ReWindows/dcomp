#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
namespace Windows::UI::Composition {
class ConditionalExpressionAnimator {
public:
    class ExpressionAnimatorListEntry;
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Pause@ConditionalExpressionAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ConditionalExpressionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAVConditionalExpressionAnimation@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?Seek@ConditionalExpressionAnimator@Composition@UI@Windows@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?Start@ConditionalExpressionAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PE Export
    // Symbol: ?Stop@ConditionalExpressionAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConditionalExpressionAnimator@Composition@UI@Windows@@UEAA@XZ
    virtual ~ConditionalExpressionAnimator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ConditionalExpressionAnimator@Composition@UI@Windows@@MEAAXXZ
    virtual void Destroy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResources@ConditionalExpressionAnimator@Composition@UI@Windows@@AEAAXXZ
    void ReleaseResources();
};
} // namespace Windows::UI::Composition
