#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long double x[25],y[25],a,b,c,s,S = 0.0;
    int n = 0;
    while(scanf("%Lf,%Lf",&x[n],&y[n]) != EOF) n++;
    for(int i=1;i<n-1;i++){
        a = sqrt(((x[i]-x[0])*(x[i]-x[0])) + ((y[i]-y[0])*(y[i]-y[0])));
        b = sqrt(((x[i+1]-x[i])*(x[i+1]-x[i])) + ((y[i+1]-y[i])*(y[i+1]-y[i])));
        c = sqrt(((x[0]-x[i+1])*(x[0]-x[i+1])) + ((y[0]-y[i+1])*(y[0]-y[i+1])));
        s = (a + b + c) / 2;
        S += sqrt(s*((s-a)*(s-b)*(s-c)));
    }
    printf("%Lf\n",S);
}