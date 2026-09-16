#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 19 member(s).
namespace Windows::UI::Composition::CompositionPropertySet {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionPropertySet@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertBoolean@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@E@Z
    virtual long InsertBoolean(HSTRING__*, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertColor@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UColor@45@@Z
    virtual long InsertColor(HSTRING__*, ::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertMatrix3x2@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UMatrix3x2@Numerics@Foundation@5@@Z
    virtual long InsertMatrix3x2(HSTRING__*, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertMatrix4x4@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UMatrix4x4@Numerics@Foundation@5@@Z
    virtual long InsertMatrix4x4(HSTRING__*, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertQuaternion@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UQuaternion@Numerics@Foundation@5@@Z
    virtual long InsertQuaternion(HSTRING__*, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertScalar@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@M@Z
    virtual long InsertScalar(HSTRING__*, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertVector2@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVector2@Numerics@Foundation@5@@Z
    virtual long InsertVector2(HSTRING__*, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertVector3@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVector3@Numerics@Foundation@5@@Z
    virtual long InsertVector3(HSTRING__*, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertVector4@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UVector4@Numerics@Foundation@5@@Z
    virtual long InsertVector4(HSTRING__*, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBoolean@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAEPEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetBoolean(HSTRING__*, unsigned char *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetColor@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUColor@45@PEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetColor(HSTRING__*, ::Windows::UI::Color *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMatrix3x2@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUMatrix3x2@Numerics@Foundation@5@PEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetMatrix3x2(HSTRING__*, WindissectOpaque*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMatrix4x4@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUMatrix4x4@Numerics@Foundation@5@PEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetMatrix4x4(HSTRING__*, WindissectOpaque*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetQuaternion@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUQuaternion@Numerics@Foundation@5@PEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetQuaternion(HSTRING__*, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScalar@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAMPEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetScalar(HSTRING__*, float *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVector2@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUVector2@Numerics@Foundation@5@PEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetVector2(HSTRING__*, WindissectOpaque*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVector3@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUVector3@Numerics@Foundation@5@PEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetVector3(HSTRING__*, WindissectOpaque*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVector4@Api@CompositionPropertySet@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUVector4@Numerics@Foundation@5@PEAW4CompositionGetValueStatus@345@@Z
    virtual long TryGetVector4(HSTRING__*, WindissectOpaque*, int *);
};
} // namespace Windows::UI::Composition::CompositionPropertySet
