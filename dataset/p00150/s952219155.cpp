#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
	vector <bool> is_prime(10001, false);
	for ( int i = 3; i < 10001; i += 2 )
		is_prime[i] = true;
	for ( int i = 3; i < 10001; i += 2 )
	{
		if ( is_prime[i] )
		{
			for ( int j = i + i; j < 10001; j += i )
			{
				is_prime[j] = false;
			}
		}
	}

	int n;
	while ( cin >> n && n )
	{
		if ( n % 2 == 0 )
			n--;
		for ( int i = n; i >= 5; i -= 2 )
		{
			if ( is_prime[i] && is_prime[i-2] )
			{
				cout << i-2 << " " << i << endl;
				break;
			}
		}
	}

	return 0;
}