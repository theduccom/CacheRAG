#include <iostream>
using namespace std;

double v;
const double g = 9.8;
const double c_y = 4.9;
const int c_n = 5;
const double err = 0.0001;

double t(double v)
{
	return v / g;
}

double y(double t)
{
	return c_y * t * t;
}

int n(double y)
{
	double r = (y + c_n) / c_n;
	int r2 = (int)r;
	//if (r - r2 < err && r - r2 > -err)
	//	return r2;
	//else
		return r2 + 1;
}

int main()
{
	while (cin >> v)
	{
		cout << n(y(t(v))) << endl;
	}
	return 0;
}