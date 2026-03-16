#include <iostream>
#include <vector>

using namespace std;

int main( void )
{
	long double a;
	while ( cin >> a )
	{
		vector <long double> s(20);
		s[1] = a;
		for ( int i = 2; i <= 10; i++ )
		{
			if ( i % 2 == 0 )
			{
				s[i] = s[i-1] * 2.0;
			}
			else
			{
				s[i] = s[i-1] / 3.0;
			}
		}

		double kotae = 0.0;
		for ( int i = 1; i <= 10; i++ )
		{
			kotae += s[i];
		}

		cout.setf( ios::fixed );
		cout.precision( 8 );
		cout << kotae << endl;
	}
	return 0;
}