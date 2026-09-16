#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition::DropShadow {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@DropShadow@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BlurRadius@Api@DropShadow@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_BlurRadius(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Color@Api@DropShadow@Composition@UI@Windows@@UEAAJPEAUColor@45@@Z
    virtual long get_Color(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mask@Api@DropShadow@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z
    virtual long get_Mask(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@DropShadow@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z
    virtual long get_Offset(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Opacity@Api@DropShadow@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Opacity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourcePolicy@Api@DropShadow@Composition@UI@Windows@@UEAAJPEAW4CompositionDropShadowSourcePolicy@345@@Z
    virtual long get_SourcePolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BlurRadius@Api@DropShadow@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_BlurRadius(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Color@Api@DropShadow@Composition@UI@Windows@@UEAAJUColor@45@@Z
    virtual long put_Color(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Mask@Api@DropShadow@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z
    virtual long put_Mask(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@DropShadow@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z
    virtual long put_Offset(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Opacity@Api@DropShadow@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_Opacity(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourcePolicy@Api@DropShadow@Composition@UI@Windows@@UEAAJW4CompositionDropShadowSourcePolicy@345@@Z
    virtual long put_SourcePolicy(int);
};
} // namespace Windows::UI::Composition::DropShadow
