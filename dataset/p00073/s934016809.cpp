#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void solve()
{
	int x, h;
	while(cin >> x >> h)
	{
		if(x == 0 && h == 0)
		{
			break;
		}
		double surfaceArea = x * x;
		surfaceArea += 2 * (sqrt((x / 2.0) * (x / 2.0) + h * h) * x);
		printf("%.6f\n", surfaceArea);
	}
}

int main()
{
	solve();
	return(0);
}