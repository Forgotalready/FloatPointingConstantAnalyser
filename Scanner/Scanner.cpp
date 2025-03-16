#include "Scanner.h"


double Scanner::scan() {
    while (_context.index != _context.len) {
        ScannerState* newState = _scannerState->handle(_context);
        delete _scannerState;
        _scannerState = newState;
    }
    return _context.l * _context.m * pow(10, _context.s * _context.p_exp - _context.fracDigits);
}

Scanner::Scanner(const ScannerContext &context) : _context(context) {
    _scannerState = new StateS1();
}

Scanner::~Scanner() {
    delete _scannerState;
}
