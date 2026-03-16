#include<iostream>

using namespace std;

int main(void){
	bool bFirst = true;
	while( true ){
		int a, b;
		bool bFound = false;

		cin >> a >> b;
		if( a==0 && b==0 ) break;
		
		if( bFirst ){
			bFirst = false;
		}else cout << endl;

		for(int i = a; i <= b; i++){
			if( i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)){
				bFound = true;
				cout << i << '\n';
			}
		}
		if( !bFound ) cout << "NA\n";
	}
	return 0;
}