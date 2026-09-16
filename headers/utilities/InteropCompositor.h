#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
namespace Windows::UI::Composition {
class InteropCompositor {
public:
    class Api;
    class SystemOnly;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteropCompositor@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInteropVisual@InteropCompositor@Composition@UI@Windows@@QEAAJPEAPEAVInteropVisual@234@@Z
    long CreateInteropVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInteropVisualReferenceController@InteropCompositor@Composition@UI@Windows@@QEAAJPEAVInteropVisual@234@PEAPEAVInteropVisualReferenceController@234@@Z
    long CreateInteropVisualReferenceController(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateManipulationTransform@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIDCompositionTransform@@AEBU_GUID@@PEAPEAX@Z
    long CreateManipulationTransform(IDCompositionTransform *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedResource@InteropCompositor@Composition@UI@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long CreateSharedResource(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTarget@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUHWND__@@W4_HwndTargetType@@PEAPEAVInteropCompositionTarget@234@@Z
    long CreateTarget(HWND__*, int, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteropCompositor@Composition@UI@Windows@@QEAA@XZ
    InteropCompositor();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteropCompositor@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteropCompositor@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@PEAUIMessageSessionStable@@W4DeviceVersion@DirectComposition@@@Z
    long RuntimeClassInitialize(IUnknown *, WindissectOpaque *, IMessageSessionStable *, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCommitNeeded_Callback@InteropCompositor@Composition@UI@Windows@@MEAAXXZ
    virtual void HandleCommitNeeded_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDeferStateTransition_Callback@InteropCompositor@Composition@UI@Windows@@MEAAX_N@Z
    virtual void NotifyDeferStateTransition_Callback(bool);
};
} // namespace Windows::UI::Composition
