#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

bool is_prime[1000001];
bool dp[1000001];
int a[31];
int main() {
	memset(is_prime, 1, sizeof(is_prime));
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= 1000000; i++) {
		if (is_prime[i]) {
			for (int j = i * 2; j <= 1000000; j += i)is_prime[j] = false;
		}
	}
	int n, x;
	while (cin >> n >> x, n) {
		rep(i, n)scanf("%d", &a[i]);
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		rep(i, x + 1) {
			rep(j, n)
				if (dp[i] && i + a[j] <= x)dp[i + a[j]] = true;
		}
		bool flag = true;
		for (int i = x; i > 0; i--) {
			if (dp[i] && is_prime[i]) {
				printf("%d\n", i);
				flag = false;
				break;
			}
		}
		if (flag)printf("NA\n");
	}
}