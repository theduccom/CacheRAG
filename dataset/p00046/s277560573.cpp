#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double h, max = 0.0, min = 9999999.0;
	while (cin >> h)
	{
		if (cin.eof()) break;
		if (h > max) max = h;
		if (h < min) min = h;
	}
	printf("%.1lf\n", max - min);
	return 0;
}