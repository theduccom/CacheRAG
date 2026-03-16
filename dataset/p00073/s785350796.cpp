#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    int x, h;
    while (cin >> x >> h) {
        if (x == 0 && h == 0) break;
        double _h = sqrt( x*x/4.0 + h*h );
        printf("%.6f\n", x*x + x * _h * 2);
//        cout << x*x + x * _h * 2 << endl;
    }
    return 0;
}