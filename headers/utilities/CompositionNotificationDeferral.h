#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 18 member(s).
namespace Windows::UI::Composition {
class CompositionNotificationDeferral {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionNotificationDeferral@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CompositionNotificationDeferral@Composition@UI@Windows@@UEAAJXZ
    virtual long Complete();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionNotificationDeferral@Composition@UI@Windows@@QEAA@XZ
    CompositionNotificationDeferral();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionNotificationDeferral@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionNotificationDeferral@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionNotificationDeferral@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionNotificationDeferral@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionNotificationDeferral@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCompletedHandler@CompositionNotificationDeferral@Composition@UI@Windows@@AEAAXXZ
    void InvokeCompletedHandler();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionNotificationDeferral@Composition@UI@Windows@@EEAA@XZ
    virtual ~CompositionNotificationDeferral();
};
} // namespace Windows::UI::Composition
