#include <iostream>
 #include <complex>
 #include <stdio.h>
 #include<cmath>
 using namespace std;
 typedef complex<double>xy_t;
 xy_t P[110];

 double cross_product(xy_t a, xy_t b) //??????
 { return (conj(a) * b).imag(); }

int main(){
    int n=0;
    double x,y,sum=0.0;
    while(scanf("%lf,%lf",&x,&y)!=EOF)
        {
            P[n++]=xy_t(x,y);
        }
    for(int i=0;i+2<n;i++)
        {
            xy_t a=P[0],b=P[i+1],c=P[i+2];
            sum+=cross_product(b-a,c-a);
        }
        cout<<sum/2<<endl;
 }