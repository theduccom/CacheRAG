#include<iostream>
#include<iomanip>
#include<cmath>

int main()
{
	double x, h;
	while( std::cin >> x >> h, x || h )
	{
		double t = sqrt( x * x / 4.0 + h * h );

		std::cout << std::fixed << std::setprecision( 6 ) << x * t * 2.0 + x * x << std::endl;
	}

	return 0;
}