#include <iostream>
#include <bitset>

using namespace std;


int main(int argc, char const* argv[])
{
	unsigned long weight;
	int count = 0;
	while( cin >> weight ){
		count = 0;
		bitset<16> a( weight );
		for( int i = 0;i < 10;i++ ){
			if( a[i] == 1 ){ cout << ( ( count == 0 ) ? "" : " " ) << ( 1 << i ); count++;}
		}
		cout << endl;
	}
	return 0;
}