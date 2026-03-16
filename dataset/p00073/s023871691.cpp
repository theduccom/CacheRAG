#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x,h;
	while(cin >> x >> h && x && h)
	{
		double sum = 0;
		sum += x*x;
		double half = x /2;
		sum += 2*x*sqrt(half*half+h*h);

		cout << fixed;
		cout.precision(6);
		cout << sum << endl;
	}
	return 0;
}