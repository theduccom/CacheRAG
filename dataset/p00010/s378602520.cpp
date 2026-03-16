#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	
	for (int i  = 0; i < n; i++){
		double x[3], y[3], s[3];
		double l, m, n;
		
		for (int j = 0; j < 3; j++){
			scanf("%lf %lf", &x[j], &y[j]);
			s[j] = x[j] * x[j] + y[j] * y[j];
		}
		
		double x2[2], y2[2], s2[2];
		x2[0] = x[0] - x[1];
		y2[0] = y[0] - y[1];
		s2[0] = s[0] - s[1];
		x2[1] = x[0] - x[2];
		y2[1] = y[0] - y[2];
		s2[1] = s[0] - s[2];
		
		m = - (s2[0] * x2[1] - s2[1] * x2[0]) / (y2[0] * x2[1] - y2[1] * x2[0]);
		l = - (s2[0] * y2[1] - s2[1] * y2[0]) / (x2[0] * y2[1] - x2[1] * y2[0]);
		n = - s[0] - x[0] * l - y[0] * m;
		
		double a,b,r;
		
		a = l / -2;
		b = m / -2;
		r = sqrt(- n - a * a - b * b - l * a - m * b);
		
		printf("%.3lf %.3lf %.3lf\n", a, b, r);
		
		}
	return(0);
}