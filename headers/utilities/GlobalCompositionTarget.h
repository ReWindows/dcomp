#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition {
class GlobalCompositionTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@GlobalCompositionTarget@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@GlobalCompositionTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GlobalCompositionTarget@Composition@UI@Windows@@UEAA@XZ
    virtual ~GlobalCompositionTarget();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemBackdrop@GlobalCompositionTarget@Composition@UI@Windows@@MEBAPEAVCompositionBrush@234@XZ
    virtual WindissectOpaque * GetSystemBackdrop() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemBackdrop@GlobalCompositionTarget@Composition@UI@Windows@@MEAAJPEAVCompositionBrush@234@@Z
    virtual long SetSystemBackdrop(WindissectOpaque *);
};
} // namespace Windows::UI::Composition
