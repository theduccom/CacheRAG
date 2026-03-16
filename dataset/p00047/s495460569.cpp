#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const* argv[])
{
	int a[3];
	char comma,c,b;

	a[0] = a[1] = a[2] = 0;
	a[0] = 1;

	while( cin >> c >> comma >> b ){
		swap( a[c - 'A'], a[b - 'A'] );
	}

	for( int i = 0;i < 3;i++ ){
		if( a[i] ){
			cout << (char)('A' + i) << endl;
			break;
		}
	}
	return 0;
}