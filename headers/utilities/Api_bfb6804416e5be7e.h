#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 17 member(s).
namespace Windows::UI::Composition::CompositionAnimation {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionAnimation@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllParameters@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJXZ
    virtual long ClearAllParameters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long ClearParameter(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBooleanParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@E@Z
    virtual long SetBooleanParameter(HSTRING__*, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UColor@45@@Z
    virtual long SetColorParameter(HSTRING__*, ::Windows::UI::Color);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExpressionReferenceParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIAnimationObject@345@@Z
    virtual long SetExpressionReferenceParameter(HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrix3x2Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UMatrix3x2@Numerics@Foundation@5@@Z
    virtual long SetMatrix3x2Parameter(HSTRING__*, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrix4x4Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UMatrix4x4@Numerics@Foundation@5@@Z
    virtual long SetMatrix4x4Parameter(HSTRING__*, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQuaternionParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UQuaternion@Numerics@Foundation@5@@Z
    virtual long SetQuaternionParameter(HSTRING__*, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionObject@345@@Z
    virtual long SetReferenceParameter(HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalarParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@M@Z
    virtual long SetScalarParameter(HSTRING__*, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector2Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVector2@Numerics@Foundation@5@@Z
    virtual long SetVector2Parameter(HSTRING__*, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector3Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVector3@Numerics@Foundation@5@@Z
    virtual long SetVector3Parameter(HSTRING__*, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector4Parameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVector4@Numerics@Foundation@5@@Z
    virtual long SetVector4Parameter(HSTRING__*, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialValueExpressions@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z
    virtual long get_InitialValueExpressions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Target@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Target(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Target@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Target(HSTRING__*);
};
} // namespace Windows::UI::Composition::CompositionAnimation
