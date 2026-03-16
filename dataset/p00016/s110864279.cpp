#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

#define PI (M_PI / 180)

int main() {
    int d, a, r = 90;
    double x = 0.0, y = 0.0;
    while (1) {
        scanf("%d, %d", &d, &a);
        if (d == 0 && a == 0) {
            break;
        }
        x += d * cos(r * PI);
        y += d * sin(r * PI);
        r -= a;
        if (r >= 360) {
            r -= 360;
        }
        else if (r < 0) {
            r += 360;
        }
    }
    printf("%d\n%d\n", (int)x, (int)y);
    
    return 0;
}