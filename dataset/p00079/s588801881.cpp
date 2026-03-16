#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	int cnt = 0;
	double x1, x2, x3, y1, y2, y3, s = 0.0;
	char c;

	while ( cin >> x3 >> c >> y3 ){
		++cnt;
		if ( cnt == 1 ){
			x1 = x3;
			y1 = y3;
		}
		if ( cnt >= 3 ){
			double a = sqrt( pow( x2 - x1, 2.0 ) + pow( y2 - y1, 2.0 ) );
			double b = sqrt( pow( x3 - x2, 2.0 ) + pow( y3 - y2, 2.0 ) );
			double c = sqrt( pow( x1 - x3, 2.0 ) + pow( y1 - y3, 2.0 ) );
			double z = ( a + b + c ) / 2;
			s += sqrt( z * ( z - a ) * ( z - b ) * ( z - c ) );
		}

		x2 = x3;
		y2 = y3;
	}

	cout << setprecision( 6 ) << setiosflags( ios::fixed );
	cout << s << endl;

	return 0;
}