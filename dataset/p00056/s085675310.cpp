#include <iostream>
using namespace std;

#define Max 50000
bool IsPrime[Max];

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
		int count = 0;
		for (int i = 0; i <= n / 2; i++)
		{
			if (IsPrime[i] && IsPrime[n - i]) count++;
		}
		cout << count << endl;
	}

	return 0;
}