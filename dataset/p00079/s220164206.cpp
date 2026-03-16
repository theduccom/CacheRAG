#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double x[3], y[3];
	double a, b, c, z, S;
	int i, j;

	cout<<setprecision(6);
	cout<<setiosflags(ios::fixed);
	S = 0;
	scanf("%lf,%lf", &x[0], &y[0]);
	scanf("%lf,%lf", &x[1], &y[1]);
	while (scanf("%lf,%lf", &x[2], &y[2]) != EOF) {
		a = sqrt( (x[1]-x[0])*(x[1]-x[0]) + (y[1]-y[0])*(y[1]-y[0]) );
		b = sqrt( (x[2]-x[1])*(x[2]-x[1]) + (y[2]-y[1])*(y[2]-y[1]) );
		c = sqrt( (x[0]-x[2])*(x[0]-x[2]) + (y[0]-y[2])*(y[0]-y[2]) );
		z = (a+b+c)/2.0;
		S += sqrt( z*(z-a)*(z-b)*(z-c) );
		x[1] = x[2];
		y[1] = y[2];
	}
	cout<<S<<endl;

	return 0;
}