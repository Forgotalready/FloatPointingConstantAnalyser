#ifndef LAB2_SCANNERSTATE_H
#define LAB2_SCANNERSTATE_H

#include "../Context/ScannerContext.h"

class ScannerState {
public:
    virtual ~ScannerState() = default;
    virtual ScannerState* handle(ScannerContext &) = 0;
};

#endif //LAB2_SCANNERSTATE_H
