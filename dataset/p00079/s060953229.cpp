#include <complex>
#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;
typedef complex<double> xy_t;
xy_t P[110];

double cross_product(xy_t a, xy_t b) { return (conj(a)*b).imag(); }
int main() {
    int N=0;
    double x, y;
    while (~scanf("%lf,%lf", &x, &y)){
        P[N++] = xy_t(x,y);
    }
    double sum = 0.0;
    xy_t a=P[0];
    for (int i=0; i+2<N; ++i) {
        xy_t b=P[i+1], c=P[i+2];
        sum += cross_product(c-a, b-a)/2.0;
    }
    printf("%lf\n", abs(sum));
 }