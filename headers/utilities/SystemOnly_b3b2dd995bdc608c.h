#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::Desktop::DesktopWindowTarget {
class SystemOnly {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemOnly@DesktopWindowTarget@Desktop@Composition@UI@Windows@@QEAA@XZ
    SystemOnly();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Hwnd@SystemOnly@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAJPEAPEAUHWND__@@@Z
    virtual long get_Hwnd(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTopmost@SystemOnly@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsTopmost(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Root@SystemOnly@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@456@@Z
    virtual long get_Root(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Root@SystemOnly@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z
    virtual long put_Root(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Desktop::DesktopWindowTarget
