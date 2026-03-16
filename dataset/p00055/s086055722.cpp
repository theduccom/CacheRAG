#include<iostream>
#include<iomanip>
int main()
{
	while (true)
	{
		double a;
		std::cin >> a;
		if (std::cin.eof())
		{
			break;
		}
		std::cout << std::fixed << std::setprecision(10) << a * 211 / 27 << std::endl;
	}
	return 0;
}
