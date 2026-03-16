#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	double x,h;
	while(scanf("%lf %lf",&x,&h), x||h)
	{
		printf("%.6lf\n",x*x + 2*(x*sqrt(h*h+x*x/4.0)));
	}
}