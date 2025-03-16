#include "StateS3.h"

ScannerState *StateS3::handle(ScannerContext &context) {
    std::string now = context.input[context.index];
    if (std::isdigit(now[0])) {
        context.index++;
        context.m = context.m * 10 + (now[0] - '0');
        return new StateS3();
    } else if (now == ".") {
        context.index++;
        return new StateS5();
    }else if(now == "e") {
        context.index++;
        return new StateS6();
    }else {
        throw std::runtime_error("Invalid input");
    }
}
