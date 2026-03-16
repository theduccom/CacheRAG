#include <bits/stdc++.h>
#include <complex>
#define MAX_N 20
using namespace std;
typedef complex<double> P;
P data[MAX_N];

double distance(P a, P b) {
    double diffx = b.real()-a.real(), diffy = b.imag()-a.imag();
    return(sqrt(diffx*diffx+diffy*diffy));
}

double areaOfTriangle(P a, P b, P c) {
    double ret;
    double A = distance(a,b),B = distance(b,c),C = distance(c,a);
    double z = (A+B+C)/2.0;
    ret = sqrt(z*(z-A)*(z-B)*(z-C));
    return(ret);
}

void solve(int len) {
    double S = 0.0;
    for(int r = 1; r < len-1; r++) {
        S += areaOfTriangle(data[0], data[r], data[r+1]);
    }
    printf("%.6f\n", S);
}

int main(void) {
    double x, y;
    int idx = 0;
    while(scanf("%lf,%lf", &x,&y) != EOF) {
        data[idx++] = P(x, y);
    }
    solve(idx);
    return(0);
}