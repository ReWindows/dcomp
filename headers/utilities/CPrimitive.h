#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 31 member(s).
namespace DirectComposition {
class CPrimitive {
public:
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetColorNoRef@CPrimitive@DirectComposition@@UEBAPEAUIDCompositionColorPartner@@XZ
    virtual IDCompositionColorPartner * GetColorNoRef() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetColorSurfaceD2DExtendModeX@CPrimitive@DirectComposition@@UEBA?AW4D2D1_EXTEND_MODE@@XZ
    virtual int GetColorSurfaceD2DExtendModeX() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetColorSurfaceD2DExtendModeY@CPrimitive@DirectComposition@@UEBA?AW4D2D1_EXTEND_MODE@@XZ
    virtual int GetColorSurfaceD2DExtendModeY() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorSurfaceIndex@CPrimitive@DirectComposition@@UEBAIXZ
    virtual unsigned int GetColorSurfaceIndex() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetColorSurfaceInfoNoRef@CPrimitive@DirectComposition@@UEBAPEAVCBitmapInfoFront@2@XZ
    virtual WindissectOpaque * GetColorSurfaceInfoNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOcclusionRect@CPrimitive@DirectComposition@@UEAA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetOcclusionRect(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpacitySurfaceD2DExtendModeX@CPrimitive@DirectComposition@@QEBA?AW4D2D1_EXTEND_MODE@@XZ
    int GetOpacitySurfaceD2DExtendModeX() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CPrimitive@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CPrimitive@DirectComposition@@UEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual void Invalidate(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteriorBltOnly@CPrimitive@DirectComposition@@UEBA_NXZ
    virtual bool IsInteriorBltOnly() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Link@CPrimitive@DirectComposition@@UEAAJPEAUIDCompositionPrimitivePartner@@H@Z
    virtual long Link(IDCompositionPrimitivePartner *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z
    void SetColorBrushAtlasSurfacePool(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DStates@CPrimitive@DirectComposition@@UEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z
    virtual void SetD2DStates(D2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE *, D2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacityBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z
    void SetOpacityBrushAtlasSurfacePool(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SplitGroup@CPrimitive@DirectComposition@@UEAAJHPEAPEAUIDCompositionPrimitiveGroupPartner@@@Z
    virtual long SplitGroup(int, IDCompositionPrimitiveGroupPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlink@CPrimitive@DirectComposition@@UEAAJXZ
    virtual long Unlink();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BrushesShown@CPrimitive@DirectComposition@@MEAA_NXZ
    virtual bool BrushesShown();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@@Z
    CPrimitive(WindissectOpaque *, D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, float, WindissectOpaque *, D2D_MATRIX_3X2_F const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorAtlasSurfaceNoRef@CPrimitive@DirectComposition@@MEBAPEAVCAtlasSurface@2@XZ
    virtual WindissectOpaque * GetColorAtlasSurfaceNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpacityAtlasSurfaceNoRef@CPrimitive@DirectComposition@@IEBAPEAVCAtlasSurface@2@XZ
    WindissectOpaque * GetOpacityAtlasSurfaceNoRef() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPrimitive@DirectComposition@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateHelper@CPrimitive@DirectComposition@@IEAAXPEAVCDirtyNotifier@2@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_MATRIX_3X2_F@@@Z
    void InvalidateHelper(WindissectOpaque *, WindissectOpaque *, D2D_MATRIX_3X2_F const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rebuild@CPrimitive@DirectComposition@@MEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z
    virtual long Rebuild(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromPrimitiveGroup@CPrimitive@DirectComposition@@IEAAJXZ
    long RemoveFromPrimitiveGroup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DLayerStateTexCoordTransform@CPrimitive@DirectComposition@@KAXPEAVCAtlasSurface@2@PEAUD2D_MATRIX_3X2_F@@1@Z
    static void SetD2DLayerStateTexCoordTransform(WindissectOpaque *, D2D_MATRIX_3X2_F *, D2D_MATRIX_3X2_F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DStatesHelper@CPrimitive@DirectComposition@@IEAAXPEAUD2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE@@PEAUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@@Z
    void SetD2DStatesHelper(D2D1_COMPOSITOR_PRIMITIVE_DRAWING_STATE *, D2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldClampColorBrushBounds@CPrimitive@DirectComposition@@MEAA_NXZ
    virtual bool ShouldClampColorBrushBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldClampOpacityBrushBounds@CPrimitive@DirectComposition@@MEAA_NXZ
    virtual bool ShouldClampOpacityBrushBounds();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPrimitive@DirectComposition@@MEAA@XZ
    virtual ~CPrimitive();
};
} // namespace DirectComposition
