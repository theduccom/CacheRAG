#include <iostream>
#include <cmath>
using namespace std;
int main( void )
{
	while ( !cin.eof() )
	{
		double v_min;
		cin >> v_min;
		if ( cin.eof() )
			break;

		double v = 0.0;
		int N = 1;
		do
		{
			double y = 5 * N - 5;
			double t = sqrt( y / 4.9 );

			v = 9.8 * t;

			N++;
		} while( v < v_min );

		cout << N-1 << endl;

	}
	return 0;
}