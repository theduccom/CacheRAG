#include    <iostream>
#include    <cmath>
#include    <cstdio>

static double PI = 3.14159265;

using namespace std;

double dtor(double);

int main() {
    int d, a;
    double f = 90.0, x = 0.0, y = 0.0;

    while(true) {
        scanf("%d,%d", &d, &a);
        if(d == 0 && a == 0) { break; }

        x += d * cos(dtor(f));
        y += d * sin(dtor(f));

        f -= a;
    }
    printf("%d\n%d\n", (int)x, (int)y);
}

double dtor(double deg) {
    return (deg * PI) / 180;
}
