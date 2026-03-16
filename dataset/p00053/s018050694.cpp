#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

bool is_prime[1000001];
int prime_sum[1000001];
int main() {
	memset(is_prime, 1, sizeof(is_prime));
	is_prime[0] = is_prime[1] = false;
	int p = 0, cnt = 0;
	for (int i = 2; i <= 1000000; i++) {
		if (is_prime[i]) {
			cnt += i;
			prime_sum[++p] = cnt;
			for (int j = i * 2; j <= 1000000; j += i)is_prime[j] = false;
		}
	}
	int n;
	while (scanf("%d", &n), n)printf("%d\n", prime_sum[n]);
	return 0;
}