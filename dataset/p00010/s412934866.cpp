#include <iostream>
#include <cstdio>
#include <complex>
#include <cmath>

using namespace std;

typedef complex<double> Point;

bool eqv(double d1, double d2) {
    return abs(d1-d2) < 1e-10;
}

double r_(double x) {
    if(abs(x) < 0.001) return 0;
    return x;
}

int main() {
    int N;

    cin >> N;
    while(N--) {
        double x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        Point p1(x1, y1), p2(x2, y2), p3(x3, y3);

        //³·è
        double R = abs(abs(p3-p2) / sin(arg(p2-p1) - arg(p3-p1))) / 2;

        Point vb = p3-p2;
        double len = sqrt(R*R - norm(vb)/4.0);
        Point vbh = vb * Point(0, 1);
        Point center = p2 + vb/2.0 + vbh*len/abs(vbh);
        if(eqv(abs(center-p1), R) && eqv(abs(center-p2), R) && eqv(abs(center-p3), R)) {}
        else center = p2 + vb/2.0 - vbh*len/abs(vbh);
        printf("%.3f %.3f %.3f\n", center.real(), center.imag(), R);
    }
    return 0;
}