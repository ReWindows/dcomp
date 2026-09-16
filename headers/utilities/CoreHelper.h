#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 2 member(s).
namespace Windows::UI::Composition {
class CoreHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentCoreWindow@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUICoreWindow@Core@34@@Z
    static long GetCurrentCoreWindow(::Windows::UI::Core::ICoreWindow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentDispatcherQueue@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUIDispatcherQueue@System@4@@Z
    static long GetCurrentDispatcherQueue(::Windows::System::IDispatcherQueue * *);
};
} // namespace Windows::UI::Composition
