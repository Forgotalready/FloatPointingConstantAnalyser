#ifndef LAB2_SCANNERCONTEXT_H
#define LAB2_SCANNERCONTEXT_H

#include <string>
#include <vector>

class ScannerContext {

public:
    std::vector<std::string> input;
    int index;
    int len;
    int l;
    int s;
    int m;
    int fracDigits;
    int p_exp;

    ScannerContext(const std::vector<std::string>& _input)
        : input(_input), index(0), len(static_cast<int>(input.size())),
          l(1), s(1), m(0), fracDigits(0), p_exp(0) {}
};

#endif //LAB2_SCANNERCONTEXT_H
