#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, t, a = 90;
	char c;
	double x = 0.0, y = 0.0;
	while (cin >> n >> c >> t, n || t)
	{
		x += n * cos((double)a*3.14159265/180);
		y += n * sin((double)a*3.14159265/180);
		a -= t;
	}
	cout << (int)x << endl << (int)y << endl;
}