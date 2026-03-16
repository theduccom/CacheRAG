#include<iostream>
int main()
{
	while (true)
	{
		double l[10];
		double length = 0;
		char foo;
		for (int i = 0; i < 10; i++)
		{
			std::cin >> l[i] >> foo;
			length += l[i];
		}
		double v1, v2;
		std::cin >> v1 >> foo >> v2;
		if (std::cin.eof())
		{
			break;
		}
		double meetpoint = length * v1 / (v1 + v2);
		length = 0;
		for (int i = 0; i < 10; i++)
		{
			length += l[i];
			if (length >= meetpoint)
			{
				std::cout << i + 1 << std::endl;
				break;
			}
		}
	}
	return 0;
}
