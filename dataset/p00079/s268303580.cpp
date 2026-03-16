#include <cmath>
#include <complex>
#include <cstdio>
#include <iomanip>
#include <iostream>
#define FOR(i,k,n) for (int (i)=(k); (i)<(n); ++(i))
#define REP(i,n) FOR(i,0,n)

using namespace std;

typedef complex<double> xy_t;
double cross_product(xy_t a, xy_t b){ return (conj(a) * b).imag(); }

int main(){
    int n = 0;
    double x,y,area = 0;
    xy_t p[20];
    while(~scanf("%lf,%lf", &x, &y)){
        p[n] = xy_t(x, y);
        n++;
    }

    REP(i,n - 2){
        area += fabs(cross_product(p[i+1] - p[0], p[i+2] - p[0])) / 2;
    }
    cout << fixed <<setprecision(6) << area << endl;

}