#include<iostream>
using namespace std;

int main(){
	int sold[10], n;
	while( cin >> n, n ){
		for( int i=0; i<10; i++ )	sold[i]=0;
		for( int i=0; i<n; i++ ){
			int k;
			cin >> k;
			sold[k]++;
		}
		for( int i=0; i<10; i++ ){
			if( sold[i] == 0 )
				cout << "-" << endl;
			else{
				for( int j=0; j<sold[i]; j++ )
					cout << "*";
				cout << endl;
			}
		}
	}
	return 0;
}