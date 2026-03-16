#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	double x, h;
	while (cin >> x >> h)
	{
		if (x == 0.0 && h == 0.0) break;
		printf("%.6f\n", (x*x + 4.0*(x*sqrt(h*h+(x*x)/4.0))/2.0));
	}
}