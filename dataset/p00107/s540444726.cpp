#include <iostream>
using namespace std;

int diagonal( int a, int b, int c ){
	if( a > c ) swap( a, c );
	if( b > c ) swap( b, c );
	return a*a + b*b;
}

int main()
{
	int a, b, c;
	while( cin >> a >> b >> c && !( a == 0 && b == 0 && c == 0 ) ){
		int dia_square = diagonal( a, b, c );

		int num;
		cin >> num;
		for( int i = 0; i < num; ++i ){
			int radius;
			cin >> radius;
			if( dia_square < radius * radius * 4 ){
				cout << "OK" << endl;
			}else{
				cout << "NA" << endl;
			}
		}
	}

	return 0;
}