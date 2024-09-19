#include <iostream>
#include <string>

int main()

{
    std::cout << " Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    
    std::cout << " what is your age: ";
    int age{ };
    std::cin >> age;
    
    std::cout << " Your name is " << name << " and you are " << age << " years old "<< '\n';
    
    int letters{ static_cast<int>(name.length()) };
    
    std::cout << " Sum of your age and numbers of letters in your name is " << letters + age << '\n';

    return 0;
}

