#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;

	while ( cin >> N, N != 0 ) {

		while ( N > 0 ) {
			int a, b, c;
			cin >> a >> b >> c;
			if ( a == 100 || b == 100 || c == 100 || a + b + c >= 240 || a + b >= 180 ) {
				cout << "A" << endl;
			} else if ( a + b + c >= 210 || a + b + c >= 150 && (a >= 80 || b >= 80) ) {
				cout << "B" << endl;
			} else {
				cout << "C" << endl;
			}
			N--;
		}
	}

	return ( 0 );
}

