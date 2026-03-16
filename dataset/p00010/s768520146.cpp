#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n;cin>>n;
	double x1,x2,x3,y1,y2,y3,x12,x13,y12,y13,xx12,yy12,xx13,yy13,x,y,r;
	for(int i=0;i<n;i++)
	{
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		
		x12=x1-x2;
		x13=x1-x3;
		y12=y1-y2;
		y13=y1-y3;
		xx12=x1*x1-x2*x2;
		xx13=x1*x1-x3*x3;
		yy12=y1*y1-y2*y2;
		yy13=y1*y1-y3*y3;
		
		x=-0.5*(y12*(xx13+yy13)-y13*(xx12+yy12))/(x12*y13-x13*y12);
		y=-0.5*(x12*(xx13+yy13)-x13*(xx12+yy12))/(y12*x13-y13*x12);
		r=sqrt(x*x+y*y+x1*x1+y1*y1-2*x*x1-2*y*y1);
		
		printf("%.3lf %.3lf %.3lf\n",x,y,r);
		
	}
	return 0;
}