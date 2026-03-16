#include <iostream>
#include<cmath>
#include<iomanip>
#include<stdio.h>
using namespace std;

const double pi = 3.1415926535897932385;

int main()
{
	int direction = 0, distance = 0;
	double x = 0, y = 0, a = 0;
	while (scanf("%d,%d", &distance, &direction)!=EOF)
	{
		if (direction == distance && direction == 0)
		{
			cout << (int)y << '\n' << (int)x << endl;
			x = y = a = 0;
		}
		else
		{
			x += (distance*cos(a));
			y += (distance*sin(a));
			a += (double)direction / 180 * pi;
		}
	}
	return 0;
}
