#include <iostream>

void print_fibonacci(int n) {
    unsigned long a = 0;
    unsigned long b = 1;
    unsigned long c = 0;
    if (n == 1) {
        std::cout << a << std::endl;
        return;
    } else if (n == 2) {
        std::cout << a << " " << b << std::endl;
        return;
    } else {
        int i = 2;
        std::cout << a << " " << b << " ";
        while (i <= n) {
            c = a + b;
            std::cout << c << " ";
            a = b;
            b = c;
            ++i;
        }
        std::cout << std::endl;
    }
}

void multiply(int x, int y)
{
    //return x * y;
}

int main()
{
    //std::cout << multiply(4, 5) << '\n';
    print_fibonacci(1);
    print_fibonacci(2);
    print_fibonacci(3);
    print_fibonacci(10);
    print_fibonacci(100);
    return 0;
}