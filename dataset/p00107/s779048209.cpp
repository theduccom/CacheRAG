#include<iostream>
#include<stdio.h>
#include<cmath>
#include<vector>

double getHypotenuse( double a , double b )
{
	return sqrt( pow(a , 2) + pow(b , 2) );
}

double getMin( double a , double b , double c )
{
	double min = a;
	if( b < min ){
		min = b;
	}
	if( c < min ){
		min = c;
	}
	return min;
}

int main(void)
{
	int x, y, z;

	while(1){
		std::cin >> x >> y >> z;
		if( x == 0 && y == 0 && z == 0 ){
			break;
		}
		double hypoXY = getHypotenuse( x , y );
		double hypoYZ = getHypotenuse( y , z );
		double hypoZX = getHypotenuse( z , x );

		double hypoMin = getMin( hypoXY , hypoYZ , hypoZX );

		int n;
		std::cin >> n;
		for( int i = 0 ; i < n ; i++ ){
			int radius;
			std::cin >> radius;
			std::cout << (hypoMin < 2 * radius ? "OK":"NA") << std::endl;
		}
	}

	return 0;
}