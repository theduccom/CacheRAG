#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int x, h;
	while (scanf("%d%d", &x, &h))
	{
		if (x == 0.0 && h == 0.0) break;
		printf("%.6f\n", (4.0*(sqrt(double(h*h)+double(x*x)/4.0)*x))/2.0+x*x);
	}
}