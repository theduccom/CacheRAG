#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const* argv[])
{
	double a,b,c,d;

	while( cin >> a >> b >> c && a != 0 ){
		double h[3];
		h[0] = sqrt( a * a + b * b );
		h[1] = sqrt( a * a + c * c );
		h[2] = sqrt( b * b + c * c );

		cin >> d;
		for( int i = 0;i < d;i++ ){
			double n;
			cin >> n;
			n *= 2;

			int j;
			for( j = 0;j < 3;j++ ){
				if( n > h[j] ){ cout << "OK" << endl; break; }
			}
			if( j == 3 ) cout << "NA" << endl;
		}
	}


	return 0;

}