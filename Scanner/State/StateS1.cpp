#include "StateS1.h"


ScannerState *StateS1::handle(ScannerContext &context) {
    std::string now = context.input[context.index];
    if(now == "+" || now == "-"){
        context.index++;
        context.l = (now == "+") ? 1 : -1;
        return new StateS2();
    }else if(std::isdigit(now[0])){
        context.index++;
        context.m = context.m * 10 + (now[0] - '0');
        return new StateS3();
    }else if(now == "."){
        context.index++;
        return new StateS4();
    }else{
        throw std::runtime_error("Invalid input");
    }
}
