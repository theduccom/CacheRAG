#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>


const double PI = 4.0 * atan(1.0);
double ToRadian(double degree)
{
	return degree * PI/180;
}

using namespace std;


int main()
{
	int d, t;
	double x, y;
	x = y = 0;
	int totalAngle = 90;
	while (true)
	{
		scanf("%d,%d", &d, &t);
		if (d == 0 && t ==0)
			break;

		double ang = ToRadian(totalAngle);
		x += d * cos(ang);
		y += d * sin(ang);
		totalAngle -= t;
	}
	printf("%d\n%d\n", (int)x, (int)y);
	return 0;
}