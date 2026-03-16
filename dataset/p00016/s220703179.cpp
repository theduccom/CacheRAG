#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int angle = 90;
    double x = 0, y = 0, radian = M_PI * angle / 180;
    while (true) {
        int d, t;
        scanf("%d,%d", &d, &t);
        if (d == 0 && t == 0)
            break;

        x += d * cos(radian);
        y += d * sin(radian);
        angle -= t;
        radian = M_PI * angle / 180;
    }
    printf("%d\n%d\n", (int)x, (int)y);
}