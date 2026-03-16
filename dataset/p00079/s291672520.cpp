
#include <iostream>
#include <stdio.h>
#include <complex>
using namespace std;
typedef complex<double> xy_t;
xy_t P[110];
double cross_product(xy_t a, xy_t b) { return (conj(a)*b).imag(); }
int main(int argc, const char * argv[]) {
    int N=0;
    double x, y;
    while(~scanf("%lf,%lf", &x, &y)){
        P[N++] = xy_t(x,y);
    }
    double sum = 0.0;
    for (int i=0; i+2<N; ++i){
        xy_t a=P[0], b=P[i+1], c=P[i+2];
        sum += cross_product(b-a, c-a)*0.5;
    }
    printf("%.6f\n",abs(sum));
    return 0;
}