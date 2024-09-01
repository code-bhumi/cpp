#include "math.h"
#include <iostream>

int Math::sum(int a, int b) {
    return a + b;
}

int Math::sub(int a, int b) {
    return a - b;
}

int Math::mul(int a, int b) {
    return a * b;
}

int Math::div(int a, int b) {
    if (b == 0) {
        std::cout << "Error: cannot divide by zero !!!" << std::endl;
        return -1;
    }
    return a / b;
}

