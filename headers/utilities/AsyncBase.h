#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::VisualCapture {
class AsyncBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@AsyncBase@VisualCapture@Composition@UI@Windows@@UEAAXXZ
    virtual void OnCancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@AsyncBase@VisualCapture@Composition@UI@Windows@@UEAAXXZ
    virtual void OnClose();
    // Category: Method | Source: PE Export
    // Symbol: ?OnStart@AsyncBase@VisualCapture@Composition@UI@Windows@@UEAAJXZ
    virtual long OnStart();
};
} // namespace Windows::UI::Composition::VisualCapture
