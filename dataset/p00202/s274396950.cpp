#include <iostream>
#include <set>
using namespace std;

const int LIMIT = 1000000;

int main()
{
	bool* prime = new bool[ LIMIT + 1 ]();
	prime[ 0 ] = prime[ 1 ] = true;
	for( int i = 2; i < LIMIT + 1; ++i ){
		if( prime[ i ] ) continue;
		for( int j = i + i; j < LIMIT + 1; j += i ){
			prime[ j ] = true;
		}
	}

	int n, x;
	while( cin >> n >> x && ( n || x ) ){
		bool* price = new bool[ x + 1 ]();
		set< int > menu;
		for( int i = 0; i < n; ++i ){
			int p;
			cin >> p;
			if( p <= x ){
				menu.insert( p );
				price[ p ] = true;
			}
		}
		int ans = 0;
		for( int i = 0; i <= x; ++i ){
			if( !price[ i ] ) continue;
			if( !prime[ i ] ){
				ans = i;
			}
			set< int >::iterator itr = menu.begin();
			while( itr != menu.end() ){
				int a = i + *itr;
				if( a <= x ){
					price[ a ] = true;
				}
				++itr;
			}
		}

		if( ans != 0 ){
			cout << ans << endl;
		}else{
			cout << "NA" << endl;
		}

		delete[] price;
	}

	delete[] prime;

	return 0;
}