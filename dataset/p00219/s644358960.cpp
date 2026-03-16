#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
	int n;
	int seel[10];

	while( cin >> n && n != 0 ){
		for( int i = 0;i < 10;i++ ) seel[i] = 0;
		for( int i = 0;i < n;i++ ){
			int a;
			cin >> a;
			++seel[a];
		}

		for( int i = 0;i < 10;i++ ){
			if( seel[i] == 0 ) cout << '-' << endl;
			else {for( int j = 0;j < seel[i];j++ ) cout << '*';cout << endl;}
		}
	}
	return 0;
}