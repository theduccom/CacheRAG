#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <set>
#include <iostream>
#include <map>
#include <functional>
#include <cstdlib>
#include <numeric>
#include <queue>
#include <complex>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef complex<double> Point;

double cross(Point a, Point b)
{
	return a.real()*b.imag() - a.imag()*b.real();
}

int main()
{
	Point o, a, b;
	scanf("%lf,%lf", &o.real(), &o.imag());
	scanf("%lf,%lf", &b.real(), &b.imag());
	
	double area = 0.0;
	while(scanf("%lf,%lf", &a.real(), &a.imag()) != EOF){
		area += fabs(cross(a-o, b-o)) / 2.0;
		b = a;
	}
	printf("%f\n", area);

	return 0;
}