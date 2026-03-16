#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std ;

int main()
{
	double x,h ;
	double high = 0 ;

	while( cin >> x >> h )
	{
		if( x == 0 && h == 0 )	break ;

		high = sqrt( h*h + (x*x)/4 ) ;
		printf("%lf\n", (x*x)+(high*x/2*4)) ;
	}
	return 0 ;
}