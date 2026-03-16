#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	double h, max = 0.0, min = 3776.0;
	while (cin >> h)
	{
		if (h > max) max = h;
		if (h < min) min = h;
	}

	cout << max - min << endl;

	return 0;
}