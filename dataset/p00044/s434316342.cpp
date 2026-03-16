#include <iostream>
using namespace std;

#define Max 51000
int n;
bool IsPrime[51000];

int main()
{
	for (int i = 2; i < Max; i++) IsPrime[i] = true;

	for (int i = 2; i < Max; i++)
	{
		if (!IsPrime[i]) continue;
		for (int j = i + i; j < Max; j += i) IsPrime[j] = false;
	}

	while (cin >> n)
	{
		for (int i = n - 1; true; i--)
		{
			if (IsPrime[i])
			{
				cout << i << ' ';
				break;
			}
		}

		for (int i = n + 1; true; i++)
		{
			if (IsPrime[i])
			{
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}