cmake_minimum_required(VERSION 3.28)
project(Lab2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab2 main.cpp Scanner/Scanner.cpp Scanner/Scanner.h Scanner/Context/ScannerContext.h Scanner/State/ScannerState.h Scanner/State/StateS1.cpp Scanner/State/StateS1.h Scanner/State/StateS2.cpp Scanner/State/StateS2.h Scanner/State/StateS3.cpp Scanner/State/StateS3.h Scanner/State/StateS4.cpp Scanner/State/StateS4.h Scanner/State/StateS5.cpp Scanner/State/StateS5.h Scanner/State/StateS6.cpp Scanner/State/StateS6.h Scanner/State/StateS7.cpp Scanner/State/StateS7.h Scanner/State/StateS8.cpp Scanner/State/StateS8.h)
