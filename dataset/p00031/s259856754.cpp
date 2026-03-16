#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(cin >> n){
		bool flag = true;
		for(int i = 1; i <= 512; i *= 2){
			if(n & i){
				if(flag){
					cout << i;
					flag = false;
				}
				else cout << " " << i;
			}
		}
		cout << endl;
	}
	return 0;
}