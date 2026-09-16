#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::CompositionIslandEnvironment {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionIslandEnvironment@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeValues@Api@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@MM@Z
    virtual long ChangeValues(WindissectOpaque, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultOrientation@Api@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z
    virtual long get_DefaultOrientation(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultRasterizationScale@Api@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_DefaultRasterizationScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayScale@Api@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_DisplayScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowContext@Api@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAJPEAPEAUIWindowContextPartner@45@@Z
    virtual long get_WindowContext(::Windows::UI::IWindowContextPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WindowContext@Api@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAJPEAUIWindowContextPartner@45@@Z
    virtual long put_WindowContext(::Windows::UI::IWindowContextPartner *);
};
} // namespace Windows::UI::Composition::CompositionIslandEnvironment
