#include<complex>
#include<cmath>
#include<iostream>
#include<cstdio>
using namespace std;
typedef complex<double> xy_t;
xy_t P[110];
double z;
int n=0;
double x,y;
double sum=0.0;
double menseki(xy_t a,xy_t b, xy_t c){
    return a.real()*(b.imag()-c.imag())+b.real()*(c.imag()-a.imag())+c.real()*(a.imag()-b.imag());
}
int main(){
    while (scanf("%lf,%lf", &x, &y) != EOF) {
        P[n++]=xy_t(x,y);
    }
    for(int i=0;i+2<n;i++){
        xy_t a=P[0],b=P[i+1],c=P[i+2];
        sum+=menseki(a,b,c)/2;
    }
    printf("%.6f\n",abs(sum));
    return 0;
}


