#include <iostream>

int pow2(int x);

int main()
{
    int side1, side2, diagonal;
    char ch;

    int cnt_rect = 0, cnt_lozen = 0;

    while (std::cin >> side1 >> ch >> side2 >> ch >> diagonal) {
        if (pow2(side1) + pow2(side2) == pow2(diagonal)) {
            cnt_rect++;
        }
        if (side1 == side2) {
            cnt_lozen++;
        }
    }

    std::cout << cnt_rect << std::endl << cnt_lozen << std::endl;

    return 0;
}

int pow2(int x)
{
    return (x * x);
}