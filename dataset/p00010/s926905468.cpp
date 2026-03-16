#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(void){
	int n;
	cin >> n;
	double x1,x2,x3,y1,y2,y3;
	for(int i = 0 ; i < n ; i ++){
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		double a = x2 * x2 - x1 * x1 + y2 * y2 - y1 * y1;
		double b = x3 * x3 - x1 * x1 + y3 * y3 - y1 * y1;
		double c = 4 * (x2 - x1) * (y3 - y1) - 4 * (x3 - x1) * (y2 - y1);
		
		double x = (2 * (y3 - y1) * a - 2 * (y2 - y1) * b ) / c;
		double y = (-2 * (x3 - x1) * a + 2 * (x2 - x1) * b ) / c;
		double r = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
		
		printf("%.3lf %.3lf %.3lf\n",x,y,r);
		
	} 
	return 0;
}