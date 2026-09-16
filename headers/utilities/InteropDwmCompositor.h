#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition {
class InteropDwmCompositor {
public:
    class SystemOnly;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteropDwmCompositor@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteropDwmCompositor@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteropDwmCompositor@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteropDwmCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@@Z
    long RuntimeClassInitialize(IUnknown *, WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOrDuplicateMilResourceInternal@InteropDwmCompositor@Composition@UI@Windows@@AEAAJW4MIL_RESOURCE_TYPE@@_NPEAXPEAIPEAPEAUIUnknown@@1@Z
    long CreateOrDuplicateMilResourceInternal(int, bool, void *, unsigned int *, IUnknown * *, bool);
};
} // namespace Windows::UI::Composition
