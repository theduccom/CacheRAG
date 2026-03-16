#include <complex>
#include <cmath>
#include <iostream>
#include <stdio.h>
#include <cassert>

using namespace std;

typedef complex<double> xy_t;
xy_t P[110];
char c;
double x,y ;
int N = 0 ;
double s = 0.0;

int main() {
    // ??\???
    while(cin >> x >> c >> y){
        P[N] = xy_t(x,y);
        N++ ;
    }
    //?¨????
    for (int i=0; i+2<N; ++i){
        xy_t a = P[i+1] - P[0];
        xy_t b = P[i+2] - P[0];
        s = s + (conj(a)*b).imag()/2 ;
    }
    printf("%.6f\n", abs(s)) ;
}