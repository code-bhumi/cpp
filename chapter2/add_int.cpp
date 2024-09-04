#include <iostream>

int getIntegerFromUser()
{
    std::cout << "Enter an integer: " << '\n';
    int x{ };
    std::cin >> x;
    return x;
}

int main()
{
    int x{getIntegerFromUser()};
    int y{getIntegerFromUser()};
    int z{getIntegerFromUser()};

    std::cout << "The sum of x, y and z is " << x + y + z << '\n';

    return 0;
}