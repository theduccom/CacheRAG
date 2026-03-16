#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
	int n;
	double X, Y, R;
	double x[3];
	double y[3];

	cin >> n;

	while (n--)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> x[i] >> y[i];
		}

		double a = 2 * (x[1] - x[0]);
		double b = 2 * (y[1] - y[0]);
		double c = pow(x[0], 2) - pow(x[1], 2) + pow(y[0], 2) - pow(y[1], 2);
		double d = 2 * (x[2] - x[0]);
		double e = 2 * (y[2] - y[0]);
		double f = pow(x[0], 2) - pow(x[2], 2) + pow(y[0], 2) - pow(y[2], 2);

		X = (b*f - e*c) / (a*e - d*b);
		Y = (c*d - f*a) / (a*e - d*b);
		R = sqrt(pow(X - x[0], 2) + pow(Y - y[0], 2));

		printf("%.3lf %.3lf %.3lf\n", X, Y, R);
	}

	return 0;
}