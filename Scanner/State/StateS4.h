#ifndef LAB2_STATES4_H
#define LAB2_STATES4_H

#include <stdexcept>
#include "ScannerState.h"
#include "StateS5.h"

class StateS4 : public ScannerState {
public:
    ~StateS4() override = default;
    ScannerState *handle(ScannerContext &context) override;
};

#endif //LAB2_STATES4_H
