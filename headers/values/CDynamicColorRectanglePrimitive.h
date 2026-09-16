#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace DirectComposition {
class CDynamicColorRectanglePrimitive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDynamicColorRectanglePrimitive@DirectComposition@@SAJPEAVCDevice@2@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@2@PEBU5@W4DCOMPOSITION_EDGE_FLAGS@@PEAUIDCompositionColorPartner@@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, float, WindissectOpaque *, D2D_MATRIX_3X2_F const *, int, IDCompositionColorPartner *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorNoRef@CDynamicColorRectanglePrimitive@DirectComposition@@UEBAPEAUIDCompositionColorPartner@@XZ
    virtual IDCompositionColorPartner * GetColorNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteriorBltOnly@CDynamicColorRectanglePrimitive@DirectComposition@@UEBA_NXZ
    virtual bool IsInteriorBltOnly() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DStates@CDynamicColorRectanglePrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z
    virtual void SetD2DStates(D2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE *, D2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDynamicColorRectanglePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@PEAUIDCompositionColorPartner@@@Z
    CDynamicColorRectanglePrimitive(WindissectOpaque *, D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, float, WindissectOpaque *, D2D_MATRIX_3X2_F const *, int, IDCompositionColorPartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitiveType@CDynamicColorRectanglePrimitive@DirectComposition@@EEAA?AW4PrimitiveType@CPrimitive@2@XZ
    virtual int GetPrimitiveType();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDynamicColorRectanglePrimitive@DirectComposition@@EEAA@XZ
    virtual ~CDynamicColorRectanglePrimitive();
};
} // namespace DirectComposition
