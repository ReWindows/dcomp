#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 53 member(s).
namespace Windows::UI::Composition {
class CompositorFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CompositorFactory@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositorFactory@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckEnabled@CompositorFactory@Composition@UI@Windows@@UEAAJPEA_N0@Z
    virtual long CheckEnabled(bool *, bool *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositorFactory@Composition@UI@Windows@@QEAA@XZ
    CompositorFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositorWithSchedulingMessageSession@CompositorFactory@Composition@UI@Windows@@UEAAJPEAUIMessageSessionStable@@PEAPEAUICompositor@234@@Z
    virtual long CreateCompositorWithSchedulingMessageSession(IMessageSessionStable *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDwmCompositor@CompositorFactory@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@AEBU_GUID@@PEAPEAXPEAPEAUIDwmChannel@@@Z
    virtual long CreateDwmCompositor(IUnknown *, WindissectOpaque *, _GUID const &, void * *, IDwmChannel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInteropCompositor@CompositorFactory@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInteropCompositor(IUnknown *, WindissectOpaque *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInteropCompositorWithSchedulingMessageSession@CompositorFactory@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@PEAUIMessageSessionStable@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInteropCompositorWithSchedulingMessageSession(IUnknown *, WindissectOpaque *, IMessageSessionStable *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositorFactory@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositorFactory@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositorFactory@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositorFactory@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CompositorFactory@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@CompositorFactory@Composition@UI@Windows@@UEAAJPEA_N@Z
    virtual long IsSupported(bool *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositorFactory@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositorFactory@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxGlobalPlaybackRate@CompositorFactory@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MaxGlobalPlaybackRate(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinGlobalPlaybackRate@CompositorFactory@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MinGlobalPlaybackRate(float *);
};
} // namespace Windows::UI::Composition
