#include <iostream>
#include "input.h"

int getInteger();

int main()
{
    int x{getInteger() };
    int y{getInteger() };

    std::cout << x << " + " << y << " is " << x + y << '\n';
    return 0;
}