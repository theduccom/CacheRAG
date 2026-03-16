#include <iostream>
using namespace std ;

int main()
{
	long get ;
	int sum = 0 ;
	while( cin >> get )
	{
		if( get == 0 ) break ;

		int tmp = 0 ;
		for( int i = 5 ; i <= get ; i *= 5 )
		{
			tmp = get%i ;
			sum += ((get-tmp)/i) ;
		}
		cout << sum << endl ;
		sum = 0 ;
	}

	return 0 ;
}