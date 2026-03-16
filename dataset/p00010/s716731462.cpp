#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	double x[3], y[3], xp, yp, r;
	int n;
	scanf("%d", &n );
	for( int i=0; i<n; i++ ){
		scanf("%lf %lf %lf %lf %lf %lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2]);
		double A1 = 2.0 * (x[1]-x[0]);
		double B1 = 2.0 * (y[1]-y[0]);
		double C1 = x[0]*x[0] - x[1]*x[1] + y[0]*y[0] - y[1]*y[1];
		double A2 = 2.0 * (x[2]-x[0]);
		double B2 = 2.0 * (y[2]-y[0]);
		double C2 = x[0]*x[0] - x[2]*x[2] + y[0]*y[0] - y[2]*y[2];
		xp = (B1*C2-B2*C1)/(A1*B2-A2*B1);
		yp = (C1*A2-C2*A1)/(A1*B2-A2*B1);
		r = sqrt( (xp-x[0])*(xp-x[0])+(yp-y[0])*(yp-y[0]) );
		printf("%.3f %.3f %.3f\n", xp, yp, r);
	}
	return 0;
}