#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace DirectComposition {
class CBitmapInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CBitmapInfo@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z
    virtual void CopySurface(ID3D11Resource *, unsigned int, unsigned int, tagRECT const &);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapInfo@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSurface@1@@Z
    CBitmapInfo(WindissectOpaque *, int, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapInfo@DirectComposition@@MEAA@XZ
    virtual ~CBitmapInfo();
};
} // namespace DirectComposition
