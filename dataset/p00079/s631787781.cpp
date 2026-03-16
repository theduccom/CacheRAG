#include <iostream>
#include <complex>
#include <cmath>
using namespace std;
typedef complex<double> xy_t;
double cross_product(xy_t a, xy_t b) {
    return(conj(a)*b).imag(); 
}

int main() {
    xy_t p[30];
    double x, y;
    char c;
    int idx = 0;
    while (cin >> x >> c >> y) {
        p[idx] = xy_t(x, y);
        idx++;
    }

    double sm = 0.0;
    for (int i = 0; i < idx - 2; i++) {
        xy_t a = p[0], b = p[i + 1], c = p[i + 2];
        sm += cross_product(b - a, c - a) / 2.0;
    }

    cout << sm << endl;
}

/*
g++ -std=c++14 pr_prog/_main.cpp
 */
