#include <iostream>
#include <vector>
using namespace std;
#define KMAX 30
#define VMAX 1000000
int main( void )
{
	vector <bool> prime(VMAX+1, false);
	for ( int i = 3; i <= VMAX; i += 2 )
	{
		prime[i] = true;
	}
	prime[2] = true;
	for ( int i = 3; i * i <= VMAX; i += 2 )
	{
		if ( prime[i] )
		{
			for ( int j = i + i; j <= VMAX; j += i )
				prime[j] = false;
		}
	}

	while ( 1 )
	{
		int n, x;
		cin >> n >> x;
		if ( n == 0 && x == 0 )
			break;

		vector <int> K( KMAX );
		for ( int i = 0; i < n; i++ )
			cin >> K[i];

		vector < vector <bool> > T( KMAX, vector <bool>(VMAX, false) );

		for ( int i = 0; i < n; i++ )
			T[i][0] = true;
		for ( int i = K[0]; i <= x; i += K[0] )
			T[0][i] = true;

		for ( int i = 1; i < n; i++ )
		{
			for ( int j = 1; j < K[i]; j++ )
			{
				T[i][j] = T[i-1][j];
			}

			for ( int j = K[i]; j <= x; j++ )
			{
				T[i][j] = ( T[i-1][j] || T[i][j-K[i]] );
			}
		}

		int kotae = -1;
		for ( int i = x; i >= 2; i-- )
		{
			if ( prime[i] && T[n-1][i] )
			{
				kotae = i;
				break;
			}
		}

		if ( kotae == -1 )
			cout << "NA" << endl;
		else
			cout << kotae << endl;

	}

	return 0;
}