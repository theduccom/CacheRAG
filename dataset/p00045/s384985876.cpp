#include <iostream>
using namespace std;

int main(){
	int u, q, v = 0, g = 0, cnt = 0;
	char c;

	while ( cin >> u >> c >> q ){
		v += u * q;
		g += q;
		++cnt;
	}

	g = static_cast< int >( static_cast< double >( g ) / cnt + 0.5 );

	cout << v << endl << g << endl;

	return 0;
}