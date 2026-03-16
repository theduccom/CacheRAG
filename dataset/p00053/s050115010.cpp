#include <iostream>

using namespace std;

bool isprime(int n, int k)
{
	if (k * k > n) { return true; }

	if (n % k == 0){ return false; }

	return isprime(n, k + 1);
}

int main()
{
	const int DATASETS = 10000;

	int n[10000], p[10000], c1 = 0, c2 = 2, c3 = 0;

	while (c1 < 10000)
	{
		if (isprime(c2, 2) == true)
		{
			c3 += c2;

			p[c1] = c3;

			c1++;
		}

		c2++;
	}

	c1 = 0;

	while (true)
	{
		cin >> n[c1];

		if (n[c1] == 0) { goto Exit; }

		c1++;
	}

Exit:;

	for (int i = 0; i < c1; i++)
	{
		cout << p[n[i] - 1] << endl;
	}

	return 0;
}