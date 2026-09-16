#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 27 member(s).
namespace Windows::UI::Composition::Internal::CaptureController {
class Partner {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@CaptureController@Internal@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnchorPoint@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@6@@Z
    virtual long get_AnchorPoint(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterPoint@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_CenterPoint(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentSize@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@6@@Z
    virtual long get_ContentSize(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultSDRBoost@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_DefaultSDRBoost(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCapturing@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsCapturing(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsConstrainedBySize@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsConstrainedBySize(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_Offset(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReferenceVisual@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@456@@Z
    virtual long get_ReferenceVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Root@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@456@@Z
    virtual long get_Root(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngle@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_RotationAngle(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngleInDegrees@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_RotationAngleInDegrees(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scale@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@6@@Z
    virtual long get_Scale(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TransformMatrix@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUMatrix4x4@Numerics@Foundation@6@@Z
    virtual long get_TransformMatrix(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AnchorPoint@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@6@@Z
    virtual long put_AnchorPoint(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterPoint@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@@Z
    virtual long put_CenterPoint(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ContentSize@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@6@@Z
    virtual long put_ContentSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DefaultSDRBoost@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_DefaultSDRBoost(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsCapturing@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJE@Z
    virtual long put_IsCapturing(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsConstrainedBySize@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJE@Z
    virtual long put_IsConstrainedBySize(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@@Z
    virtual long put_Offset(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ReferenceVisual@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z
    virtual long put_ReferenceVisual(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Root@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z
    virtual long put_Root(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngle@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_RotationAngle(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationAngleInDegrees@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_RotationAngleInDegrees(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Scale@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@@Z
    virtual long put_Scale(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TransformMatrix@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJUMatrix4x4@Numerics@Foundation@6@@Z
    virtual long put_TransformMatrix(WindissectOpaque);
};
} // namespace Windows::UI::Composition::Internal::CaptureController
