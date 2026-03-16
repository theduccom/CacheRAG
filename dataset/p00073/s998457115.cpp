#include <iostream>
#include <math.h>
using namespace std;
int main( void )
{
	int x, h;
	while ( cin >> x >> h && x && h )
	{
		double xx = x;
		double S = xx * xx;

		double hh = sqrt( ((xx/2.0)*(xx/2.0)) + (h*h) );

		S += hh * xx / 2.0 * 4.0;

		cout.setf(ios::fixed);
		cout.precision( 6 );
		cout << S << endl;

	}
	return 0;
}