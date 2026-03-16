#include <complex>
#include <cmath>
#include <stdio.h>
using namespace std;
typedef complex<double> xy_t;
xy_t p[110];
double cross_product(xy_t a,xy_t b)
{
    return (conj(a)*b).imag();
}
int main()
{
    int N=0;
    double x,y;
    while(scanf("%lf,%lf",&x,&y)!=EOF)
    {
        p[N++]=xy_t(x,y);
    }
    
    double sum=0.0;
    for(int i=0;i+2<N;i++)
    {
        xy_t a=p[0],b=p[i+1],c=p[i+2];
        sum+=cross_product(b-a,c-a)/2.0;
    }
    
    printf("%.6f\n",abs(sum));
}