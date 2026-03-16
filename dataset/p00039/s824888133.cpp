#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	while ( cin >> s ){
		s += '0';
		int size = s.size();
		int* arabian = new int[ size ];

		for ( int i = 0; i < size; ++i ){
			switch( s[ i ] ){
				case 'I' : arabian[ i ] = 1; break;
				case 'V' : arabian[ i ] = 5; break;
				case 'X' : arabian[ i ] = 10; break;
				case 'L' : arabian[ i ] = 50; break;
				case 'C' : arabian[ i ] = 100; break;
				case 'D' : arabian[ i ] = 500; break;
				case 'M' : arabian[ i ] = 1000; break;
				default : arabian[ i ] = 0;break;
			}
		}

		int figure = 0;
		for ( int i = 0; i < size-1; ++i ){
			if ( arabian[ i ] < arabian[ i + 1 ] ){
				arabian[ i ] = -arabian[ i ];
			}
			figure += arabian[ i ];
		}

		cout << figure << endl;

		delete[] arabian;
	}

	return 0;
}