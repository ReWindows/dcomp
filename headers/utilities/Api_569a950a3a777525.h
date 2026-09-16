#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionGeometricClip {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionGeometricClip@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Geometry@Api@CompositionGeometricClip@Composition@UI@Windows@@UEAAJPEAPEAUICompositionGeometry@345@@Z
    virtual long get_Geometry(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewBox@Api@CompositionGeometricClip@Composition@UI@Windows@@UEAAJPEAPEAUICompositionViewBox@345@@Z
    virtual long get_ViewBox(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Geometry@Api@CompositionGeometricClip@Composition@UI@Windows@@UEAAJPEAUICompositionGeometry@345@@Z
    virtual long put_Geometry(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ViewBox@Api@CompositionGeometricClip@Composition@UI@Windows@@UEAAJPEAUICompositionViewBox@345@@Z
    virtual long put_ViewBox(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::CompositionGeometricClip
