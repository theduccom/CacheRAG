#include<iostream>
#include<complex>
#include<cmath>
#include<stdio.h>
using namespace std;
typedef complex<double> xy_t;
xy_t P[110];
int main(){
    int N;
    double x,y;
    while(scanf("%lf,%lf",&x,&y)!=EOF){
        P[N++]=xy_t(x,y);
    }
    double sum=0.0;
    for(int i=0;i<N-2;++i){
        xy_t a=P[0],b=P[i+1],c=P[i+2];
        double d1=abs(b-a),d2=abs(c-b),d3=abs(a-c);
        double z=(d1+d2+d3)/2.0;
        sum+=sqrt(z*(z-d1)*(z-d2)*(z-d3));
    }
    printf("%.6f\n",abs(sum));
}