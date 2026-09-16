#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 18 member(s).
namespace DirectComposition {
class CGaussianBlurEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGaussianBlurEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGaussianBlurEffect@DirectComposition@@QEAA@PEAVCFilterEffectProxy@1@@Z
    CGaussianBlurEffect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGaussianBlurEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionGaussianBlurEffect@@@Z
    static long Create(WindissectOpaque *, IDCompositionGaussianBlurEffect * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGaussianBlurEffect@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGaussianBlurEffect@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderMode@CGaussianBlurEffect@DirectComposition@@UEAAJW4D2D1_BORDER_MODE@@@Z
    virtual long SetBorderMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStandardDeviation@CGaussianBlurEffect@DirectComposition@@UEAAJM@Z
    virtual long SetStandardDeviation(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStandardDeviation@CGaussianBlurEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetStandardDeviation(IDCompositionAnimation *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxInputs@CGaussianBlurEffect@DirectComposition@@MEBAIXZ
    virtual unsigned int GetMaxInputs() const;
};
} // namespace DirectComposition
