#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 20 member(s).
namespace Windows::UI::Composition::Internal {
class SharedD3DDeviceRemovedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI::Composition::Internal
