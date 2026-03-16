#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>

using namespace std;
typedef pair<double, double> P;

double helon(P p1, P p2, P p3)
{
	double a = sqrt((p1.first - p2.first) * (p1.first - p2.first) + (p1.second - p2.second) * (p1.second - p2.second));
	double b = sqrt((p1.first - p3.first) * (p1.first - p3.first) + (p1.second - p3.second) * (p1.second - p3.second));
	double c = sqrt((p2.first - p3.first) * (p2.first - p3.first) + (p2.second - p3.second) * (p2.second - p3.second));
	double z = (a + b + c) / 2;
	return(sqrt(z * (z - a) * (z - b) * (z - c)));
}

void solve()
{
	vector<P> Vec;
	double x, y;
	while(scanf("%lf,%lf", &x, &y) != EOF)
	{
		Vec.push_back(make_pair(x, y));
	}
	double sum = 0;
	for(int i = 1; i < Vec.size() - 1; ++i)
	{
		sum += helon(Vec[0], Vec[i], Vec[i + 1]);
	}
	cout << sum << endl;
}

int main()
{
	solve();
	return(0);
}