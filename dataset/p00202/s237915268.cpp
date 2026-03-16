#include <iostream>
using namespace std;

static const int MAX = 1000001;

int  price[30];
bool dp[MAX];

bool prime( int n );

int main()
{

	int n, x;
	bool flg;

	while( 1 ) {

		flg = false;

		if( cin >> n >> x, n == 0 && x == 0 ) break;

		for( int i = 0; i < MAX; i++ ) dp[i] = false;

		for( int i = 0; i < n; i++ ) cin >> price[i];

		dp[0] = true;

		/*
		for( int i = 0; i < n; i++ ) {
			for( int j = 0; j < x - price[i]; j++ ) {
			
				if( dp[j] ) dp[j + price[i]] = true;

			}
		}
		*/

		for( int i = 0; i < x; i++ ) {
			if( dp[i] ) {
				for( int j = 0; j < n; j++ ) {
					
					if( i + price[j] <= x ) {
						dp[i + price[j]] = true;
					}
					else continue;

				}
			}
		}

		for( int i = x; i > 0; i-- ) {

			if( dp[i] && prime( i ) ) {
				cout << i << endl;
				flg = true;
				break;
			}

		}

		if( !flg ) cout << "NA" << endl;

	}

	return 0;

}

bool prime( int x )
{

	for( int i = 2; i * i <= x; i++ ) {
		if( x % i == 0 ) return false;
	}

	return true;

}