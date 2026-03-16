#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	// prime numbers table
	vector <bool> isPrime( 110000, false );
	isPrime[2] = true;
	for ( int i = 3; i < 110000; i += 2 )
	{
		isPrime[i] = true;
	}

	for ( int i = 3; i < 110000; i += 2 )
	{
		for ( int j = i + i; j <= 110000; j += i )
		{
			isPrime[j] = false;
		}
	}

	int n;
	while ( cin >> n && n > 0 )
	{
		int kotae = 0;
		int cnt = 1;
		for ( int i = 3; cnt < n; i += 2 )
		{
			if ( isPrime[i] )
			{
				kotae += i;
				cnt++;
			}
		}
		if ( n >= 1 )
			kotae += 2;

		cout << kotae << endl;
	}

	return 0;
}