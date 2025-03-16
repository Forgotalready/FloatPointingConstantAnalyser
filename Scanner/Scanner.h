#ifndef LAB2_SCANNER_H
#define LAB2_SCANNER_H

#include <cmath>
#include "Context/ScannerContext.h"
#include "State/ScannerState.h"
#include "State/StateS1.h"

class Scanner {
    ScannerContext _context;
    ScannerState* _scannerState;
public:
    explicit Scanner(const ScannerContext &context);
    ~Scanner();

    double scan();
};


#endif //LAB2_SCANNER_H
