#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 34 member(s).
namespace Windows::UI::Composition::Internal {
class SharedD3DDevice {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeviceOnAdapter@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJU_LUID@@PEAPEAUID3D11Device@@@Z
    virtual long CreateDeviceOnAdapter(_LUID, ID3D11Device * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHardwareDevice@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUID3D11Device@@@Z
    virtual long CreateHardwareDevice(ID3D11Device * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWARPDevice@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUID3D11Device@@@Z
    virtual long CreateWARPDevice(ID3D11Device * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SharedD3DDevice@Internal@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@SharedD3DDevice@Internal@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SharedD3DDevice@Internal@Composition@UI@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharedD3DDevice@Internal@Composition@UI@Windows@@QEAA@XZ
    SharedD3DDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DeviceRemoved@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAVSharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_DeviceRemoved(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsValid@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsValid(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DeviceRemoved@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DeviceRemoved(EventRegistrationToken);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedD3DDevice@Internal@Composition@UI@Windows@@EEAA@XZ
    virtual ~SharedD3DDevice();
};
} // namespace Windows::UI::Composition::Internal
