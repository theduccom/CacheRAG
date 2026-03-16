#include <cmath>
#include <iostream>

using namespace std;

double Length(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double Triangle_Area(double a, double b, double c)
{
	double z = (a + b + c) / 2.0;

	return sqrt(z * (z - a) * (z - b) * (z - c));
}

int main()
{
	double x[20], y[20], a, b, c, S = 0.0; int C = 0; char ch;

	while (cin >> x[C] >> ch >> y[C])
	{
		C++;
	}

	for (int i = 1; i < (C - 1); i++)
	{
		a = Length(x[0]    , y[0]    , x[i]    , y[i]    );
		b = Length(x[i]    , y[i]    , x[i + 1], y[i + 1]);
		c = Length(x[i + 1], y[i + 1], x[0]    , y[0]    );

		S += Triangle_Area(a, b, c);
	}

	cout << S << endl;

	return 0;
}