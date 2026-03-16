#include<complex>
#include<stdio.h>
#define F(a,b,c) acos((b*b+c*c-a*a)/2/b/c)
int main(){int n;float d,e,f,g,h,i;for(scanf("%d",&n);n--;){scanf("%f%f%f%f%f%f",&d,&g,&e,&h,&f,&i);std::complex<float> a(d,g),b(e,h),c(f,i);float A=abs(b-c),B=abs(c-a),C=abs(a-b),L=F(A,B,C),s=sin(2*L),t=sin(2*F(B,C,A)),u=sin(2*F(C,A,B)),v=s+t+u;printf("%.3f %.3f %.3f\n",(d*s+e*t+f*u)/v,(g*s+h*t+i*u)/v,A/sin(L)/2);}}