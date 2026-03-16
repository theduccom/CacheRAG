#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

void solve()
{
	int step, delta_theta;
	double x = 0;
	double y = 0;
	int theta = 90;
	while(scanf("%d,%d", &step, &delta_theta))
	{
		if(!step && !delta_theta)
		{
			break;
		}
		x += step * cos(theta * M_PI / 180);
		y += step * sin(theta * M_PI / 180);
		theta -= delta_theta;
	}
	cout << (int)x << endl;
	cout << (int)y << endl;
}

int main()
{
	solve();
	return(0);
}