#include <bits/stdc++.h>
using std::cout;
using std::endl;
using std::cin;

int main(){
	int n;
	while(cin >> n, n){
		int c = 0;
		while(n){
			c += n / 5;
			n /= 5;
		}
	
		cout << c << endl;
	}
	return 0;
}

