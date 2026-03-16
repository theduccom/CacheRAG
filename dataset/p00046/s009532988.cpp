#include<iostream>
int main()
{
	double min = 1000001, max = -1;
	for (double height; std::cin >> height;)
	{
		if (min > height)min = height;
		if (max < height)max = height;
	}
	std::cout << max - min << std::endl;
	return 0;
}
