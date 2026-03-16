#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double a, s = 0.0;
	while (cin >> a)
	{
		if (cin.eof()) return 0;
		s = a;
		for (int i = 2; i <= 10; i++)
		{
			if (i % 2)	a /= 3.0;
			else		a *= 2.0;
			s += a;
		}
		printf("%.8lf\n", s);
	}
	return 0;
}