
#include <iostream>
#include <cmath>

using namespace std;

int n;
double x[3], y[3];

int main()
{
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];
		double a1 = 2.0 * (x[1] - x[0]);
		double b1 = 2.0 * (y[1] - y[0]);
		double c1 = x[0]*x[0] - x[1]*x[1] + y[0]*y[0] - y[1]*y[1];
		double a2 = 2.0 * (x[2] - x[0]);
		double b2 = 2.0 * (y[2] - y[0]);
		double c2 = x[0]*x[0] - x[2]*x[2] + y[0]*y[0] - y[2]*y[2];

		double cx = (b1*c2-b2*c1) / (a1*b2-a2*b1);
		double cy = (c1*a2-c2*a1) / (a1*b2-a2*b1);
		
		double dx = x[0] - cx;
		double dy = y[0] - cy;
		double r = sqrt(dx*dx + dy*dy);
		
		printf("%.3f %.3f %.3f\n", cx, cy, r);
	}
}