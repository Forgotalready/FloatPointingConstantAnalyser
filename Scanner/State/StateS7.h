#ifndef LAB2_STATES7_H
#define LAB2_STATES7_H

#include <stdexcept>
#include "ScannerState.h"
#include "StateS8.h"

class StateS7 : public ScannerState {
public:
    ~StateS7() override = default;
    ScannerState *handle(ScannerContext &context) override;
};

#endif //LAB2_STATES7_H
