#include <iostream>
#include <string>
#include <vector>
#include "Scanner/Scanner.h"

std::vector<std::string> parse_exp(const std::string& exp){
    std::vector<std::string> parsed_exp;
    for(const char& x : exp){
        parsed_exp.emplace_back(1, x);
    }
    return parsed_exp;
}

void test(){
    std::string exp;
    std::cin >> exp;

    std::vector<std::string> parsed_exp = parse_exp(exp);

    Scanner scanner((ScannerContext(parsed_exp)));
    try {
        std::cout << scanner.scan() << std::endl;
    }catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
    while (true) {
        test();
    }
    return 0;
}
