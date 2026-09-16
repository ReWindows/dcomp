#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
namespace Windows::UI::Composition::Core {
class CompositorController {
public:
    class Api;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositorController@Core@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositorController@Core@Composition@UI@Windows@@QEAA@XZ
    CompositorController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositorController@Core@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireCommitNeeded_Callback@CompositorController@Core@Composition@UI@Windows@@QEAAXXZ
    void FireCommitNeeded_Callback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositorController@Core@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositorController@Core@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositorController@Core@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@5@PEAUICoreWindow@245@PEAUIMessageSessionStable@@@Z
    long RuntimeClassInitialize(::Windows::System::IDispatcherQueue *, ::Windows::UI::Core::ICoreWindow *, IMessageSessionStable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositorController@Core@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositorController();
};
} // namespace Windows::UI::Composition::Core
