#include <iostream>
#include <cmath>

using namespace std;

void solve()
{
	int x, h;
	while(cin >> x >> h, x, h)
	{
		double height = sqrt((double)x / 2 * x / 2 + h * h);
		double sum = 0;
		sum += x * x;
		sum += x * height * 2;
		printf("%.6f\n", sum);
	}
}

int main()
{
	solve();
	return(0);
}