#include <iostream>
using namespace std;

int main()
{
	double v;
	while (cin >> v)
	{
		int n = 1;
		v *= v;
		while (v > 19.6 * (n * 5 - 5))
		{
			n++;
		}
		cout << n << endl;
	}
	return 0;
}