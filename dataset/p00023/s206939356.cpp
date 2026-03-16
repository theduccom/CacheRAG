#include <iostream>
#include <array>
#include <math.h>

int main(){

	std::array<double, 3> a; //0:xa 1:ya 2:ra
	std::array<double, 3> b;

	int N;

	std::cin >> N;

	for(int i = 0; i < N; ++i){
		
		for(int j = 0; j < 3; ++j)
			std::cin >> a[j];

		for(int j = 0; j < 3; ++j)
			std::cin >> b[j];

		double ab = hypot( (a[0] - b[0]) , (a[1] - b[1]) );

		if( ab > (a[2] + b[2]) )
			std::cout << 0 << std::endl;
		
		else if ( a[2] > ab + b[2] )
			std::cout << 2 << std::endl;

		else if ( b[2] > ab + a[2] )
			std::cout << -2 << std::endl;

		else
			std::cout << 1 << std::endl;

	}
	
	return 0;

}