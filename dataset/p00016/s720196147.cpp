#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

void solve()
{
	double x = 0;
	double y = 0;
	int a, b;
	double angle = 90;
	while(scanf("%d,%d", &a, &b))
	{
		if(a == 0 && b == 0)
		{
			break;
		}
		x += a * cos(angle / 180 * M_PI);
		y += a * sin(angle / 180 * M_PI);
		angle -= b;
	}
	cout << (int)x << endl;
	cout << (int)y << endl;
}

int main()
{
	solve();
	return(0);
}