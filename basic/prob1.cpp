#include <iostream>

// going to enter three numbers from keyboard

int main()
{
    int x{};
    int y{};
    int z{};

    std::cout << " Enter three numbers seperated by space ";
    std::cin >> x >> y >> z;

    std::cout << "You entered" << x << "and" << y << "and" << z << '\n' ;
    return 0;

}