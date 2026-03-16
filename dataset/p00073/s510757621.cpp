#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
    double x, h;
    while (cin >> x >> h && x != 0) {
        printf("%f\n", x*x + 2*x*sqrt(x*x/4 + h*h));
    }

    return 0;
}