#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>

#define mp(x, y) make_pair(x, y)
#define X first
#define Y second

using namespace std;

typedef pair<double, double> pdd;

/* 外積 */
template <typename T>
T cross_product ( T x1, T y1, T x2, T y2 )
{
	return ((x1 * y2) - (x2 * y1));
}

int main ( void )
{
	vector<pdd> v;
	pdd p;
	
	while (~scanf("%lf,%lf", &p.X, &p.Y))
	{
		v.push_back(p);
	}
	
	double sum = 0;
	
	for (int i = 1, size = v.size()-1; i < size; ++i)
	{
		int j = i+1;
		pdd a, b;
		a = mp(v[i].X - v[0].X, v[i].Y - v[0].Y);
		b = mp(v[j].X - v[0].X, v[j].Y - v[0].Y);
		sum += fabs(cross_product<double>(a.X, a.Y, b.X, b.Y));
	}
	
	printf("%.6lf\n", sum/2.0);
	
	return 0;
}