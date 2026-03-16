#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
	double v = 0;
	double n = 0;
	double k = 0;
	double a, b;

	while (scanf("%lf,%lf", &a, &b) != -1)
	{
		v += a * b;
		n += b;
		k++;
	}
	printf("%d\n%d\n", (int)round(v), (int)round(n / k));

	return 0;
}