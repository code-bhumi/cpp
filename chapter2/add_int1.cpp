#include <iostream>

int get_Integer_From_User();

int main()
{
    int x{get_Integer_From_User()};
    int y{get_Integer_From_User()};
    int z{get_Integer_From_User()};

    std::cout << "The sum of x, y and z is " << x + y + z << '\n';

    return 0;
}