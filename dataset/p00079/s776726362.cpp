//
//
// 

#include <iostream>
#include <complex>
#include <cmath>
#include <cstdio>

using namespace std;

typedef std::complex<double> xy_t;
xy_t P[110];

double dot_product(xy_t a, xy_t b) { return (conj(a)*b).real(); }
double cross_product(xy_t a, xy_t b) { return (conj(a)*b).imag(); }

xy_t projection(xy_t p, xy_t b) { return b*dot_product(p,b)/norm(b); }

double calc_area(xy_t A, xy_t B, xy_t C){
    xy_t a = B - A, b = C - A;
    double area = abs(cross_product(a, b)/2.0);
    return area;
}

int main(){
    int N = 0;
    double x, y;
    while(scanf("%lf, %lf", &x, &y) != EOF){
        P[N++] = xy_t(x, y);
    }  

    double sum = 0.00000;
    
    xy_t A = P[0];
    
    for(int i = 0; i < (N-2); ++i){
        xy_t B = P[i+1], C = P[i+2];
        sum += calc_area(A, B, C);
    }

    printf("%.6f\n", sum);
}
