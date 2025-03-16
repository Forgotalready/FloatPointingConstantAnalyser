#include <stdexcept>
#include "StateS4.h"


ScannerState *StateS4::handle(ScannerContext &context) {
    std::string now = context.input[context.index];
    if(isdigit(now[0])){
        context.index++;
        context.fracDigits++;
        context.m = context.m * 10 + (now[0] - '0');
        return new StateS5();
    }else{
        throw std::runtime_error("Invalid input");
    }
}
