#include <iostream>

bool isEqual(int x, int y)
{
    return x == y; // operator == returns true if x and y are equal otherwise false.
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << std::boolalpha; // boolalpha will print bools as true or false

    std::cout << x << " and " << y << " are Equal? ";
    std::cout<< isEqual(x, y) << '\n'; // will return truce or false depending on the condition.

    return 0;
}