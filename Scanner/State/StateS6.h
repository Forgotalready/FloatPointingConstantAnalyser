#ifndef LAB2_STATES6_H
#define LAB2_STATES6_H

#include <stdexcept>
#include "ScannerState.h"
#include "StateS7.h"
#include "StateS8.h"

class StateS6 : public ScannerState {
public:
    ~StateS6() override = default;
    ScannerState *handle(ScannerContext &context) override;
};

#endif //LAB2_STATES6_H
