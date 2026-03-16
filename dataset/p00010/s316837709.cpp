#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

double jijo(double a){
	return a*a;
}
int main(){
	int n;
	double x1, y1, x2, y2, x3, y3;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
		double a1, a2, b1, b2;
		if(y1==y2){y1+=0.0000001;}
		a1 = (x2-x1)/(y1-y2);
		b1 = (y1+y2)/2.0 - a1*(x1+x2)/2.0;
		if(y1==y3){y1+=0.0000001;}
		a2 = (x3-x1)/(y1-y3);
		b2 = (y1+y3)/2.0 - a2*(x1+x3)/2.0;
		double x, y, d;
		x = (b2-b1)/(a1-a2);
		y = a1*x + b1;
		d = sqrt(jijo(x1-x) + jijo(y1-y));
		printf("%.3lf %.3lf %.3lf\n", x, y, d);
	}
	return 0;
}