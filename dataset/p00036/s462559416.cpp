#include<iostream>
#include<vector>
#include<array>
#include<string>
#include<sstream>
#define _X_ 0
#define _Y_ 1
int main()
{
	while (true)
	{
		std::vector<std::array<int, 2>>p;
		p.reserve(4);
		for (int i = 0; i < 8; i++)
		{
			std::string temp;
			std::cin >> temp;
			std::stringstream st(temp);
			for (int j = 0; j < 8; j++)
			{
				char foo;
				st >> foo;
				if (foo == '1')
				{
					p.push_back({ j, i });
				}
			}
		}
		if (std::cin.eof())
		{
			break;
		}
		if (p[0][_Y_] == p[1][_Y_])
		{
			if (p[0][_X_] == p[2][_X_])
			{
				std::cout << 'A' << std::endl;
			}
			else if (p[0][_Y_] == p[2][_Y_])
			{
				std::cout << 'C' << std::endl;
			}
			else if (p[1][_X_] == p[2][_X_])
			{
				std::cout << 'E' << std::endl;
			}
			else if (p[0][_X_] == p[3][_X_])
			{
				std::cout << 'G' << std::endl;
			}
		}
		else
		{
			if (p[0][_X_] == p[3][_X_])
			{
				std::cout << 'B' << std::endl;
			}
			else if (p[0][_X_] > p[3][_X_])
			{
				std::cout << 'D' << std::endl;
			}
			else
			{
				std::cout << 'F' << std::endl;
			}
		}
	}
	return 0;
}
