#include<iostream>
#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	std::cin >> n;
	
	while( n-- ){
	 	double x[2], y[2], r[2];
		for( int i = 0; i < 2; i++ ){
			std::cin >> x[i] >> y[i] >> r[i];
		}
		
		double d = sqrt( pow( x[1] - x[0], 2 ) + pow( y[1] - y[0], 2 ) );
		
		if( d > r[0] + r[1] ){
		 	puts("0");
		}
		else if( d < fabs( r[0] - r[1] ) ){
			std::cout << (  r[0] > r[1] ? 1 : -1 ) * 2 << std::endl;
		}
		else{
			puts("1");
		}
	}

 	return 0;
}