#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
bool prime[50001];
void eratosutenesu(){
	fill(prime, prime + 50001, true);
	prime[0] = false; prime[1] = false;
	for(int i = 2; i * i <= 50000; i++){
		if(prime[i] == true){
			for(int j = 2;; j++){
				if(j * i > 50000) break;
				prime[j * i] = false;
			}
		}
	}
	return;
}
int main(){
	eratosutenesu();
	for(;;){
		int n;
		cin >> n;
		if(n == 0) break;
		int ans = 0;
		for(int i = 1; i <= n / 2; i++){
			if(prime[i] && prime[n - i]) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}