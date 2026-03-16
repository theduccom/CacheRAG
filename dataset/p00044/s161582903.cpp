#include<iostream>
#include<cmath>
#include<vector>
int main()
{
	std::vector<bool>is_prime(50020, true);
	const int root = static_cast<int>(floor(sqrt(50021)));
	for (int i = 0; i <= root - 2; i++)
	{
		if (is_prime[i])
		{
			for (int j = i + 2; (i + 2) * j < 50021; j++)
			{
				is_prime[(i + 2) * j - 2] = false;
			}
		}
	}
	for (int n; std::cin >> n;)
	{
		for (int i = n - 2 - 1;; i--)
		{
			if (is_prime[i])
			{
				std::cout << i + 2 << ' ';
				break;
			}
		}
		for (int i = n - 2 + 1;; i++)
		{
			if (is_prime[i])
			{
				std::cout << i + 2 << std::endl;
				break;
			}
		}
	}
	return 0;
}
