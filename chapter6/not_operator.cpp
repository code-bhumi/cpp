#include <iostream>

int main()
{
    std::cout << "Enter an integer: " << '\n';
    int x{ };
    std::cin >> x ;
    std::cout << "Enter an integer: " << '\n';
    int y{ };
    std::cin >> y ;

    if (!(x > y))
        std::cout << x << " is not greater than " << y << '\n';
    else
        std::cout << x << " is greater than " << y << '\n';

    return 0;

}