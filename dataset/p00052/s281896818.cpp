#include<iostream>
int main()
{
	while (true)
	{
		int n;
		std::cin >> n;
		if (n == 0)
		{
			break;
		}
		int result = 0;
		int five_pow = 5;
		while (true)
		{
			const int fives = n / five_pow;
			if (fives == 0)
			{
				break;
			}
			result += fives;
			five_pow *= 5;
		}
		std::cout << result << std::endl;
	}
	return 0;
}
