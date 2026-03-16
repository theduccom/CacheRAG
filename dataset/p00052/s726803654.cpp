#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while(cin >> n && n){
		long long sum = 1;
		int ans = 0;
		while(n >= 5){
			n /= 5;
			ans += n; 
		}
		cout << ans << endl;
	}
	return 0;
}