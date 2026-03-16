#include <stdio.h>
#include <math.h>

double Dis(double x1, double y1, double x2, double y2);

int main(void){
	double xs, ys;
	double x, y;
	double xb, yb;
	double dis1 = -1;
	double dis2 = -1;
	double dis3 = -1;
	double ans = 0;

	scanf("%lf,%lf", &xs, &ys);
	int i = 0;
	while(scanf("%lf,%lf", &x, &y) != EOF){
		if(i == 0){
			dis1 = Dis(x, y, xs, ys);
			xb = x;
			yb = y;
			i++;
			continue;
		}
		dis2 = Dis(x, y, xs, ys);
		dis3 = Dis(x, y, xb, yb);
		double z = (dis1 + dis2 + dis3) / 2.0;
		double s = sqrt(z*(z-dis1)*(z-dis2)*(z-dis3));
		ans += s;
		dis1 = dis2;
		xb = x;
		yb = y;
	}

	printf("%.7f\n", ans);

	return 0;
}

double Dis(double x1, double y1, double x2, double y2){
	return sqrt((y2-y1)*(y2-y1) + (x2-x1)*(x2-x1));
}