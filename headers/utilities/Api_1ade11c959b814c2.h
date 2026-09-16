#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::AmbientLight {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@AmbientLight@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Color@Api@AmbientLight@Composition@UI@Windows@@UEAAJPEAUColor@45@@Z
    virtual long get_Color(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Intensity@Api@AmbientLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Intensity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Color@Api@AmbientLight@Composition@UI@Windows@@UEAAJUColor@45@@Z
    virtual long put_Color(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Intensity@Api@AmbientLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_Intensity(float);
};
} // namespace Windows::UI::Composition::AmbientLight
