#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	double v;

	while (cin >> v)
	{
		cout << static_cast<int>((4.9 * pow(v / 9.8, 2) + 10) / 5) << endl;
	}

	return 0;
}