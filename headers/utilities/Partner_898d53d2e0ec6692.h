#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition::CursorVisual {
class Partner {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCursorId@Partner@CursorVisual@Composition@UI@Windows@@UEAAJPEA_K@Z
    virtual long GetCursorId(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsHardwareCursorEnabled@Partner@CursorVisual@Composition@UI@Windows@@UEAAJPEA_N@Z
    virtual long GetIsHardwareCursorEnabled(bool *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@CursorVisual@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHardwareCursorEnabled@Partner@CursorVisual@Composition@UI@Windows@@UEAAJ_N@Z
    virtual long SetIsHardwareCursorEnabled(bool);
};
} // namespace Windows::UI::Composition::CursorVisual
