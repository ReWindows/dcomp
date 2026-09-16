#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::RectangleClip {
class Private {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Private@RectangleClip@Composition@UI@Windows@@QEAA@XZ
    Private();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UsesLayerClipping@Private@RectangleClip@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_UsesLayerClipping(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UsesLayerClipping@Private@RectangleClip@Composition@UI@Windows@@UEAAJE@Z
    virtual long put_UsesLayerClipping(unsigned char);
};
} // namespace Windows::UI::Composition::RectangleClip
