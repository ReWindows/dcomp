#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionColorGradientStop {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionColorGradientStop@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Color@Api@CompositionColorGradientStop@Composition@UI@Windows@@UEAAJPEAUColor@45@@Z
    virtual long get_Color(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@CompositionColorGradientStop@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Offset(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Color@Api@CompositionColorGradientStop@Composition@UI@Windows@@UEAAJUColor@45@@Z
    virtual long put_Color(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@CompositionColorGradientStop@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_Offset(float);
};
} // namespace Windows::UI::Composition::CompositionColorGradientStop
