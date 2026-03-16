#include<bits/stdc++.h>
using namespace std;
bool prime[10002];
int main() {
	for(int i = 2; i * i <= 10000; i++) {
		if(prime[i]) continue;
		for(int j = i * i; j < 10000; j+=i) {
			prime[j] = true;
		}
	}
	int n;
	while(cin >> n,n) {
		for(int i = n; i >= 3; i--) {
			if(!prime[i] && !prime[i-2]) {
				printf("%d %d\n", i - 2, i);
				break;
			}
		}
	}

	return 0;
}