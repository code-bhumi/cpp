#include <iostream>

int main()

{
    std::cout << " Enter a number: " << '\n';
    int number { };
    std::cin >> number;

    if  (number == 0 || number == 1)
        std::cout << " You picked the right choice " << '\n';

    else 
        std::cout << " Sorry you picked wrong thing " << '\n';  

    return 0;   
}