#include<iostream>
#include<cmath>
#include<stdio.h>

double getHypotenuse( double a , double b )
{
	return sqrt( pow( (double)a , 2 ) + pow( (double)b , 2 ) );
}

int main(void)
{
	int x, h;

	while(1){
		std::cin >> x >> h;
		if( x == 0 && h == 0 ){
			break;
		}
		printf( "%5.9f\n",(double)x * (double)x + 2.0 * x * getHypotenuse( (double)x/2.0 , (double)h ) );
	}

	return 0;
}