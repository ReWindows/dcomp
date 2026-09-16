#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 35 member(s).
namespace Windows::UI::Composition {
class CompositionCapabilitiesFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionCapabilitiesFactory@Composition@UI@Windows@@QEAA@XZ
    CompositionCapabilitiesFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAPEAUICompositionCapabilities@234@@Z
    virtual long GetForCurrentView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForWindow@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAPEAUICompositionCapabilities@234@@Z
    virtual long GetForWindow(HWND__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositionCapabilitiesFactory@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CompositionCapabilitiesFactory@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI::Composition
