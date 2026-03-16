#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	double x[21], y[21], a, b, c, z, s;
	char ch;
	int cnt = 1;
	s = 0;
	while (cin>>x[cnt]>>ch>>y[cnt])
	{
		cnt++;
	}

	for (int i = 1; i < cnt-1; i++)
	{
		a = sqrt((x[i] - x[1])*(x[i] - x[1]) + (y[i] - y[1])*(y[i] - y[1]));
		b = sqrt((x[i+1] - x[i])*(x[i+1] - x[i]) + (y[i+1] - y[i])*(y[i+1] - y[i]));
		c = sqrt((x[i+1] - x[1])*(x[i+1] - x[1]) + (y[i+1] - y[1])*(y[i+1] - y[1]));
		z = (a + b + c) / 2;
		s += sqrt(z*(z - a)*(z - b)*(z - c));
	}

	cout << fixed << setprecision(6) << s << endl;

	return 0;
}