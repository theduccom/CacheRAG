#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int len, angle;
	int sum_ang = 90; // start
	double x = 0.0, y = 0.0;

	// ang(+) -> right 
	while (scanf("%d,%d", &len, &angle), len != 0 || angle != 0){
		x += len * cos(M_PI * sum_ang / 180.0);
		y += len * sin(M_PI * sum_ang / 180.0);

		sum_ang = (sum_ang - angle + 360) % 360;
	}

	printf("%d\n", (int)x);
	printf("%d\n", (int)y);

	return (0);
}