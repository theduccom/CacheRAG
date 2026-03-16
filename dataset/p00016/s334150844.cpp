#include <bits/stdc++.h>
using namespace std;

int main()
{
	int l, a, sum_angle = 90;
	double x, y;

	x = y = 0.0;

	while (scanf("%d,%d", &l, &a), l || a){
		x += l * cos(M_PI * sum_angle / 180);
		y += l * sin(M_PI * sum_angle / 180);

		sum_angle = (sum_angle - a) % 360;
	}

	cout << (int)x << endl << (int)y << endl;

	return (0);
}