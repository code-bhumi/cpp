#include "math.h"
#include "sci.h"
#include <iostream>

int main() {
    Math m;
    Science s;
    std::cout << "20 + 10 == " << m.sum(20, 10) << std::endl;
    std::cout << "20 - 10 == " << m.sub(20, 10) << std::endl;
    std::cout << "20 * 10 == " << m.mul(20, 10) << std::endl;
    std::cout << "20 / 10 == " << m.div(20, 10) << std::endl;

    s.Physics();
    s.Chemistry();
    s.Biology();
    
    return 0;
}