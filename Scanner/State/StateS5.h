#ifndef LAB2_STATES5_H
#define LAB2_STATES5_H

#include <stdexcept>
#include "ScannerState.h"
#include "StateS6.h"

class StateS5 : public ScannerState {
public:
    ~StateS5() override = default;
    ScannerState *handle(ScannerContext &context) override;
};

#endif //LAB2_STATES5_H
