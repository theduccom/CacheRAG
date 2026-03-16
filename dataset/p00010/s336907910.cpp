#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		double x[3], y[3];
		for (int j = 0; j < 3; ++j)
			scanf("%lf %lf", x+j, y+j);
		
		double a[2], b[2];
		for (int j = 0, c = 0; j < 3 && c < 2; ++j)
		{
			for (int k = j+1; k < 3 && c < 2; ++k)
			{
				if (y[j] == y[k])
					continue;

				a[c] = -(x[k]-x[j])/(y[k]-y[j]);
				b[c] = (y[k]+y[j] - (x[k]+x[j])*a[c])/2;
				++c;
			}
		}
		double px = (b[0]-b[1])/(a[1]-a[0]);
		double py = a[0] * px + b[0];
		double r = sqrt((px-x[0])*(px-x[0])+(py-y[0])*(py-y[0]));
		printf("%.3f %.3f %.3f\n", px, py, r);
	}

	return 0;
}