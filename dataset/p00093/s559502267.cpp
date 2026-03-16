#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
	int a,b;
	int c = 0;

	while( cin >> a >> b && a ){
		c++;
		int count = 0;
		if( c > 1 ) cout << endl;
		for( int i = a;i <= b;i++ ){
			if( !(i % 4) ){
				if( !(i % 400) ){count++; cout << i << endl; continue;}
				else if( !(i%100) ) continue;
				cout << i << endl;
				count++;
			}
		}
		if( count == 0 ) cout << "NA" << endl;
	}
	return 0;
}