#include <iostream>

int main() {
    for (int i = 1; i<=9; i++) {
        for (int a = 1; a <= 9; a++) {
            std::cout << i << "x" << a << "=" << i * a << std::endl;
        }
    }
}
