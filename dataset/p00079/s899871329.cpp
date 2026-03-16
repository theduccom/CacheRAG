#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>

struct POINT{
	double x;
	double y;
};

double getDistance( const POINT& a , const POINT& b )
{
	return sqrt( pow( a.x - b.x , 2 ) + pow( a.y - b.y , 2 ) );
}

double getDimension( const POINT& A , const POINT& B , const POINT& C )
{
	double disAB = getDistance( A , B );
	double disBC = getDistance( B , C );
	double disCA = getDistance( C , A );
	double z = ( disAB + disBC + disCA ) / 2.0;
	double dimension = sqrt( z * ( z - disAB ) * ( z - disBC ) * ( z - disCA ) );

	return dimension;
}

int main(void)
{
	char c;
	std::vector<POINT> p;
	double dim = 0.0;

	while(1){
		POINT tmp;
		std::cin >> tmp.x >> c >> tmp.y;
		if( std::cin.eof() ){
			break;
		}
		p.push_back(tmp);
	}

	for( int i = 0 ; i < p.size()-2 ; i++ ){
		dim += getDimension( p[0] , p[i+1] , p[i+2] );
	}
	printf( "%.6f\n" , dim );

	return 0;
}