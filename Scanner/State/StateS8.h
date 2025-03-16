#ifndef LAB2_STATES8_H
#define LAB2_STATES8_H

#include "ScannerState.h"

class StateS8 : public ScannerState {
public:
    ~StateS8() override = default;
    ScannerState *handle(ScannerContext &context) override;
};

#endif //LAB2_STATES8_H
