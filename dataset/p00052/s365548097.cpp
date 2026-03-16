#include <iostream>
using namespace std;

int main(){
	int n;

	while ( cin >> n ){
		if ( !n ) break;
		int zero = 0;
		while ( n /= 5 ){
			zero += n;
		}

		cout << zero << endl;
	}
	return 0;
}