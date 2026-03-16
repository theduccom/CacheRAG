#include <iostream>
#include <cmath>

double CalcTime(double speed)
{
	return(speed / 9.8);
}

double CalcHeight(double time)
{
	return(4.9*std::pow(time, 2));
}

int CalcStep(double height)
{
	return static_cast<int>((height + 5.0) / 5.0)+1;
}

int Answer(double speed)
{
	double time = CalcTime(speed);
	double height = CalcHeight(time);
	return(CalcStep(height));
}

int main()
{
	double v = 0.0;

	while (std::cin >> v)
	{
		std::cout << Answer(v) << std::endl;
	}

	return 0;
}