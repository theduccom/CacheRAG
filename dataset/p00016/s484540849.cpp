#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1.);
typedef complex<double> P;

P p;
double dir = pi / 2.;

int main()
{
	p = P(0, 0);
	double n, d;
	while (scanf("%lf,%lf", &n, &d), (int)n | (int)d){
		p += polar(n, dir);
		dir -= d * pi / 180;
	}
	
	printf("%d\n%d\n", (int)p.real(), (int)p.imag());
	
	return 0;
}