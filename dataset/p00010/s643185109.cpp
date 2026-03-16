#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int k;
	double x[3],y[3],a,b,c,d,e,f,l,m,n;
    cin>>k;
	while(k-->0){
        cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2];
        a=2*(x[1]-x[0]);
        b=2*(y[1]-y[0]);
        c=(x[1]*x[1])+(y[1]*y[1])-(x[0]*x[0])-(y[0]* y[0]);
        d=2*(x[2]- x[0]);
        e=2*(y[2]- y[0]);
        f=(x[2]*x[2])+(y[2]*y[2])-(x[0]*x[0])-(y[0]*y[0]);
        l=(c*e-f*b)/(a*e-d*b);
        m=(c*d-f*a)/(b*d-e*a);
        n=sqrt((l-x[0])*(l-x[0])+(m-y[0])*(m-y[0]));
        printf("%.3f %.3f %.3f\n",l,m,n);
    }
    return 0;
}