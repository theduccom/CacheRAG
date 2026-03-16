#include <iostream>
using namespace std;
int main( void )
{
	int l[10];
	l[0] = 1;
	for ( int i = 1; i < 10; i++ )
		l[i] = l[i-1] * 2;

	int n;
	while ( cin >> n )
	{
		bool f = false;
		for ( int i = 0; i < 10; i++ )
		{
			if ( n & 1 << i )
			{
				cout << (f?" ":"") << l[i];
				f = true;
			}
		}
		cout << endl;
	}

	return 0;
}