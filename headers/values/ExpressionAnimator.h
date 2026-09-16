#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition {
class ExpressionAnimator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_PersistentCache@ExpressionAnimator@Composition@UI@Windows@@UEAAJIPEBEI@Z
    virtual long Message_PersistentCache(unsigned int, unsigned char const *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?Pause@ExpressionAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ExpressionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCSharedAllocation@DirectComposition@@IPEBIIPEBUExpressionReferenceInfo@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4AnimationValueSynchronizationBehavior@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, unsigned int, unsigned int const *, unsigned int, ExpressionReferenceInfo const *, unsigned int, int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?Seek@ExpressionAnimator@Composition@UI@Windows@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@ExpressionAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PE Export
    // Symbol: ?Stop@ExpressionAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExpressionAnimator@Composition@UI@Windows@@UEAA@XZ
    virtual ~ExpressionAnimator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ExpressionAnimator@Composition@UI@Windows@@MEAAXXZ
    virtual void Destroy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResources@ExpressionAnimator@Composition@UI@Windows@@AEAAXXZ
    void ReleaseResources();
};
} // namespace Windows::UI::Composition
