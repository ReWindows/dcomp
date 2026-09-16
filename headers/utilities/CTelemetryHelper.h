#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
class CTelemetryHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGraphStrings@CTelemetryHelper@@QEAAJPEAUIWrappedString@Composition@UI@Windows@@@Z
    long AddGraphStrings(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitUsageTelemetry@CTelemetryHelper@@QEAAXXZ
    void EmitUsageTelemetry();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTelemetryHelper@@QEAA@XZ
    ~CTelemetryHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTelemetryLocked@CTelemetryHelper@@AEAAXXZ
    void LogTelemetryLocked();
};
