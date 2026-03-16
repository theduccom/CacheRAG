#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    while (true) {
        int x, h;
        cin >> x >> h;
        if (x == 0 && h == 0) {
            break;
        }

        double s = 0;
        s += x * x;
        s += 2 * x * sqrt(pow((double)x / 2, 2) + pow(h, 2));
        printf("%.6f\n", s);
    }
}