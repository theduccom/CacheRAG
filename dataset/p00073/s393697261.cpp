#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(void)
{
    double x,h,A1,A2,x1;
    while(1){
        cin>>x>>h;
        if(x==0&&h==0)break;
        A1=x*x;
        x1=x/2;
        A2=(x1*x1)+(h*h);
        A2=sqrt(A2);
        A2*=x;
        A2*=2;
        printf("%lf\n",A1+A2);
    }
}