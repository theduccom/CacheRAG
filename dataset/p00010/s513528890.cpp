#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int n; cin >>n;
	int i;
	for(i=0;i<n;i++){
		double x1,y1,x2,y2,x3,y3;
		cin >>x1>>y1>>x2>>y2>>x3>>y3;
		
		double a1 = 2*(x2-x1);
		double b1 = 2*(y2-y1);
		double c1 = x1*x1-x2*x2+y1*y1-y2*y2;
		double a2 = 2*(x3-x1);
		double b2 = 2*(y3-y1);
		double c2 = x1*x1-x3*x3+y1*y1-y3*y3;
		
		double x = (b1*c2-b2*c1)/(a1*b2-a2*b1);
		double y = (c1*a2-c2*a1)/(a1*b2-a2*b1);
		double r = sqrt( (x-x1)*(x-x1)+(y-y1)*(y-y1) );
		
		// 小数点第４位を四捨五入
		x = floor(1000*x + 0.5)/1000;
		y = floor(1000*y + 0.5)/1000;
		r = floor(1000*r + 0.5)/1000;
		
		printf("%.3lf %.3lf %.3lf\n", x,y,r);
	}
	return 0;
}