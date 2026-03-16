#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
	int n;
	double x1,y1,x2,y2,x3,y3,xp,yp,r;
	double a,b,c,d,e,f,L,M,N;
	
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		
		a=x1-x2;
		b=y1-y2;
		c=-1*(x1*x1+y1*y1)+(x2*x2+y2*y2);
		d=x1-x3;
		e=y1-y3;
		f=-1*(x1*x1+y1*y1)+(x3*x3+y3*y3);
		
		if (a==0) {
			M=c/b;
			L=(f-e*M)/d;
		}
		else{
		M=(c*d-a*f)/(b*d-a*e);//
		L=(c-b*M)/a;
		}
		N=-L*x1-M*y1-x1*x1-y1*y1;
		
		xp=-1*(L/2);
		yp=-1*(M/2);
		r=sqrt(-1*N+(L*L)/4+(M*M)/4);
			
		printf("%.3f %.3f %.3f\n",xp,yp,r);
	}
	
	return 0;	
}