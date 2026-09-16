#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 12 member(s).
namespace Windows::UI::Composition {
class Visual {
public:
    class SystemOnly;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Visual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnchor@Visual@Composition@UI@Windows@@QEAAJPEAPEAVCompositionAnchor@234@@Z
    long CreateAnchor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAnchorListening@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionAnchor@234@_N@Z
    void NotifyAnchorListening(WindissectOpaque *, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Visual@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Visual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Visual@Composition@UI@Windows@@QEAA@XZ
    Visual();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAllChildrenRemoved@Visual@Composition@UI@Windows@@MEAAXXZ
    virtual void OnAllChildrenRemoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildAdded@Visual@Composition@UI@Windows@@MEAAXPEAV1234@0_N@Z
    virtual void OnChildAdded(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildRemoved@Visual@Composition@UI@Windows@@MEAAXPEAV1234@@Z
    virtual void OnChildRemoved(WindissectOpaque *);
};
} // namespace Windows::UI::Composition
