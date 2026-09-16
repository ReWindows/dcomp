#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::CompositorCommon {
class Test {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInjectionAnimation@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIInjectionAnimationTest@345@@Z
    virtual long CreateInjectionAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLegacyAnimation@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionAnimation@@@Z
    virtual long CreateLegacyAnimation(IDCompositionAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLegacyAnimationInstance@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIDCompositionAnimation@@PEAPEAUIDCompositionAnimationInstancePartner@@@Z
    virtual long CreateLegacyAnimationInstance(IDCompositionAnimation *, IDCompositionAnimationInstancePartner * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExpressionPostfixString@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@345@PEAG_K@Z
    virtual long GetExpressionPostfixString(WindissectOpaque *, unsigned short *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceParameter@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIInspectable@@PEAUHSTRING__@@0@Z
    virtual long SetReferenceParameter(IInspectable *, HSTRING__*, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTracingCookie@Test@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIInspectable@@I@Z
    virtual long SetTracingCookie(IInspectable *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWaitForCommitCompletionEnabled@Test@CompositorCommon@Composition@UI@Windows@@UEAAJ_N@Z
    virtual long SetWaitForCommitCompletionEnabled(bool);
};
} // namespace Windows::UI::Composition::CompositorCommon
