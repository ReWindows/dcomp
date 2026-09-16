#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition {
class CompositionEffectBrush {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionEffectBrush@Composition@UI@Windows@@QEAA@XZ
    CompositionEffectBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsBackdropInput@CompositionEffectBrush@Composition@UI@Windows@@QEBA_NXZ
    bool ContainsBackdropInput() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionEffectBrush@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVCompositionBrush@234@@Z
    long GetSourceParameter(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionEffectFactory@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUICompositionBrush@234@@Z
    long SetSourceParameter(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAVContextSession@WRL2@Microsoft@@PEAPEAVCompositionBrush@234@@Z
    long ValidateSetSourceParameter(WindissectOpaque *, ::Microsoft::WRL2::ContextSession *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionEffectBrush@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionEffectBrush();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInputs@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ
    long InitializeInputs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePropertySet@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ
    long InitializePropertySet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTreeEffectCounter@CompositionEffectBrush@Composition@UI@Windows@@AEAAXH@Z
    void UpdateTreeEffectCounter(int);
};
} // namespace Windows::UI::Composition
