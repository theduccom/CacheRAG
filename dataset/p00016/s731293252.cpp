#include <iostream>
#include <cmath>
#define d2r(x) ((x)*3.14159265/180)
using namespace std;
int main()
{
	int n, t, a = 90;
	char c;
	double x = 0.0, y = 0.0;
	while (cin >> n >> c >> t, n || t)
	{
		x += n * cos(d2r((double)a));
		y += n * sin(d2r((double)a));
		a -= t;
	}
	cout << (int)x << endl << (int)y << endl;
}