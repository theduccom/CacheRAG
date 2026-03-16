#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	
	while ( cin >> N, N != 0 ) {

		int index, maxv;
		int a, b, c;
		cin >> index >> b >> c;
		maxv = b + c;
		for ( int i = 1; i < N; i++ ) {
			cin >> a >> b >> c;
			if ( b + c > maxv ) {
				maxv = b + c;
				index = a;
			}
		}
		cout << index << " " << maxv << endl;
	}

	return ( 0 );
}

