#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
	int n;
	double x[3], y[3], a1, b1, c1, a2, b2, c2, px, py, r;

	cin >> n;

	for(int i=0; i<n; i++)
	{
		cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];

		a1 = 2 * (x[1]-x[0]);
		b1 = 2 * (y[1]-y[0]);
		c1 = (x[0]*x[0]) - (x[1]*x[1]) + (y[0]*y[0]) - (y[1]*y[1]);
		a2 = 2 * (x[2]-x[0]);
		b2 = 2 * (y[2]-y[0]);
		c2 = (x[0]*x[0]) - (x[2]*x[2]) + (y[0]*y[0]) - (y[2]*y[2]);
		px = (b1*c2 - b2*c1)/(a1*b2 - a2*b1);
		py = (c1*a2 - c2*a1)/(a1*b2 - a2*b1);
		r  = sqrt((px-x[0])*(px-x[0]) + (py-y[0])*(py-y[0]));

		printf("%.3f %.3f %.3f\n", px, py, r);
	}

	return 0;
}