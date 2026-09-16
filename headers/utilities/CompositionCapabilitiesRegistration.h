#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition {
class CompositionCapabilitiesRegistration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChanged@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXXZ
    static void OnChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAJPEAUIDispatcherQueue@System@4@PEAVCompositionCapabilities@234@PEAUEventRegistrationToken@@@Z
    static long RegisterForEvents(::Windows::System::IDispatcherQueue *, WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXPEAUIDispatcherQueue@System@4@UEventRegistrationToken@@@Z
    static void UnregisterForEvents(::Windows::System::IDispatcherQueue *, EventRegistrationToken);
};
} // namespace Windows::UI::Composition
