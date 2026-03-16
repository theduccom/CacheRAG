#include <cstdio>
#include <complex>
#include <cmath>
using namespace std;

typedef complex<double> xy_t;

xy_t P[110];

double dot_product(xy_t a, xy_t b) { return (conj(a)*b).real(); }
double cross_product(xy_t a, xy_t b) { return (conj(a)*b).imag(); }
xy_t projection(xy_t p, xy_t b) { return b*dot_product(p,b)/norm(b); }

int main(){
    int n = 0;
    double x, y;
    // "Control + d"??§?????¢
    while(~scanf("%lf, %lf", &x, &y)){
        P[n++] = xy_t(x, y);
    }
    double sum = 0.0;
    for(int i=0; i+2<n; ++i){
        xy_t a=P[0], b=P[i+1], c=P[i+2];
        sum += cross_product(b-a, c-a) / 2;
    }
    printf("%.6f\n", abs(sum));
}