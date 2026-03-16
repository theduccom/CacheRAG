#include <iostream>
#include <bitset>
#include <cmath>

int main()
{

	int weight = 0;
	while (std::cin >> weight)
	{
		std::bitset<10> bit(weight);
		int count = bit.count();

		for (int i = 0; i < 10; i++)
		{
			if (bit[i])
			{
				std::cout << std::pow(2, i);
				count--;
				if (count != 0)
				{
					std::cout << " ";
				}
			}
		}
		std::cout << std::endl;
		
	}

	return 0;
}