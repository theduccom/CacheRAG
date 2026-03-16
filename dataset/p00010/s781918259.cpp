#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	int n;

	cin >> n;

	double* x1 = new double[ n ];
	double* y1 = new double[ n ];
	double* x2 = new double[ n ];
	double* y2 = new double[ n ];
	double* x3 = new double[ n ];
	double* y3 = new double[ n ];

	for ( int i = 0; i < n; ++i ){
		cin >> x1[ i ] >> y1[ i ]
			>> x2[ i ] >> y2[ i ]
			>> x3[ i ] >> y3[ i ];
	}

	for ( int i = 0; i < n; ++i ){
		double x12, y12, b12, x23, y23, b23, ox, oy, r;
		x12 = x2[ i ] - x1[ i ];
		y12 = y2[ i ] - y1[ i ];
		b12 = x12 * ( x1[ i ] + x2[ i ] ) / 2.0 + y12 * ( y1[ i ] + y2[ i ] ) / 2.0;
		x23 = x3[ i ] - x2[ i ];
		y23 = y3[ i ] - y2[ i ];
		b23 = x23 * ( x2[ i ] + x3[ i ] ) / 2.0 + y23 * ( y2[ i ] + y3[ i ] ) / 2.0;
		oy = ( x12 * b23 - x23 * b12 ) / ( x12 * y23 - x23 * y12 );
		if ( x12 ){
			ox = ( b12 - y12 * oy ) / x12;
		}else{
			ox = ( b23 - y23 * oy ) / x23;
		}
		r = sqrt( pow( ox - x1[ i ], 2.0 ) + pow( oy - y1[ i ], 2.0 ) );

		cout << showpoint << setprecision( 3 ) << setiosflags( ios::fixed )
			 << ( ox == -0.0 ? 0.0 : ox ) << " "
			 << ( oy == -0.0 ? 0.0 : oy ) << " "
			 << r << endl;
	}

	delete[] x1, y1, x2, y2, x3, y3;
	return 0;
}