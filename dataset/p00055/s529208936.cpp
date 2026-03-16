#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a;
	while (cin >> a)
	{
		double ans = a;
		for (int i = 0; i < 9; i++)
		{
			if (i % 2 == 0) a *= 2;
			else a /= 3;
			ans += a;
		}
		cout << fixed << setprecision(10) << ans << endl;
	}

	return 0;
}