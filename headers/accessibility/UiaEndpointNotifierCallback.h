#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition {
class UiaEndpointNotifierCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationConnection@UiaEndpointNotifierCallback@Composition@UI@Windows@@UEAAJU_GUID@@PEBG@Z
    virtual long OnCreateAutomationConnection(_GUID, unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnAutomationProviderToUIA@UiaEndpointNotifierCallback@Composition@UI@Windows@@CAJPEAX@Z
    static long ReturnAutomationProviderToUIA(void *);
};
} // namespace Windows::UI::Composition
