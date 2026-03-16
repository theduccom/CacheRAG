#include<complex>
#include<cstdio>
#include<cmath>
using namespace std;
typedef complex<double> P;
class Tr{
	P a,b,c;double A,B,C;double x,y,z;
	double F(double a,double b, double c){
		return acos((b*b+c*c-a*a)/(2*b*c));
	}
public:
	Tr(P p1, P p2, P p3){
		a=p1;b=p2;c=p3;B=abs(c-a);A=abs(b-c);C=abs(a-b);x=F(A,B,C);y=F(B,C,A);z=F(C,A,B);
	}
	double R(){
		return A/sin(x)/2.;
	}
	double X(){
		double A=sin(2*x),B=sin(2*y),C=sin(2*z);
		return(a.real()*A+b.real()*B+c.real()*C)/(A+B+C);
	}
	double Y(){
		double A=sin(2*x),B=sin(2*y),C=sin(2*z);
		return(a.imag()*A+b.imag()*B+c.imag()*C)/(A+B+C);
	}
};
int main(){
	int n,i;
	double x1,x2,x3,y1,y2,y3;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
		P a(x1,y1),b(x2,y2),c(x3,y3);
		Tr T(a,b,c);
		printf("%.3f %.3f %.3f\n",T.X(),T.Y(),T.R());
	}
}