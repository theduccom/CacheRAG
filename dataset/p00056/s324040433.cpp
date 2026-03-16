#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<bool> is_not_prime(50001);
	is_not_prime[1] = true;
	for (int i = 2; i <= 50000; ++i)
	{
		if (!is_not_prime[i])
		{
			for (int j = 2 * i; j <= 50000; j += i)
			{
				is_not_prime[j] = true;
			}
		}
	}

	while (true)
	{
		int n;
		cin >> n;
		if (n == 0)
		{
			return 0;
		}
		int count = 0;
		for (int i = 2; i <= n / 2; ++i)
		{
			if (!is_not_prime[i] && !is_not_prime[n - i])
				++count;
		}
		cout << count << endl;
	}
}