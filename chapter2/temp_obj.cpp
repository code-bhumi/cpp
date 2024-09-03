#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;  // return the value of input back to the caller
}

int main()
{
    std::cout << getValueFromUser() + 5 << '\n'; // where does the returned value get stored?

    return 0;
}