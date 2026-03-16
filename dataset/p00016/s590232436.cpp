#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
int main()
{
	double x = 0, y = 0;
	int a = 90;
	while (true)
	{
		int di, ai;
		char temp;
		std::cin >> di >> temp >> ai;
		if (di == 0 && ai == 0)
		{
			break;
		}
		x += di * cos(a * M_PI / 180);
		y += di * sin(a * M_PI / 180);
		a -= ai;
	}
	const int x_int = static_cast<int>(x >= 0 ? floor(x) : ceil(x));
	const int y_int = static_cast<int>(y >= 0 ? floor(y) : ceil(y));
	std::cout << x_int << std::endl;
	std::cout << y_int << std::endl;
	return 0;
}
