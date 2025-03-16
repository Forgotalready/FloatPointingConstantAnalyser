#ifndef LAB2_STATES3_H
#define LAB2_STATES3_H

#include <stdexcept>
#include "ScannerState.h"
#include "StateS5.h"
#include "StateS6.h"

class StateS3 : public ScannerState {
public:
    ~StateS3() override = default;
    ScannerState *handle(ScannerContext &context) override;
};

#endif //LAB2_STATES3_H
