#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int W;

	while (true)
	{
		cin >> W;

		if (W == -1) { break; }

		int money = 1150;

		if (W > 10)
		{
			money += min(W - 10, 10) * 125;
		}
		if (W > 20)
		{
			money += min(W - 20, 10) * 140;
		}
		if (W > 30)
		{
			money += (W - 30) * 160;
		}

		cout << 4280 - money << endl;
	}

	return 0;
}