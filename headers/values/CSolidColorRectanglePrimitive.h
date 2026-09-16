#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace DirectComposition {
class CSolidColorRectanglePrimitive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSolidColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@AEBU_D3DCOLORVALUE@@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, float, WindissectOpaque *, D2D_MATRIX_3X2_F const *, int, _D3DCOLORVALUE const &, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteriorBltOnly@CSolidColorRectanglePrimitive@DirectComposition@@UEBA_NXZ
    virtual bool IsInteriorBltOnly() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DStates@CSolidColorRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z
    virtual void SetD2DStates(D2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE *, D2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitiveType@CSolidColorRectanglePrimitive@DirectComposition@@EEAA?AW4PrimitiveType@CPrimitive@2@XZ
    virtual int GetPrimitiveType();
};
} // namespace DirectComposition
