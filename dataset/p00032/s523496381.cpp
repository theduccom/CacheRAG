#include <iostream>
using namespace std;
int main( void )
{
	int t = 0;
	int h = 0;
	while ( !cin.eof() )
	{
		int a, b, c;
		char d, e;
		cin >> a >> d >> b >> e >> c;
		if ( cin.eof() )
			break;

		if ( a * a + b * b == c * c )
			t++;
		else if ( a == b )
			h++;
	}

	cout << t << endl;
	cout << h << endl;
	
	return 0;
}