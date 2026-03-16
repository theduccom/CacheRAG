#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <list>
#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;


double calc_distance(double x1, double y1, double x2, double y2)
{
	double dx = x1 - x2;
	double dy = y1 - y2;
	return sqrt(dx*dx + dy*dy);
}
double calc_area(double x[3], double y[3])
{
	double e[3];
	for (int i = 0; i < 3; ++i)
		e[i] = calc_distance(x[i], y[i], x[(i+1)%3], y[(i+1)%3]);
	double z = (e[0]+e[1]+e[2]) / 2;
	return sqrt(z*(z-e[0])*(z-e[1])*(z-e[2]));
}

int main()
{
	double x[20];
	double y[20];
	int n;
	for (n = 0; scanf("%lf,%lf", x+n, y+n) != EOF; ++n)
		;

	double area = 0;
	for (int i = 1; i < n-1; ++i)
	{
		double xx[3] = { x[0], x[i], x[i+1] };
		double yy[3] = { y[0], y[i], y[i+1] };
		area += calc_area(xx, yy);
	}
	printf("%.6f\n", area);

	return 0;
}