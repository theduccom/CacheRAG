#include<stdio.h>



int main()
{
	int a[ 3 ] ;

	int i ;
	for( i = 0 ; i < 3 ; ++i )
	{
		scanf( "%d" ,&a[ i ] ) ;
	}



	if( a[ 2 ] == 1 || a[ 0 ] + a[ 1 ] == 2 )
	{
		puts( "Open" ) ;
	}


	else
	{
		puts( "Close" ) ;
	}



	return 0 ;
}