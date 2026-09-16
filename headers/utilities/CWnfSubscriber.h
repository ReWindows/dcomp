#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition {
class CWnfSubscriber {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Subscribe@CWnfSubscriber@Composition@UI@Windows@@SAJXZ
    static long Subscribe();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WnfCapabilitiesChangeCallback@CWnfSubscriber@Composition@UI@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long WnfCapabilitiesChangeCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?WnfCapabilitiesQueryCallback@CWnfSubscriber@Composition@UI@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long WnfCapabilitiesQueryCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
};
} // namespace Windows::UI::Composition
