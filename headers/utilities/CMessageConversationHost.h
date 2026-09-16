#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 15 member(s).
namespace DirectComposition {
class CMessageConversationHost {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMessageConversationHost@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMessageConversationHost@DirectComposition@@SAJPEAVCDevice@2@_NP6AJPEBX22I@ZPEAXPEAPEAV12@@Z
    static long Create(WindissectOpaque *, bool, long ( *)(void const *, void const *, void const *, unsigned int), void *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CMessageConversationHost@DirectComposition@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIDFreed@CMessageConversationHost@DirectComposition@@UEAAJIIPEAX@Z
    virtual long OnIDFreed(unsigned int, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemMessage@CMessageConversationHost@DirectComposition@@UEAAJIIPEBX0I@Z
    virtual long OnItemMessage(unsigned int, unsigned int, void const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerConnected@CMessageConversationHost@DirectComposition@@UEAAJIIIPEAPEAX@Z
    virtual long OnPeerConnected(unsigned int, unsigned int, unsigned int, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPeerDisconnected@CMessageConversationHost@DirectComposition@@UEAAJIPEBX_N@Z
    virtual long OnPeerDisconnected(unsigned int, void const *, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnPortConnectionFailed@CMessageConversationHost@DirectComposition@@UEAAJJIII@Z
    virtual long OnPortConnectionFailed(long, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMessageConversationHost@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMessageConversationHost@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMessageConversationHost@DirectComposition@@AEAA@PEAVCDevice@1@_NPEAUIMessageSession@@P6AJPEBX33I@ZPEAX@Z
    CMessageConversationHost(WindissectOpaque *, bool, IMessageSession *, long ( *)(void const *, void const *, void const *, unsigned int), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMessageConversationHost@DirectComposition@@AEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMessageConversationHost@DirectComposition@@EEAA@XZ
    virtual ~CMessageConversationHost();
};
} // namespace DirectComposition
