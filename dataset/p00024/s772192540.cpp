#include <iostream>
using namespace std;

int main(){
	double v;

	while ( cin >> v ){
		double y = ( v * v ) / ( 2.0 * 9.8 );
		int f = y / 5 + ( y / 5 - static_cast< int >( y / 5 ) == 0.0 ? 0 : 1 ) + 1;

		cout << f << endl;
	}
	return 0;
}