#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionObject {
class Partner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectAnimation@Partner@CompositionObject@Composition@UI@Windows@@UEAAJPEBGPEAUICompositionAnimation@345@PEAPEAUICompositionAnimatorPartner@345@@Z
    virtual long ConnectAnimation(unsigned short const *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectAnimation@Partner@CompositionObject@Composition@UI@Windows@@UEAAJPEBG@Z
    virtual long DisconnectAnimation(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableImplicitAnimations@Partner@CompositionObject@Composition@UI@Windows@@UEAAJH@Z
    virtual long EnableImplicitAnimations(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@CompositionObject@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPropertyAnimator@Partner@CompositionObject@Composition@UI@Windows@@UEAAJPEBGPEAPEAUICompositionAnimatorPartner@345@@Z
    virtual long TryGetPropertyAnimator(unsigned short const *, WindissectOpaque * *);
};
} // namespace Windows::UI::Composition::CompositionObject
