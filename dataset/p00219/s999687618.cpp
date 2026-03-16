#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,a[10],t;
	while(cin >> n,n){
		for(int i = 0;i < 10;i++) a[i] = 0;
		for(int i = 0;i < n;i++){
			cin >> t;
			a[t]++;
		}
		for(int i = 0;i < 10;i++){
			if(a[i] == 0) cout << "-" << endl;
			else {
				for(int j = 0;j < a[i];j++) cout << "*";
				cout << endl;
			}
		}
	}
	return 0;
}