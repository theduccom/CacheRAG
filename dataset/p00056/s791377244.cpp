#include <cmath>
#include <iostream>

#include <string.h>

using namespace std;

bool prime_check(int n)
{
	if (n == 1) { return false; }

	if (n % 2 == 0)
	{
		if (n == 2) { return true; }

		else { return false; }
	}

	for (int i = 3; i <= sqrt(n); i += 2)
	{
		if (n % i == 0) { return false; }
	}

	return true;
}

int main()
{
	const int DATA_SETS = 10000;
	const int MAX_PRIME = 50000;

	int N[DATA_SETS], P[DATA_SETS], C = 0;

	bool I[MAX_PRIME + 1];

	memset(N, 0, sizeof(N));
	memset(P, 0, sizeof(P));
	memset(I, 0, sizeof(I));

	for (int i = 1; i <= MAX_PRIME; i++)
	{
		if (prime_check(i) == true)
		{
			I[i] = true;
		}
		else
		{
			I[i] = false;
		}
	}

	while (true)
	{
		cin >> N[C];

		if (N[C] == 0) { goto Exit; }

		C++;
	}

Exit:;

	for (int i = 0; i < C; i++)
	{
		for (int j = 2; j <= N[i] / 2; j++)
		{
			if (I[j] == true && I[N[i] - j] == true) { P[i]++; }
		}

		cout << P[i] << endl;
	}

	return 0;
}