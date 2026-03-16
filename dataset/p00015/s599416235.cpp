#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class largeInt{
public:
	largeInt() : digit( 0 ){
		initNum();
	}
	~largeInt(){}

	void set( const string& s ){
		numStr = s;
		initNum();
		digit = numStr.size();
		if ( digit > 80 ) return;
		StoI();
	}
	const char* getFigure(){ return numStr.c_str(); }
	const int getDigit(){ return digit; }

	void operator+=( const largeInt& a ){
		numStr = "";
		for ( int i = 0; i < 10; ++i ){
			num[ i ] += a.num[ i ];
			if ( num[ i ] / 100000000 && i != 9 ){
				num[ i ] -= 100000000;
				num[ i + 1 ] += 1;
			}
			int t = num[ i ];
			string s;
			for ( int j = ( i == 9 ? 8 : 7 ); j >= 0; --j ){
				int power = static_cast< int >( pow( 10.0, static_cast< double >( j ) ) );
				int c = t / power;
				t %= power;
				s += static_cast< char >( c + '0' );
			}
			numStr = s + numStr;
			if ( i == 9 ){
				string::iterator it = numStr.begin();
				while ( ( *it == '0' ) && ( it != numStr.end() - 1 ) ){
					it = numStr.erase( it );
				}
			}
		}
		digit = numStr.size();
	}

private:
	void initNum(){
		for ( int i = 0; i < 10; ++i ){
			num[ i ] = 0;
		}
	}
	void StoI(){
		bool f = false;
		for ( int i = 0; i < digit / 8; ++i ){
			for ( int j = 0; j < 8; ++j ){
				if ( i*8 + j >= digit ){
					f = true;
					break;
				}else{
					conv( i, j );
				}
			}
			if ( f ) break;
		}
		for ( int i = 0; i < digit % 8; ++i ){
			conv( digit / 8, i );
		}
	}
	void conv( int i, int j ){
		int figure = static_cast< int >( numStr[ ( digit - 1 ) - ( i*8 + j ) ] - '0' );
		int power = static_cast< int >( pow( 10.0, static_cast< double >( j ) ) );
		num[ i ] += figure * power;
	}

	unsigned num[10];
	int digit;
	string numStr;
};

int main(){
	int n;
	string s;

	cin >> n;

	largeInt* a = new largeInt[ n ];
	largeInt* b = new largeInt[ n ];

	for ( int i = 0; i < n; ++i ){
		cin >> s;
		a[ i ].set( s );
		cin >> s;
		b[ i ].set( s );
	}

	for ( int i = 0; i < n; ++i ){
		if ( a[ i ].getDigit() > 80 || b[ i ].getDigit() > 80 ){
			cout << "overflow" << endl;
			continue;
		}
		a[ i ] += b[ i ];
		cout << ( a[ i ].getDigit() > 80 ? "overflow" : a[ i ].getFigure() ) << endl;
	}

	delete[] a;
	delete[] b;

	return 0;
}