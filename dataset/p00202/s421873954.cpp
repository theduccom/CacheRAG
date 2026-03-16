#include <stdio.h>
int n, x, a[30]; bool dp[1000001], prime[1000001];
int main() {
	for(int i = 2; i <= 1000000; i++) prime[i] = true;
	for(int i = 2; i <= 1000; i++) {
		if(!prime[i]) continue;
		for(int j = i * i; j <= 1000000; j += i) prime[j] = false;
	}
	while(scanf("%d%d", &n, &x), n) {
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		for(int i = 0; i < x; i++) dp[i + 1] = false; dp[0] = true;
		for(int i = 1; i <= x; i++) {
			for(int j = 0; j < n; j++) {
				if(i - a[j] >= 0) dp[i] = dp[i] || dp[i - a[j]];
			}
		}
		bool flag = false;
		for(int i = x; i >= 1; i--) {
			if(dp[i] && prime[i]) {
				printf("%d\n", i); flag = true; break;
			}
		}
		if(!flag) printf("NA\n");
	}
}