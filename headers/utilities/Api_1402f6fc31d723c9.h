#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 26 member(s).
namespace Windows::UI::Composition::Compositor {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionColorBrush@345@@Z
    virtual long CreateColorBrush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorBrushWithColor@Api@Compositor@Composition@UI@Windows@@UEAAJUColor@45@PEAPEAUICompositionColorBrush@345@@Z
    virtual long CreateColorBrushWithColor(::Windows::UI::Color, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorKeyFrameAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIColorKeyFrameAnimation@345@@Z
    virtual long CreateColorKeyFrameAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContainerVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIContainerVisual@345@@Z
    virtual long CreateContainerVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCubicBezierEasingFunction@Api@Compositor@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@0PEAPEAUICubicBezierEasingFunction@345@@Z
    virtual long CreateCubicBezierEasingFunction(WindissectOpaque, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffectFactory@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUIGraphicsEffect@Effects@Graphics@5@PEAPEAUICompositionEffectFactory@345@@Z
    virtual long CreateEffectFactory(::Windows::Graphics::Effects::IGraphicsEffect *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffectFactoryWithProperties@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUIGraphicsEffect@Effects@Graphics@5@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@5@PEAPEAUICompositionEffectFactory@345@@Z
    virtual long CreateEffectFactoryWithProperties(::Windows::Graphics::Effects::IGraphicsEffect *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExpressionAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@345@@Z
    virtual long CreateExpressionAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExpressionAnimationWithExpression@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIExpressionAnimation@345@@Z
    virtual long CreateExpressionAnimationWithExpression(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHostBackdropBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBackdropBrush@345@@Z
    virtual long CreateHostBackdropBrush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInsetClip@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIInsetClip@345@@Z
    virtual long CreateInsetClip(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInsetClipWithInsets@Api@Compositor@Composition@UI@Windows@@UEAAJMMMMPEAPEAUIInsetClip@345@@Z
    virtual long CreateInsetClipWithInsets(float, float, float, float, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLinearEasingFunction@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUILinearEasingFunction@345@@Z
    virtual long CreateLinearEasingFunction(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePropertySet@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionPropertySet@345@@Z
    virtual long CreatePropertySet(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateQuaternionKeyFrameAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIQuaternionKeyFrameAnimation@345@@Z
    virtual long CreateQuaternionKeyFrameAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScalarKeyFrameAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIScalarKeyFrameAnimation@345@@Z
    virtual long CreateScalarKeyFrameAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScopedBatch@Api@Compositor@Composition@UI@Windows@@UEAAJW4CompositionBatchTypes@345@PEAPEAUICompositionScopedBatch@345@@Z
    virtual long CreateScopedBatch(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSpriteVisual@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUISpriteVisual@345@@Z
    virtual long CreateSpriteVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurfaceBrush@345@@Z
    virtual long CreateSurfaceBrush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceBrushWithSurface@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionSurface@345@PEAPEAUICompositionSurfaceBrush@345@@Z
    virtual long CreateSurfaceBrushWithSurface(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTargetForCurrentView@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionTarget@345@@Z
    virtual long CreateTargetForCurrentView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVector2KeyFrameAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIVector2KeyFrameAnimation@345@@Z
    virtual long CreateVector2KeyFrameAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVector3KeyFrameAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIVector3KeyFrameAnimation@345@@Z
    virtual long CreateVector3KeyFrameAnimation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVector4KeyFrameAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIVector4KeyFrameAnimation@345@@Z
    virtual long CreateVector4KeyFrameAnimation(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommitBatch@Api@Compositor@Composition@UI@Windows@@UEAAJW4CompositionBatchTypes@345@PEAPEAUICompositionCommitBatch@345@@Z
    virtual long GetCommitBatch(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateBlurredWallpaperBackdropBrush@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBackdropBrush@345@@Z
    virtual long TryCreateBlurredWallpaperBackdropBrush(WindissectOpaque * *);
};
} // namespace Windows::UI::Composition::Compositor
