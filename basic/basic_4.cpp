#include <iostream>

int main()
{
    std::cout << 3 + 2 << '\n';

    int x {6};
    int y {x - 2};
    std::cout << y << '\n';

    int z{ };
    z = x;
    std::cout << x * z << '\n';

    return 0;

}