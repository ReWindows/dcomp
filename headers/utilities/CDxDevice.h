#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 25 member(s).
namespace DirectComposition {
class CDxDevice {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSurface@CDxDevice@DirectComposition@@QEAAJPEAUID3D11Resource@@@Z
    long ClearSurface(ID3D11Resource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchSurfaceManager@2@@Z
    void CopySurface(ID3D11Resource *, unsigned int, unsigned int, ID3D11Resource *, tagRECT const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionBuffer@CDxDevice@DirectComposition@@QEAAJIIW4DXGI_FORMAT@@HIIPEAPEAXPEAPEAUIUnknown@@@Z
    long CreateCompositionBuffer(unsigned int, unsigned int, int, int, unsigned int, unsigned int, void * *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateD2DDeviceContext@CDxDevice@DirectComposition@@QEAAJPEAPEAUID2D1DeviceContext@@@Z
    long CreateD2DDeviceContext(ID2D1DeviceContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateD2DDrawingStateBlock@CDxDevice@DirectComposition@@QEAAJPEAPEAUID2D1DrawingStateBlock@@@Z
    long CreateD2DDrawingStateBlock(ID2D1DrawingStateBlock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Texture2D@@@Z
    long CreateTexture(D3D11_TEXTURE2D_DESC const &, bool, ID3D11Texture2D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteGutterExtensions@CDxDevice@DirectComposition@@QEAAJAEBV?$DynArray@UGutterExtension@DirectComposition@@$0A@@@PEAUID3D11ShaderResourceView@@PEAUID3D11RenderTargetView@@IIW4DXGI_FORMAT@@@Z
    long ExecuteGutterExtensions(WindissectOpaque const &, ID3D11ShaderResourceView *, ID3D11RenderTargetView *, unsigned int, unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDedicatedVideoMemory@CDxDevice@DirectComposition@@QEBA_KXZ
    uint64_t GetDedicatedVideoMemory() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumTextureSize@CDxDevice@DirectComposition@@QEBAIXZ
    unsigned int GetMaximumTextureSize() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CDxDevice@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferResources@CDxDevice@DirectComposition@@QEAAJPEAUIDXGIResource@@@Z
    long OfferResources(IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentCompositionBuffers@CDxDevice@DirectComposition@@QEAAJPEAXPEBQEAUIUnknown@@I@Z
    long PresentCompositionBuffers(void *, IUnknown * const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadTexture@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@@Z
    void ReadTexture(ID3D11Resource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z
    void RemoveGuardRect(ID3D11Texture2D *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetD2DDevice@CDxDevice@DirectComposition@@QEAAXPEAUID2D1Device@@@Z
    void SetD2DDevice(ID2D1Device *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEmptyGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z
    void SetEmptyGuardRect(ID3D11Texture2D *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@AEBUtagRECT@@@Z
    void SetGuardRect(ID3D11Texture2D *, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSubresource@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@IAEBUtagRECT@@PEBXIIW4DXGI_FORMAT@@_N@Z
    void UpdateSubresource(ID3D11Resource *, unsigned int, tagRECT const &, void const *, unsigned int, unsigned int, int, bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z
    long Initialize(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ
    void Uninitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDxDevice@DirectComposition@@MEAA@XZ
    virtual ~CDxDevice();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGutterExtensionResources@CDxDevice@DirectComposition@@AEAAJXZ
    long CreateGutterExtensionResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushPackedGutterExtensions@CDxDevice@DirectComposition@@AEAAJPEAUID3D11ShaderResourceView@@PEAUID3D11RenderTargetView@@IIAEBUGutterExtensionSurface@12@IAEBUtagRECT@@@Z
    long FlushPackedGutterExtensions(ID3D11ShaderResourceView *, ID3D11RenderTargetView *, unsigned int, unsigned int, WindissectOpaque const &, unsigned int, tagRECT const &);
};
} // namespace DirectComposition
