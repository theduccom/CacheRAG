#include <iostream>
#include <iomanip>
#include <cmath>
struct {double x, y;} p[3];
using namespace std;
int main()
{
	int t, i, j;
	double r, a, b, c, d, e, f, l, m, n;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		for (j = 0; j < 3; j++)
			cin >> p[j].x >> p[j].y;
		a = p[0].x-p[1].x;
		b = p[0].y-p[1].y;
		c = -(p[0].x*p[0].x)-(p[0].y*p[0].y)+(p[1].x*p[1].x)+(p[1].y*p[1].y);
		d = p[1].x-p[2].x;
		e = p[1].y-p[2].y;
		f = -(p[1].x*p[1].x)-(p[1].y*p[1].y)+(p[2].x*p[2].x)+(p[2].y*p[2].y);
		m = (c*d-a*f)/(b*d-a*e);
		l = (c*e-b*f)/(e*a-b*d);
		n = -((p[0].x*p[0].x)+(p[0].y*p[0].y)+p[0].x*l+p[0].y*m);
		cout << setprecision(3) << setiosflags(ios::fixed);
		cout << -l/2 << " " << -m/2 << " " << sqrt(l*l+m*m-4*n)/2 << endl;
	}
}