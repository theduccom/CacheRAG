#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,prime[50000] = {0},c;
	bool f = true;
	prime[2] = 1;
	for(int i = 3;i < 50000;++i){
		for(int j = 2;j <= sqrt(i);++j){
			if(i % j == 0) f = false;
		}
		if(f) prime[i] = 1;
		f = true;
	}
	while(cin >> n,n){
		c = 0;
		for(int i = 0;i <= n/2;++i){
			if(prime[i] == 1 && prime[n-i] == 1) ++c;
		}
		cout << c << endl;
	}
	return 0;
}