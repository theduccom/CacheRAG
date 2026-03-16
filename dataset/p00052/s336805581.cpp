#include<iostream>

using namespace std;

int main(void){
	while( 1 ){
		int fives = 0;
		int n;

		cin >> n;
		if( n == 0 ) break;

		for(int i = n; i >= 1; i--){
			int t = i;
			while( 1 ){
				if( t > 0 && t % 5 == 0 ){
					t /= 5;
					fives++;
				}else break;
			}
		}
		cout << fives << endl;
	}
	return 0;
}