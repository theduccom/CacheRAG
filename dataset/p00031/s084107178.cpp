#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, a[] = {1,2,4,8,16,32,64,128,256,512};
	bool r[10];
	while(cin >> n){
		fill(r, r+10, false);
		for(int s = 9;0 < n && 0 <= s;s--){
			if(n >= a[s]){r[s] = true;n -= a[s];}
		}
		bool f = false;
		for(int i = 0;i < 10;i++){
			if(r[i] == true){
				if(f == true)cout << " ";
				cout << a[i];f = true;
			}
		}
		cout << endl;
	}
	return 0;
}