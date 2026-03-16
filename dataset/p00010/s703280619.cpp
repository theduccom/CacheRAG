#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int n;
	double x1, y1, x2, y2, x3, y3;
	double xp, yp, r;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
		
		xp = (((x2*x2+y2*y2)-(x3*x3+y3*y3))*(y2-y1)-((x1*x1+y1*y1)-(x2*x2+y2*y2))*(y3-y2)) / (2*((x2-x1)*(y3-y2)-(x3-x2)*(y2-y1)));
		yp = (((y2*y2+x2*x2)-(y3*y3+x3*x3))*(x2-x1)-((y1*y1+x1*x1)-(y2*y2+x2*x2))*(x3-x2)) / (2*((y2-y1)*(x3-x2)-(y3-y2)*(x2-x1)));
		r = sqrt((x1-xp)*(x1-xp) + (y1-yp)*(y1-yp));
		
		printf("%.3lf %.3lf %.3lf\n", xp, yp, r);
	}
	
	return 0;
}