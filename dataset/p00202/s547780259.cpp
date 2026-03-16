#include <bits/stdc++.h>

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<int, P> Pi;

#define MAX 1000000

bool prime[1000000];
int N, X;
int price[30];
int dp[MAX + 1];

void PrimeJudge() {
	memset(prime, true, sizeof(prime));
	prime[0] = false;
	FOR(i, 1, sqrt(MAX)) {
		if(prime[i]) {
			for(int j = (i + 1); (i + 1) * j <= MAX; ++j) {
				prime[(i + 1) * j - 1] = false;
			}
		}
	}
	return;
}

int main() {
	PrimeJudge();
	while(scanf("%d %d", &N, &X), N || X) {
		memset(dp, 0, sizeof(dp));
		rep(i, N) scanf("%d", &price[i]);
		rep(i, N) FOR(j, price[i], X + 1) {
			dp[j] = max(dp[j], dp[j - price[i]] + price[i]);
		}
		bool flag = false;
		for(int i = X; i >= 0; --i) if(dp[i] - 1 >= 0) {
			if(prime[dp[i] - 1]) {
				printf("%d\n", dp[i]);
				flag = true;
				break;
			}
		}
		if(!flag) printf("NA\n");
	}
	return 0;
}