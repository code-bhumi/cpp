#include <iostream>

int g = 10;

void test_a(int a, int b) {
    g = 15;
    std::cout << "g == " << g << std::endl;
}

void test_b(int g, int b) {
    std::cout << "g == " << g << std::endl;
}

void test_c() {
    std::cout << "g == " << g << std::endl;
    g = 29;
}

int main() {
    test_a(99, 99);
    test_b(99, 99);
    test_c();
    std::cout << "g == " << g << std::endl;

    return 0;
}