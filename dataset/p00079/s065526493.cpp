#include<iostream>
#include<cmath>
#include<cstdio>
#include<math.h>
#include<complex>
using namespace std;
typedef complex<double> xy_t;
xy_t P[110];
int main()
{
    double a,b,c,z,S;
    int N=0;
    double x,y;
    while(scanf("%lf,%lf",&x,&y)!=EOF)
    {
        P[N++]=xy_t(x,y);
    }
    double sum=0.0;
    for (int i=0;i<N-2;i++)
    {
        xy_t m=P[0],n=P[i+1],k=P[i+2];
        a=sqrt((m.real()-n.real())*(m.real()-n.real())+(m.imag()-n.imag())*(m.imag()-n.imag()));
        b=sqrt((m.real()-k.real())*(m.real()-k.real())+(m.imag()-k.imag())*(m.imag()-k.imag()));
        c=sqrt((k.real()-n.real())*(k.real()-n.real())+(k.imag()-n.imag())*(k.imag()-n.imag()));
        z=(a+b+c)/2.0;
        S=sqrt(z*(z-a)*(z-b)*(z-c));
        sum+=S;
    }
    printf("%.6f\n",abs(sum));
    return 0;
}
