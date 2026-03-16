#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		double x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		double a1, b1, c1, a2, b2, c2;
		a1 = 2 * (x2 - x1);
		b1 = 2 * (y2 - y1);
		c1 = x1 * x1 - x2 * x2 + y1 * y1 - y2 * y2;
		a2 = 2 * (x3 - x1);
		b2 = 2 * (y3 - y1);
		c2 = x1 * x1 - x3 * x3 + y1 * y1 - y3 * y3;
		double x, y, r;
		x = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
		y = (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1);
		r = sqrt((x1 - x)*(x1 - x) + (y1 - y)*(y1 - y));
		cout << fixed << std::setprecision(3) << x << " " << y << " " << r << "\n";
	}

	return 0;
}