#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
typedef pair<double, double> P;

double Helon(P a, P b, P c)
{
	double square = 0;
	double x, y, z;
	x = sqrt((b.first - a.first) * (b.first - a.first) + (b.second - a.second) * (b.second - a.second));
	y = sqrt((c.first - a.first) * (c.first - a.first) + (c.second - a.second) * (c.second - a.second));
	z = sqrt((c.first - b.first) * (c.first - b.first) + (c.second - b.second) * (c.second - b.second));
	double s = (x + y + z) / 2;
	square = sqrt(s * (s - x) * (s - y) * (s - z));
	return(square);
}

void solve()
{
	vector<P> Vec;
	P p;
	while(~scanf("%lf,%lf", &p.first, &p.second))
	{
		Vec.push_back(p);
	}
	double square = 0;
	int size = Vec.size();
	for(int i = 1; i < size - 1; ++i)
	{
		square += Helon(Vec[0], Vec[i], Vec[i + 1]);
	}
	printf("%.6f\n", square);
}

int main()
{
	solve();
	return(0);
}