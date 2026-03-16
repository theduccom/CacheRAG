#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n, m;
	int vegetable[1005];
	int ans;

	while (true)
	{
		ans = 0;

		cin >> n >> m;
		if (n == 0 && m == 0) break;

		for (int i = 0; i < n; ++i)
		{
			cin >> vegetable[i];
		}
		//???????????§?????????????????????
		for (int i = 0; i < n - 1; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				if (vegetable[i] < vegetable[j])
					swap(vegetable[i], vegetable[j]);
			}
		}
		//????¨????????¨????
		for (int i = 0; i < n; ++i)
		{
			if ((i + 1) % m != 0)
				ans += vegetable[i];
		}

		cout << ans << endl;
	}

	return 0;
}