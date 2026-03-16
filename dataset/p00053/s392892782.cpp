#include <iostream>
using namespace std;

#define Max 105000
int IsPrime[Max];

int main()
{
	for (int i = 2; i < Max; i++) IsPrime[i] = true;
	for (int i = 2; i < Max; i++)
	{
		if (!IsPrime[i]) continue;
		for (int j = i + i; j < Max; j += i)
		{
			IsPrime[j] = false;
		}
	}

	int n;
	while (cin >> n, n)
	{
		int ans = 0;
		int i = 0;
		int count = 0;
		while (count < n)
		{
			if (IsPrime[i])
			{
				count++;
				ans += i;
			}
			i++;
		}

		cout << ans << endl;
	}

	return 0;
}