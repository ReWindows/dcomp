#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::InsetClip {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InsetClip@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BottomInset@Api@InsetClip@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_BottomInset(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LeftInset@Api@InsetClip@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_LeftInset(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RightInset@Api@InsetClip@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_RightInset(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TopInset@Api@InsetClip@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_TopInset(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BottomInset@Api@InsetClip@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_BottomInset(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LeftInset@Api@InsetClip@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_LeftInset(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RightInset@Api@InsetClip@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_RightInset(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TopInset@Api@InsetClip@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_TopInset(float);
};
} // namespace Windows::UI::Composition::InsetClip
