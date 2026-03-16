#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int Prime[100000];

bool IsPrime(int n){
	if(n <= 1) return false;
	if(n == 2) return true;
	for (int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

void solve(){
	int cnt = 0;	
	for(int i = 2; i < 110000; i++){
		if(IsPrime(i)) {
			Prime[cnt] = i;
			// cout << i << endl;
			cnt++;
		}
	}
	while(1){
		int n;
		cin >> n;
		if(n == 0) break;
		int ans = 0;
		for(int i = 0; i < n; i++){
			ans = ans + Prime[i];
		}
		cout << ans << endl;
	}
}

int main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
	solve();
	return 0;
}