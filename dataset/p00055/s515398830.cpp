#include <iostream>
#include <iomanip>
using namespace std;

double d(double a)
{
	double b;
	b = a * 2;
	return b;
}
double t(double a)
{
	double b;
	b = a / 3;
	return b;
}
int main()
{
	double n;
	
	while (cin >> n)
	{
		double a = 0;
		double q[10];
		q[0] = n;
		for (int i = 0; i < 10; i++)
		{
			if (i % 2 == 0)
			{
				q[i + 1] = d(q[i]);
			}
			if (i % 2 == 1)
			{
				q[i + 1] = t(q[i]);
			}
		}
		for (int i = 0; i < 10; i++)
		{
			a = q[i] + a;
		}
		cout << fixed << setprecision(8) << a << endl;
	}


	return 0;
}
