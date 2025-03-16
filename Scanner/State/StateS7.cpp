#include "StateS7.h"

ScannerState *StateS7::handle(ScannerContext &context) {
    std::string now = context.input[context.index];
    if (isdigit(now[0])) {
        context.index++;
        context.p_exp = context.p_exp * 10 + (now[0] - '0');
        return new StateS8();
    }else {
        throw std::runtime_error("Invalid input");
    }
}
