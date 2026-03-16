#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

struct Circle
{
	double x, y;
	double r;
};

int hit(Circle c0, Circle c1)
{
	double x = (c1.x - c0.x);
	double y = (c1.y - c0.y);

	double d = sqrt(x * x + y * y);
	if (d <= c0.r + c1.r)
	{
		if (c0.r + d < c1.r)
		{
			return -2;
		}
		else if (c1.r + d < c0.r)
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n;
	for (cin >> n; n--;)
	{
		Circle c0, c1;
		cin >> c0.x >> c0.y >> c0.r;
		cin >> c1.x >> c1.y >> c1.r;

		cout << hit(c0, c1) << endl;
	}
}
