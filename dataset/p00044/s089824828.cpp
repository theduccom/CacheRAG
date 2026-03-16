#include <iostream>
#include <vector>
using namespace std;
#define NUM 100000
int main( void )
{
	vector <bool> is_prime( NUM+1, false );
	is_prime[2] = true;
	for ( int i = 3; i < NUM; i += 2 )
	{
		is_prime[i] = true;
	}
	for ( int i = 3; i < NUM; i += 2 )
	{
		if ( is_prime[i] )
		{
			for ( int j = i+i; j < NUM; j += i )
			{
				is_prime[j] = false;
			}
		}
	}

	int n;
	while ( cin >> n )
	{
		for ( int i = n-1; i >= 2; i-- )
		{
			if ( is_prime[i] )
			{
				cout << i << " ";
				break;
			}
		}

		for ( int i = n+1; i <= NUM; i++ )
		{
			if ( is_prime[i] )
			{
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}