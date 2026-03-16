#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

#define X real()
#define Y imag()

typedef complex<double> P;
class C:public P{
	public:
	double r;
	C(double x,double y,double r):P(x,y),r(r){}
};

template<class T> T sq(T x){return x*x;}
double dot(P a, P b){return a.X*b.X + a.Y*b.Y;}

P solve_eq2(double a,double b,double c,double d,double e,double f){
	double A = a*e-b*d;
	return P((c*e-b*f)/A, (a*f-c*d)/A);
}

C C_PPP(P a,P b,P c){
	P d = b-a;
	P e = c-a;
	
	double z1 = -dot(a,a);
	double z2 = -dot(b,b);
	double z3 = -dot(c,c);
	
	P f = solve_eq2(d.X, d.Y, z2-z1, e.X, e.Y, z3-z1);
	double u = z1-dot(a,f);
	
	return C(-f.X/2, -f.Y/2, sqrt(dot(f,f)/4-u));
}

int main(){
	
	int n;
	cin>>n;
	
	rep(i,n){
		double xa,ya,xb,yb,xc,yc;
		cin>>xa>>ya>>xb>>yb>>xc>>yc;
		
		C circle = C_PPP(P(xa,ya),P(xb,yb),P(xc,yc));
		
		printf("%.3lf %.3lf %.3lf\n",circle.X,circle.Y,circle.r);
	}
}