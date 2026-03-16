#include<iostream>
using namespace std;

int main(){
	int n, x;
	while(cin >> n, n){
		int a[10] = {0};
		for(int i = 0; i < n; i++){
			cin >> x;
			a[x]++;
		}

		for(int i = 0; i < 10; i++){
			if(a[i] == 0){
				cout << "-" << endl;
				continue;
			}
			for(int j = 0; j < a[i]; j++){
				cout << "*";
			}
			cout << endl;
		}
	}
}