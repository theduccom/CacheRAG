#include<iostream>

bool isuru( int y )
{
 	return ( y % 4 == 0 && y % 100 != 0 ) || y % 400 == 0;
}

int main()
{
	int a, b;
	bool init = true;
	
	while( 1 ){
		std::cin >> a >> b;
		
		if( !a && !b )break;
		
		if( !init ) std::cout << std::endl;
		
		init = false;
		
		bool f = false;
		
		for( int i = a; i <= b; i++ ){
			if( isuru( i ) ){
				std::cout << i << std::endl;
				f = true;
			}
		}
		
		if( !f ){
		 	std::cout << "NA" << std::endl;
		}
	}

 	return 0;
}