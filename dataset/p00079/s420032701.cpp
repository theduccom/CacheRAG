#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(int)(b);++i)
#define rep(i,n) FOR(i,0,n)

vector<double> x, y;

double __pow(double a) {
    return a * a;
}

int main() {
    double px,py;
    while(~scanf("%lf,%lf",&px,&py)) {
        x.push_back(px); y.push_back(py);
    }

    int n = x.size();
    double s = 0;
    FOR(i,2,n) {
        double a = sqrt(__pow(x[0]-x[i-1]) + __pow(y[0]-y[i-1]));
        double b = sqrt(__pow(x[0]-x[i]) + __pow(y[0]-y[i]));
        double c = sqrt(__pow(x[i-1]-x[i]) + __pow(y[i-1]-y[i]));
        double z = (a+b+c) / 2.0;
        s += sqrt(z * (z-a) * (z-b) * (z-c));
    }

    printf("%.15lf\n", s);

    return 0;
}