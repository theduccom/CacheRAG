#include<iostream>
#include<cmath>
#include<vector>
int main()
{
	std::vector<bool>is_prime(104728, true);
	const int root = static_cast<int>(floor(sqrt(104729)));
	for (int i = 0; i <= root - 2; i++)
	{
		if (is_prime[i])
		{
			for (int j = i + 2; (i + 2) * j < 104729; j++)
			{
				is_prime[(i + 2) * j - 2] = false;
			}
		}
	}
	for (int n; std::cin >> n;)
	{
		if (n == 0)
		{
			break;
		}
		int sum = 0, cnt = 0;
		for (int i = 0; ; i++)
		{
			if (is_prime[i])
			{
				sum += i + 2;
				if (++cnt == n)
				{
					std::cout << sum << std::endl;
					break;
				}
			}
		}
	}
	return 0;
}
