#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

class Vector{
public:
	double x;
	double y;

	Vector(){}
	Vector( double dx, double dy ){
		x = dx;
		y = dy;
	}

	double operator*( const Vector& hoge ){
		return x * hoge.x + y * hoge.y;
	}

	Vector operator*( const double hoge )
	{
		return Vector( x * hoge, y * hoge );
	}

	Vector operator/( const double hoge )
	{
		return Vector( x / hoge, y / hoge );
	}

	Vector operator-( const Vector& hoge ){
		return Vector( x - hoge.x, y - hoge.y );
	}

	Vector operator-(){
		return Vector( -x, -y );
	}

	Vector operator+( const Vector& hoge ){
		return Vector( x + hoge.x, y + hoge.y );
	}
};

double change( double data )
{
	data *= 1000;
	data = int( data + .5 -( data < 0 ) );
	data /= 1000;
	return data;
}

int main(int argc, char const* argv[])
{
	Vector p1,p2,p3,circ;
	double r;
	int n;

	cin >> n;
	for( int i = 0;i < n;i++ ){
		cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;
		Vector e1,e2,e3;
		e1 = p3 - p2;
		e2 = p1 - p3;
		e3 = p2 - p1;

		double d1 = (-e2) * e3;
		double d2 = (-e3) * e1;
		double d3 = (-e1) * e2;
		double c1 = d2 * d3;
		double c2 = d3 * d1;
		double c3 = d1 * d2;
		double c = c1 + c2 + c3;

		circ = ( (p1 * (c2 + c3)) + (p2 * (c3 + c1)) + (p3 * (c1 + c2)) ) / (2 * c);
		r = sqrt( fabs((d1 + d2) * (d2 + d3) * (d3 + d1) / c) ) / 2;
		circ.x = change( circ.x );
		circ.y = change( circ.y );
		r = change( r );

		printf("%.3f %.3f %.3f\n",circ.x, circ.y, r );
	}

	return 0;
}