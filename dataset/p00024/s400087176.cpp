#include<iostream>
#include<cmath>
int main()
{
	for (double v_min; std::cin >> v_min;)
	{
		double y_min = v_min * v_min / 19.6;
		int y_ceil = static_cast<int>(ceil(y_min));
		int y = y_ceil + (5 - y_ceil % 5) % 5;
		std::cout << (y + 5) / 5 << std::endl;
	}
	return 0;
}
