#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	int x, h;
	double s;
	while (1)
	{
		cin >> x >> h;
		if ((x == 0) && (h == 0)) break;
		s = pow(x,2.0) + x* sqrt(pow(h,2.0)+pow(x,2.0)/4) *2;
		cout << fixed <<setprecision(6) << s << endl;
	}
	return 0;
}