#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class CompositionDiagnosticsInterop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUICompositionDrawingSurface@234@PEAPEAUIDXGISurface@@@Z
    virtual long CopySurface(WindissectOpaque *, IDXGISurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateVisualTreePreOrder@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUIVisual@234@0PEAUIVisualTreeEnumerationDiagnostics@234@@Z
    virtual long EnumerateVisualTreePreOrder(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateVisualTreePreOrder_Locked@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUIVisual@234@0PEAUIVisualTreeEnumerationDiagnostics@234@@Z
    virtual long EnumerateVisualTreePreOrder_Locked(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualAdded@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@00_N@Z
    static long OnVisualAdded(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualRemoved@CompositionDiagnosticsInterop@Composition@UI@Windows@@SAJPEAVVisual@234@@Z
    static long OnVisualRemoved(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterVisualTreeChangeCallback@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUICompositionTreeChangedDiagnostics@234@@Z
    virtual long RegisterVisualTreeChangeCallback(WindissectOpaque *);
};
} // namespace Windows::UI::Composition
