#include <iostream>

int main()

{
    std::cout << " Enter a number: ";
    int num {};
    std::cin >> num;

    if (num > 5 && num < 10)
        std::cout << " Your number is in between 5 and 10 " << '\n';
    
    else
        std::cout << " Your number is not between 5 and 10 " << '\n';

    return 0;
}