#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::Interactions::VisualInteractionSource {
class Test {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableOutputPrediction@Test@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJ_N@Z
    virtual long DisableOutputPrediction(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectManipulation@Test@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJUInjectManipulationArgs@@@Z
    virtual long InjectManipulation(InjectManipulationArgs);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoManipulationRedirectionMode@Test@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJXZ
    virtual long SetAutoManipulationRedirectionMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInjectionAnimation@Test@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJPEAUIInjectionAnimationTest@456@@Z
    virtual long StartInjectionAnimation(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Test@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAA@XZ
    Test();
};
} // namespace Windows::UI::Composition::Interactions::VisualInteractionSource
