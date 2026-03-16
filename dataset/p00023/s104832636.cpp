#include <iostream>
#include <cmath>
using namespace std;

double get_distance( double xa, double ya, double xb, double yb )
{
	return sqrt( ( xb - xa ) * ( xb - xa ) + ( yb - ya ) * ( yb - ya ) );
}

bool is_collision( double xa, double ya, double ra, double xb, double yb, double rb )
{
	double distance = get_distance( xa, ya, xb, yb );
	return distance <= ra + rb ? true : false;
}

int check( double xa, double ya, double ra, double xb, double yb, double rb )
{
	double distance = get_distance( xa, ya, xb, yb );
	if ( distance + rb < ra ) return 2;
	else if ( distance + ra < rb ) return -2;
	else return 1;
}

int main( void )
{
	double xa, ya, ra, xb, yb, rb;
	int n; cin >> n;
	for ( int i = 0; i < n; i++ )
	{
		cin >> xa >> ya >> ra >> xb >> yb >> rb;

		if ( is_collision( xa, ya, ra, xb, yb, rb ) )
		{
			cout << check( xa, ya, ra, xb, yb, rb ) << endl;
		}
		else
		{
			cout << 0 << endl;
		}

	}
	return 0;
}