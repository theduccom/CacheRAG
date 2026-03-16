#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <iostream>


using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		double x[2], y[2], r[2];
		for (int j = 0; j < 2; ++j)
			scanf("%lf %lf %lf", x+j, y+j, r+j);
		double d = sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]));
		if (d > r[0]+r[1])
			puts("0");
		else if (r[0]-d > r[1])
			puts("2");
		else if (r[1]-d > r[0])
			puts("-2");
		else
			puts("1");
	}

	return 0;
}