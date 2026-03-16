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
	while (true)
	{
		int n;
		std::cin >> n;
		if (n == 0)
		{
			break;
		}
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (is_prime[i] && is_prime[n - i - 4])cnt++;
			if (i + 2 >= n / 2)break;
		}
		std::cout << cnt << std::endl;
	}
	return 0;
}
