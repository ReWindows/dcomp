#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 31 member(s).
namespace Windows::UI::Composition {
class CompositionEasingFunctionStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionEasingFunctionStatics@Composition@UI@Windows@@QEAA@XZ
    CompositionEasingFunctionStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBackEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@MPEAPEAUIBackEasingFunction@234@@Z
    virtual long CreateBackEasingFunction(WindissectOpaque *, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBounceEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@HMPEAPEAUIBounceEasingFunction@234@@Z
    virtual long CreateBounceEasingFunction(WindissectOpaque *, int, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCircleEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@PEAPEAUICircleEasingFunction@234@@Z
    virtual long CreateCircleEasingFunction(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCubicBezierEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@UVector2@Numerics@Foundation@4@1PEAPEAUICubicBezierEasingFunction@234@@Z
    virtual long CreateCubicBezierEasingFunction(WindissectOpaque *, WindissectOpaque, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateElasticEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@HMPEAPEAUIElasticEasingFunction@234@@Z
    virtual long CreateElasticEasingFunction(WindissectOpaque *, int, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExponentialEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@MPEAPEAUIExponentialEasingFunction@234@@Z
    virtual long CreateExponentialEasingFunction(WindissectOpaque *, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLinearEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@PEAPEAUILinearEasingFunction@234@@Z
    virtual long CreateLinearEasingFunction(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePowerEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@MPEAPEAUIPowerEasingFunction@234@@Z
    virtual long CreatePowerEasingFunction(WindissectOpaque *, int, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSineEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@W4CompositionEasingFunctionMode@234@PEAPEAUISineEasingFunction@234@@Z
    virtual long CreateSineEasingFunction(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStepEasingFunction@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@PEAPEAUIStepEasingFunction@234@@Z
    virtual long CreateStepEasingFunction(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStepEasingFunctionWithStepCount@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAUICompositor@234@HPEAPEAUIStepEasingFunction@234@@Z
    virtual long CreateStepEasingFunctionWithStepCount(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositionEasingFunctionStatics@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CompositionEasingFunctionStatics@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionEasingFunctionStatics@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI::Composition
