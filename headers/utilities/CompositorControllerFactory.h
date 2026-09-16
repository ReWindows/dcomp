#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 34 member(s).
namespace Windows::UI::Composition::Core {
class CompositorControllerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositorControllerWithSchedulingMessageSession@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAUIMessageSessionStable@@PEAPEAUICompositorController@2345@@Z
    virtual long CreateCompositorControllerWithSchedulingMessageSession(IMessageSessionStable *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForCoreWindow@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAUICoreWindow@245@PEAPEAUICompositorController@2345@@Z
    virtual long CreateForCoreWindow(::Windows::UI::Core::ICoreWindow *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositorControllerFactory@Core@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CompositorControllerFactory@Core@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI::Composition::Core
