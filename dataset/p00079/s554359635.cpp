#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
using namespace std;


double s(double a, double b, double c){
    double S, z;
    z = (a+b+c)/2.0;
    S = z*(z-a)*(z-b)*(z-c);
    return sqrt(S);
}

int main(void){
    int n=0;
    double x[21], y[21], sum=0;
    double xx, yy, tt;
    for(int i=1; scanf("%lf,%lf",&x[i],&y[i])!=EOF; i++){
        n = i;
    }
    for(int i=2; i<=n; i++){
        xx = sqrt((x[i]-x[i-1])*(x[i]-x[i-1])+(y[i]-y[i-1])*(y[i]-y[i-1]));
        yy = sqrt(x[i]*x[i]+y[i]*y[i]);
        tt = sqrt(x[i-1]*x[i-1]+y[i-1]*y[i-1]);
        sum+=s(xx, yy, tt);
    }
    
        xx = sqrt((x[n]-x[1])*(x[n]-x[1])+(y[n]-y[1])*(y[n]-y[1]));
        yy = sqrt(x[n]*x[n]+y[n]*y[n]);
        tt = sqrt(x[1]*x[1]+y[1]*y[1]);
        sum+=s(xx, yy, tt);
    cout << fixed;
    cout << setprecision(7) << sum << endl;
    return 0;
}

