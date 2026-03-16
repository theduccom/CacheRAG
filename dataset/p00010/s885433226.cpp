#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	int n;
	scanf("%d", &n);
	rep(i, n){
		double x1, y1, x2, y2, x3, y3;
		scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
		double a1 = 2.0*(x2-x1);
		double b1 = 2.0*(y2-y1);
		double c1 = x1*x1 - x2*x2 + y1*y1 - y2*y2;
		double a2 = 2.0*(x3-x1);
		double b2 = 2.0*(y3-y1);
		double c2 = x1*x1 - x3*x3 + y1*y1 - y3*y3;

		double px = (b1*c2-b2*c1)/(a1*b2-a2*b1);
		double py = (c1*a2-c2*a1)/(a1*b2-a2*b1);
		printf("%.3f %.3f %.3f\n", px, py, sqrt((px-x1)*(px-x1) + (py-y1)*(py-y1)));
	}

	return 0;
}