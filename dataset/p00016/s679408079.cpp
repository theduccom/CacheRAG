#include <iostream>
#include <cstdio>
#include <complex>
#define _USE_MATH_DEFFINES
#include <cmath>
using namespace std;
typedef complex<double> P;

double convert(double angle) {
    return((M_PI * (angle / 180.0)));
}

P now(0, 0);
double angle = 0;

int main(void) {
    int fd, spin;
    
    while(scanf("%d,%d", &fd, &spin), fd + spin != 0) {
        double nextx = now.real() + fd * sin(convert(angle)),
        nexty = now.imag() + fd * cos(convert(angle));
        now = P(nextx, nexty);
        angle += spin;
    }
    cout << (int)now.real() << endl << (int)now.imag() << endl;
    return(0);
}