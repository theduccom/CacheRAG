#include <cmath>
#include <iostream>

using namespace std;

bool prime_check(int N)
{
	if (N == 1) { return false; }

	for (int i = 2; i <= sqrt(N); i++)
	{
		if (N % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int N;

	while (cin >> N)
	{
		for (int i = (N - 1); i > 1; i--)
		{
			if (prime_check(i) == true)
			{
				cout << i << ' '; goto Exit1;
			}
		}

	Exit1:;

		for (int i = (N + 1); i < 50022; i++)
		{
			if (prime_check(i) == true)
			{
				cout << i << endl; goto Exit2;
			}
		}

	Exit2:;
	}

	return 0;
}