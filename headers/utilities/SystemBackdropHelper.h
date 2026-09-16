#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition {
class SystemBackdropHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemBackdrop@SystemBackdropHelper@Composition@UI@Windows@@QEBAPEAVCompositionBrush@234@XZ
    WindissectOpaque * GetSystemBackdrop() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemBackdrop@SystemBackdropHelper@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z
    long SetSystemBackdrop(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemBackdropHelper@Composition@UI@Windows@@QEAA@XZ
    ~SystemBackdropHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEmergencyBackgroundVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ
    long EnsureEmergencyBackgroundVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSystemBackdropRoot@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ
    long EnsureSystemBackdropRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSystemBackdropVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ
    long EnsureSystemBackdropVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBackdropVisuals@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ
    long RemoveBackdropVisuals();
};
} // namespace Windows::UI::Composition
