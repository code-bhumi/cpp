#include <iostream>

int main()
{
    std::cout << "enter an integer: ";

    int num{ };

    std::cin >> num ;
    
    std::cout << "Double that number is: " << num * 2 << '\n';

    return 0;

}