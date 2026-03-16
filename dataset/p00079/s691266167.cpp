#include <iostream>
#include <complex>
#include <cmath>
#include <cstdio>

using namespace std;

typedef std::complex<double> xy_t;
xy_t P[110];

double calc_edge_len(xy_t X, xy_t Y){
    return sqrt(pow((X.real()-Y.real()),2.0)+pow((X.imag()-Y.imag()),2.0));
}

double calc_area(xy_t A, xy_t B, xy_t C){
    double area = 0.0;
    double edge_a = calc_edge_len(B, C);
    double edge_b = calc_edge_len(A, C);
    double edge_c = calc_edge_len(B, A);

    double z = (edge_a + edge_b + edge_c)/2;
    area = sqrt(z*(z-edge_a)*(z-edge_b)*(z-edge_c));
    return area;
}

int main(){
    int N = 0;
    double x, y;
    while(scanf("%lf, %lf", &x, &y) != EOF){
        P[N++] = xy_t(x, y);
    }  

    double sum = 0.00000;

    for(int i = 0; i < (N-2); ++i){
        xy_t A = P[0], B = P[i+1], C = P[i+2];
        sum += calc_area(A, B, C);
    }

    printf("%.6f\n", sum);
}
