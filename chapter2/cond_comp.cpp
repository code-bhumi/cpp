#include <iostream>

int main()
{
    std::cout << "Adwita\n";

    #if 0 // Don't compile anything starting here
        std::cout << "Apple\n";
        std::cout << "Banana\n";
    #endif //until this point

    return 0;    

}
