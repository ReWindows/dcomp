#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition {
class CompositionCapabilitiesEvent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddListener@CompositionCapabilitiesEvent@Composition@UI@Windows@@QEAAJPEAVCompositionCapabilities@234@PEAUEventRegistrationToken@@@Z
    long AddListener(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEvents@CompositionCapabilitiesEvent@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@@Z
    long RaiseEvents(::Windows::System::IDispatcherQueue *);
};
} // namespace Windows::UI::Composition
