#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition {
class DeviceOwner {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DeviceOwner@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssertSessionLockHeld@DeviceOwner@Composition@UI@Windows@@UEAAXXZ
    virtual void AssertSessionLockHeld();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSessionLock@DeviceOwner@Composition@UI@Windows@@UEAA_NXZ
    virtual bool EnsureSessionLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveSessionLock@DeviceOwner@Composition@UI@Windows@@UEAAXXZ
    virtual void LeaveSessionLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceChanged@DeviceOwner@Composition@UI@Windows@@UEAAXXZ
    virtual void OnDeviceChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DeviceOwner@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DeviceOwner@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeviceOwner@Composition@UI@Windows@@UEAA@XZ
    virtual ~DeviceOwner();
};
} // namespace Windows::UI::Composition
