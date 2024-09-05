#include <iostream>

int get_Integer_From_User()
{
    std::cout << "Enter an integer: " << '\n';
    int x{ };
    std::cin >> x;
    return x;
}