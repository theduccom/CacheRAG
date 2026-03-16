#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
int main(){
	double x1, x2, x3, y1, y2, y3;
	int n;
	cin >> n;
	rep(i, n){
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		double a = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
		double b = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
		double c = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		double A = a*a;
		double B = b*b;
		double C = c*c;
		
		double px= (A*(B+C-A)*x1+B*(C+A-B)*x2+C*(A+B-C)*x3)/(A*(B+C-A)+B*(C+A-B)+C*(A+B-C));
		double py= (A*(B+C-A)*y1+B*(C+A-B)*y2+C*(A+B-C)*y3)/(A*(B+C-A)+B*(C+A-B)+C*(A+B-C));
		double r= a*b*c/sqrt((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c));
		printf("%.3lf %.3lf %.3lf\n", px, py, r);
	}
	return 0;
}