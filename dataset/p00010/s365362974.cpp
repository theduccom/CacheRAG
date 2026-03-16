#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	double a,b,c,d,e,f,x,y,A,B,C,s,r;
	int n;
	cin >> n ;
	for(int i=0;i<n;i++){
		cin >> a >> b >> c >> d >> e >> f;
		C = (a-c)*(a-c)+(b-d)*(b-d);
		A = (c-e)*(c-e)+(d-f)*(d-f);
		B = (e-a)*(e-a)+(f-b)*(f-b);
		s = 2*(A*B+B*C+C*A)-(A*A+B*B+C*C);
		x = (A*(B+C-A)*a+B*(C+A-B)*c+C*(A+B-C)*e)/s;
		y = (A*(B+C-A)*b+B*(C+A-B)*d+C*(A+B-C)*f)/s;
		A = sqrt(A);
		B = sqrt(B);
		C = sqrt(C);
		r = A*B*C/sqrt((A+B+C)*(B+C-A)*(A-B+C)*(A+B-C));
		printf("%.3lf %.3lf %.3lf\n",x,y,r);
	}
	return 0;
}