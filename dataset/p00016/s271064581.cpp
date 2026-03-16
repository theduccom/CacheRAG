#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
	double x = 0, y = 0;
	int d = 90;
	int a, b;

	while (true)
	{
		scanf("%d,%d", &a, &b);
		if (a + b == 0) break;
		x += a * cos(d * 3.14159 / 180);
		y += a * sin(d * 3.14159 / 180);
		d -= b;
	}
	printf("%d\n", (int)x);
	printf("%d\n", (int)y);

	return 0;
}