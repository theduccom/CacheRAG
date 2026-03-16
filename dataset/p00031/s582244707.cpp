#include<iostream>
int main()
{
	auto powor_of_two = [](int n)
	{
		int result = 1;
		for (int i = 0; i < n; i++)
		{
			result *= 2;
		}
		return result;
	};
	for (int w; std::cin >> w;)
	{
		for (int i = 0; i < 10; i++)
		{
			int bit = w & 1;
			if (bit == 1)
			{
				std::cout << powor_of_two(i);
				w >>= 1;
				if (w != 0)
				{
					std::cout << ' ';
				}
				else
				{
					std::cout << std::endl;
					break;
				}
			}
			else
			{
				w >>= 1;
			}
		}
	}
	return 0;
}
