#include <iostream>
#include <cmath>

constexpr double GRAVITY = 9.8;

double floor_velo(int floor);

int main(void)
{
    double crash_velo;
    while (std::cin >> crash_velo) {
        int floor = 1;
        while (crash_velo > floor_velo(floor)) {
            floor++;
        }

        std::cout << floor << std::endl;
    }

    return 0;
}

double floor_velo(int floor)
{
    int height = 5 * (floor - 1);
    return (GRAVITY / sqrt(GRAVITY / 2)) * sqrt(height);
}