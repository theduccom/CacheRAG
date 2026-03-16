#include<complex>
#include<cstdio>
#include<cmath>
using namespace std;
typedef complex<double> P;
#define F(a,b,c) (acos((b*b+c*c-a*a)/(2*b*c)))
int main(){
	int n;
	double d,e,f,g,h,i;
	for(scanf("%d",&n);n--;){
		scanf("%lf%lf%lf%lf%lf%lf",&d,&g,&e,&h,&f,&i);
		P a(d,g),b(e,h),c(f,i);
		double A=abs(b-c),B=abs(c-a),C=abs(a-b),
		s=sin(2*F(A,B,C)),t=sin(2*F(B,C,A)),u=sin(2*F(C,A,B)),v=s+t+u;
		printf("%.3f %.3f %.3f\n",(d*s+e*t+f*u)/v,(g*s+h*t+i*u)/v,A/sin(F(A,B,C))/2);
	}
}