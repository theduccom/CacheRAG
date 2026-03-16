#include <iostream>
#include <cstdio>
using namespace std ;

int main()
{
	double ary[10] ;

	while( cin >> ary[0] )
	{
		double sum = ary[0] ;
		for( int i = 1 ; i < 10 ; i ++ )
		{
			if( i %2 == 1 ){ ary[i] = ary[i-1]*2 ; }
			else if( i %2 == 0 ){ ary[i] = ary[i-1]/3 ; }
			sum += ary[i] ;
		}
		printf("%.8f\n",sum) ;
	}
	return 0 ;
}