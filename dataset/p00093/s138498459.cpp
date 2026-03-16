#include <iostream>
#include <algorithm>
using namespace std;

bool is_leap( int y )
{
	if ( y % 4 == 0 )
	{
		if ( y % 100 == 0 )
		{
			if ( y % 400 == 0 )
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

int main( void )
{
	bool f = false;
	int a, b;
	while ( cin >> a >> b && a && b )
	{
		if ( f ) cout << endl;
		else f = true;

		bool exist = false;
		for ( int i = max(0,a); i <= min(3000,b); i++ )
		{
			if ( is_leap( i ) )
			{
				cout << i << endl;
				exist = true;
			}
		}

		if ( exist == false )
			cout << "NA" << endl;

	}
	return 0;
}