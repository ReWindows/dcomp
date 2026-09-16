#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class InjectionAnimator {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?Pause@InjectionAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InjectionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVInjectionAnimation@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?Seek@InjectionAnimator@Composition@UI@Windows@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?Start@InjectionAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@InjectionAnimator@Composition@UI@Windows@@UEAAJXZ
    virtual long Stop();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InjectionAnimator@Composition@UI@Windows@@MEAAXXZ
    virtual void Destroy();
};
} // namespace Windows::UI::Composition
