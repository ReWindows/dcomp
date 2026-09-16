#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition::Internal {
class SuperWetInkVisual {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuperWetInkSource@SuperWetInkVisual@Internal@Composition@UI@Windows@@QEAAXPEAVCompositionSuperWetInkSource@2345@@Z
    void SetSuperWetInkSource(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAA@XZ
    virtual ~SuperWetInkVisual();
};
} // namespace Windows::UI::Composition::Internal
