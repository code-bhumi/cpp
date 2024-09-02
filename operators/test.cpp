#include <iostream>

int main() {
    int inc = 0;
    while (inc < 10) {
        std::cout << "inc == " << inc << std::endl;
        inc += 1; // ++inc // inc++ // inc = inc + 1
    }

    return 0;
}