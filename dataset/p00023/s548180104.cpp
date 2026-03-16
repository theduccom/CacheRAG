#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		double Xa, Ya, Ra, Xb, Yb, Rb;
		cin >> Xa >> Ya >> Ra >> Xb >> Yb >> Rb;

		double distance = sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2));
		if (distance > Ra + Rb)
		{
			cout << 0 << endl;
			continue;
		}
		if (distance + Rb < Ra)
		{
			cout << 2 << endl;
			continue;
		}
		if (distance + Ra < Rb)
		{
			cout << -2 << endl;
			continue;
		}
		cout << 1 << endl;
	}

	return 0;
}