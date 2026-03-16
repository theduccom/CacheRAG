#include <iostream>
using namespace std ;

int main()
{
	long get ;
	
	while( cin >> get )
	{
		if( get == 0 ) break ;

		int sum = 0 ;
		for( int i = 5 ; i <= get ; i *= 5 )
		{
			sum += (get/i) ;
		}
		cout << sum << endl ;
	}

	return 0 ;
}