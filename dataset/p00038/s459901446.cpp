#include<iostream>
#include<array>
#include<algorithm>
int main()
{
	while (true)
	{
		int a, b, c, d, e;
		char foo;
		std::cin >> a >> foo >> b >> foo >> c >> foo >> d >> foo >> e;
		if (std::cin.eof())
		{
			break;
		}
		std::array<int, 5>num = { a,b,c,d,e };
		std::sort(num.begin(), num.end());
		if (num[0] == num[3] || num[1] == num[4])
		{
			std::cout << "four card" << std::endl;
		}
		else if (num[0] == num[1] && num[2] == num[4] || num[0] == num[2] && num[3] == num[4])
		{
			std::cout << "full house" << std::endl;
		}
		else if (num[2] == num[1] + 1 && num[3] == num[1] + 2 && num[4] == num[1] + 3 && (num[0] == num[1] - 1 || num[0] == 1 && num[1] == 10))
		{
			std::cout << "straight" << std::endl;
		}
		else if (num[0]==num[2]||num[1]==num[3]||num[2]==num[4])
		{
			std::cout << "three card" << std::endl;
		}
		else
		{
			int pair = 0;
			for (int i = 0; i < 4; i++)
			{
				if (num[i] == num[i + 1])
				{
					pair++;
				}
			}
			switch (pair)
			{
			case 2:
				std::cout << "two pair" << std::endl;
				break;
			case 1:
				std::cout << "one pair" << std::endl;
				break;
			case 0:
				std::cout << "null" << std::endl;
				break;
			}
		}
	}
	return 0;
}
