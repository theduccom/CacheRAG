#include<iostream>

using namespace std;

int main() {
	int n;
	int ice[10] = {0};
	int hoge;
	while (cin >> n,n) {
		for ( int i = 0; i< 10; i++ ) {
			ice[i] = 0;
		}
		
		for ( int i = 0; i < n; i++ ) {
			cin >> hoge;
			ice[hoge]++;
		}
		
		for ( int i = 0; i < 10; i++ ) { 
			if ( !ice[i] ) { 
				cout << "-";
			} else {
				for ( int j = 0; j < ice[i]; j++ ) {
					cout << "*";
				}
			}
			cout << endl;
		}
	}
	
	return 0;
}