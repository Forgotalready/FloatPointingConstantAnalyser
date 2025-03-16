#ifndef LAB2_STATES1_H
#define LAB2_STATES1_H

#include <cctype>
#include <stdexcept>
#include "ScannerState.h"
#include "StateS2.h"
#include "StateS3.h"
#include "StateS4.h"

class StateS1 : public ScannerState {
public:
    ~StateS1() override = default;
    ScannerState *handle(ScannerContext &context) override;
};

#endif //LAB2_STATES1_H
