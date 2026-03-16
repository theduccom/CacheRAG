#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <iomanip>
#include <vector>
#include <queue>
#include <set>

#define PI 3.14159265359

#define INF 99999999;

#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)

typedef long long ll;

using namespace std;



/*
class TheKingsArmyDiv2
{
public:
	int getNumber(vector <string> state)
	{

	}
};
*/




int main()
{
	int a;
	
	scanf("%d", &a);
	
	for (; a>0; a--)
	{
		double a1, a2, b1, b2, c1, c2, x1, y1, x2, y2, x3, y3;
		double x, y, r;
		
		scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
		a1 = 2 * (x2-x1), b1 = 2 * (y2-y1);
		c1 = x1*x1 - x2*x2 + y1*y1 - y2*y2;
		a2 = 2*(x3-x1), b2 = 2*(y3-y1);
		c2 = x1*x1 - x3*x3 + y1*y1 - y3*y3;
		x = (b1*c2 - b2*c1) / (a1*b2 - a2*b1);
		y = (c1*a2 - c2*a1) / (a1*b2 - a2*b1);
		r = hypot(x - x1, y - y1);
		printf("%.3lf %.3lf %.3lf\n", x, y, r);
	}
	
	return 0;
}