#include <cstdio>
#include <cmath>
int main()
{
	int x, h;
	while (scanf("%d%d", &x, &h), x && h)
		printf("%.6f\n", (4.0*(sqrt(double(h*h)+double(x*x)/4.0)*x))/2.0+x*x);
}