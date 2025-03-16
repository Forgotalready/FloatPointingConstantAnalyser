#ifndef LAB2_STATES2_H
#define LAB2_STATES2_H

#include <string>
#include <stdexcept>
#include "ScannerState.h"
#include "StateS3.h"
#include "StateS4.h"

class StateS2 : public ScannerState {
public:
    ~StateS2() override = default;
    ScannerState *handle(ScannerContext &context) override;
};

#endif //LAB2_STATES2_H
