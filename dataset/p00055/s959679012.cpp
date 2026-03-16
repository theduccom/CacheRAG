#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double a[11];
	double sum;
	while (cin >> a[1])
	{
		sum = a[1];
		for (int i = 2; i < 11; i++)
		{
			if (i % 2 == 0)
			{
				a[i] = 2 * a[i-1];
			}
			else
			{
				a[i] = a[i-1] / 3;
			}
			sum += a[i];
		}
		cout << setprecision(8) << sum << endl;
	}
	return 0;
}