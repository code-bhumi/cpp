#include <iostream>
#include "io.h"
#pragma

int getIntegerFromUser();

int main()
{
    int x{getIntegerFromUser()};
    int y{getIntegerFromUser()};
    int z{getIntegerFromUser()};

    std::cout << "The sum of x, y and z is " << x + y + z << '\n';

    return 0;
}