#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		double x[3], y[3], s[3];
		double l, m, n;
		
		for (int j = 0; j < 3; j++){
			scanf("%lf %lf", &x[j], &y[j]);
			s[j] = x[j] * x[j] + y[j] * y[j];
		}
		
		double __x[2], __y[2], __s[2];
		__x[0] = x[0] - x[1];
		__y[0] = y[0] - y[1];
		__s[0] = s[0] - s[1];
		__x[1] = x[0] - x[2];
		__y[1] = y[0] - y[2];
		__s[1] = s[0] - s[2];
		
		m = - (__s[0] * __x[1] - __s[1] * __x[0]) / 
		    (__y[0] * __x[1] - __y[1] * __x[0]);
		l = - (__s[0] * __y[1] - __s[1] * __y[0]) / 
		    (__x[0] * __y[1] - __x[1] * __y[0]);
		n = - s[0] - x[0] * l - y[0] * m;
		
//		printf("x^2 + y^2 + %lfx + %lfy + %lf = 0\n", l, m, n);
		
		double a, b, r;
		a = l / -2;
		b = m / -2;
		r = sqrt(- n - a * a - b * b - l * a - m * b);
		
//		printf("(x - %lf)^2 * (y - %lf)^2 = %lf^2\n", a, b, r);
		
		printf("%.3lf %.3lf %.3lf\n", a, b, r);
	}
	
	return 0;
}