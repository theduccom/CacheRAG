#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define EPS 1e-9

double get_angle( double x1, double y1, double x2, double y2 )
{
	double angle;
	double m;
	if ( x1 == x2 ) angle = 90.0;
	else
	{
		m = ( y2 - y1 ) / ( x2 - x1 );
		angle = atan( m ) * 180.0 / M_PI;
	}
	return angle;
}

double get_radian( double x1, double y1, double x2, double y2 )
{
	if ( x1 == x2 ) return M_PI / 180.0;
	return atan( ( y2 - y1 ) / ( x2 - x1 ) );
}

double get_distance( double x1, double y1, double x2, double y2 )
{
	return sqrt( ( x2 - x1 ) * ( x2 - x1 ) + ( y2 - y1 ) * ( y2 - y1 ) );
}

int main( void )
{
	int n; cin >> n;
	
	double x1, y1, x2, y2, x3, y3;
	for ( int i = 0; i < n; i++ )
	{
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		double x12 = ( x1 + x2 ) / 2.0;
		double y12 = ( y1 + y2 ) / 2.0;
		double a12 = get_angle( x1, y1, x2, y2 ) - 90.0;
		double x13 = ( x1 + x3 ) / 2.0;
		double y13 = ( y1 + y3 ) / 2.0;
		double a13 = get_angle( x1, y1, x3, y3 ) - 90.0;

		double t12 = tan( a12 * M_PI / 180.0 );
		double t13 = tan( a13 * M_PI / 180.0 );
		double x, y;
		if ( fabs( a12 - 90.0 ) <= EPS || fabs( a12 + 90.0 ) <= EPS )
		{
			y = t13 * ( x12 - x13 ) + y13;
			x = x12;
		}
		else if ( fabs( a13 - 90.0 ) <= EPS || fabs( a13 + 90.0 ) <= EPS )
		{
			y = t12 * ( x13 - x12 ) + y12;
			x = x13;
		}
		else
		{
			x = ( t12 * x12 - t13 * x13 + y13 - y12 ) / ( t12 - t13 );
			y = t12 * ( x - x12 ) + y12;
		}
		double r = get_distance( x1, y1, x, y );

		/*
		cout << "=== test ==============" << endl;
		cout << "a12 = " << a12 << endl;
		cout << "t12 = " << t12 << endl;
		cout << "x12 = " << x12 << endl;
		cout << "y12 = " << y12 << endl;
		cout << endl;
		cout << "a13 = " << a13 << endl;
		cout << "t13 = " << t13 << endl;
		cout << "x13 = " << x13 << endl;
		cout << "y13 = " << y13 << endl;
		cout << "=======================" << endl;
		*/

		cout.setf( ios::fixed );
		cout.precision( 3 );
		cout << x << " " << y << " " << r << endl;
	}

	return 0;
}