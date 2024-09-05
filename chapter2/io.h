#pragma once

#include <iostream>

int getIntegerFromUser()
{
    std::cout << "Enter an integer: " << '\n';
    int x{ };
    std::cin >> x;
    return x;
}