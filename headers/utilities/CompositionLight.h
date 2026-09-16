#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 24 member(s).
namespace Windows::UI::Composition {
class CompositionLight {
public:
    class Api;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessorAddRef@CompositionLight@Composition@UI@Windows@@UEAAXXZ
    virtual void AccessorAddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessorEnsureValidState@CompositionLight@Composition@UI@Windows@@UEAAJXZ
    virtual long AccessorEnsureValidState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessorGetSession@CompositionLight@Composition@UI@Windows@@UEAAPEAVContextSession@WRL2@Microsoft@@XZ
    virtual ::Microsoft::WRL2::ContextSession * AccessorGetSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccessorRelease@CompositionLight@Composition@UI@Windows@@UEAAXXZ
    virtual void AccessorRelease();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionLight@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisual@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@PEAVVisual@234@@Z
    virtual long AddVisual(WindissectOpaque *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionLight@Composition@UI@Windows@@QEAA@XZ
    CompositionLight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionLight@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionVersionId@CompositionLight@Composition@UI@Windows@@UEBAIPEAVVisualUnorderedCollectionImpl@234@@Z
    virtual unsigned int GetCollectionVersionId(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCountOfVisuals@CompositionLight@Composition@UI@Windows@@UEBAHPEAVVisualUnorderedCollectionImpl@234@@Z
    virtual int GetCountOfVisuals(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualAtIndexNoRef@CompositionLight@Composition@UI@Windows@@UEBAXPEAVVisualUnorderedCollectionImpl@234@IPEAPEAVVisual@234@@Z
    virtual void GetVisualAtIndexNoRef(WindissectOpaque *, unsigned int, WindissectOpaque * *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionLight@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionLight@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllVisuals@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@@Z
    virtual long RemoveAllVisuals(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisual@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@PEAVVisual@234@@Z
    virtual long RemoveVisual(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisualByLightBehavior@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisual@234@W4LightBehavior@234@@Z
    virtual long RemoveVisualByLightBehavior(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabled@CompositionLight@Composition@UI@Windows@@UEAAJ_N@Z
    virtual long SetEnabled(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionLight@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionLight();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionByLightBehavior@CompositionLight@Composition@UI@Windows@@IEAAAEAVVisualUnorderedCollectionImpl@234@W4LightBehavior@234@@Z
    WindissectOpaque & GetCollectionByLightBehavior(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightBehavior@CompositionLight@Composition@UI@Windows@@IEAA?AW4LightBehavior@234@PEAVVisualUnorderedCollectionImpl@234@@Z
    int GetLightBehavior(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargets@CompositionLight@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z
    long UpdateTargets(int);
};
} // namespace Windows::UI::Composition
