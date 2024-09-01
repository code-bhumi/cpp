#include <iostream>

int divide(int a, int b) {
    return a / b;
}

int main() {
    std::cout << "10 / 2 == " << divide(10, 2) << std::endl;
    std::cout << "5  / 0 == " << divide(5, 0) << std::endl;
    std::cout << "0  / 5 == " << divide(0, 5) << std::endl;
    std::cout << 1 / 0 << std::endl;

    return 0;
}