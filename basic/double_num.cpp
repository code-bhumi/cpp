#include <iostream>

int main()
{
    std::cout << "enter an integer: ";

    int num{ };

    std::cin >> num ;
    num = num * 2 ;
    std::cout << "Double that number is " << num << '\n';

    return 0;

}