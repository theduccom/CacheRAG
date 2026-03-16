#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--){
		double x1,x2,x3,y1,y2,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
	 	double a,b,c;
	 	a=pow((x2-x3),2)+pow((y2-y3),2);
	 	b=pow((x3-x1),2)+pow((y3-y1),2);
	 	c=pow((x1-x2),2)+pow((y1-y2),2);
	 	double ox,oy;
	 	ox=(a*(b+c-a)*x1+b*(c-b+a)*x2+c*(a+b-c)*x3)/(2*(a*b+b*c+c*a)-(a*a+b*b+c*c));
	 	oy=(a*(b+c-a)*y1+b*(c-b+a)*y2+c*(a+b-c)*y3)/(2*(a*b+b*c+c*a)-(a*a+b*b+c*c));
	 	double r;
	 	r=hypot((ox-x1),(oy-y1));
		printf("%.3lf %.3lf %.3lf\n",ox,oy,r);
	}
	return 0;
}