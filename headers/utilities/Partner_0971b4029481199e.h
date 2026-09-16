#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition::InteropHolographicTexture {
class Partner {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@InteropHolographicTexture@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBindId@Partner@InteropHolographicTexture@Composition@UI@Windows@@UEAAJI@Z
    virtual long SetBindId(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@Partner@InteropHolographicTexture@Composition@UI@Windows@@UEAAJI@Z
    virtual long SetFlags(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeight@Partner@InteropHolographicTexture@Composition@UI@Windows@@UEAAJI@Z
    virtual long SetHeight(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetX@Partner@InteropHolographicTexture@Composition@UI@Windows@@UEAAJH@Z
    virtual long SetOffsetX(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetY@Partner@InteropHolographicTexture@Composition@UI@Windows@@UEAAJH@Z
    virtual long SetOffsetY(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@Partner@InteropHolographicTexture@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetRoot(IDCompositionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWidth@Partner@InteropHolographicTexture@Composition@UI@Windows@@UEAAJI@Z
    virtual long SetWidth(unsigned int);
};
} // namespace Windows::UI::Composition::InteropHolographicTexture
