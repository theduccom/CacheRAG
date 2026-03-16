#include<complex>
#include<cstdio>
#include<cmath>
using namespace std;
typedef complex<double> P;
double F(double a,double b,double c){
	return acos((b*b+c*c-a*a)/(2*b*c));
}
int main(){
	int n;
	double d,e,f,g,h,i,x,y,r;
	scanf("%d",&n);
	for(;n--;){
		scanf("%lf%lf%lf%lf%lf%lf",&d,&g,&e,&h,&f,&i);
		P a(d,g),b(e,h),c(f,i);
		double A=abs(b-c),B=abs(c-a),C=abs(a-b),s=F(A,B,C),t=F(B,C,A),u=F(C,A,B);
		r = A/sin(s)/2.;
		x = ( d*sin(2*s) + e*sin(2*t) + f*sin(2*u) ) /
			( sin(2*s) + sin(2*t) + sin(2*u) );
		y = ( g*sin(2*s) + h*sin(2*t) + i*sin(2*u) ) /
			( sin(2*s) + sin(2*t) + sin(2*u) );
		printf("%.3f %.3f %.3f\n",x,y,r);
	}
}