#include <iostream>
#include <complex>
#include <cmath>
using namespace std;
typedef complex<double> xy_t;

double dot_product(xy_t a, xy_t b){
    return (conj(a)*b).real();
}
double cross_product(xy_t a, xy_t b){
    return (conj(a)*b).imag();
}
double tri_area(xy_t o, xy_t a, xy_t b){
    return cross_product(a-o,b-o)/2;
}
xy_t projection(xy_t p, xy_t b){
    return b*dot_product(p,b)/norm(b);
}

xy_t polys[20];
int n;

double solve(){
    xy_t origin = polys[0];
    double S = 0;
    for(int i=1; i<n-1; i++){
        S += tri_area(origin, polys[i], polys[i+1]);
    }
    return abs(S);
}
signed main(){
    int i=0;
    double x, y;
    while(scanf("%lf,%lf",&x,&y) != EOF){
        polys[i] = xy_t(x,y);
        i++;
    }
    n = i;
    cout << solve() << endl;
}
