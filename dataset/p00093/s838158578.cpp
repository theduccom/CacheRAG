#include <iostream>
using namespace std;

int main(){
	int a, b;
	bool first = true;

	while( cin >> a >> b && !( a == 0 && b == 0 ) ){
		if( first ){
			first = false;
		}else{
			cout << endl;
		}
		bool exist = false;
		for( int i = a + ( 4 - a%4 ) % 4; i <= b; i += 4 ){
			exist = true;
			if( i % 400 != 0 && i % 100 == 0 ){
				continue;
			}
			cout << i << endl;
		}
		if( !exist ){
			cout << "NA" << endl;
		}
	}

	return 0;
}