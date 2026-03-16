#include <bits/stdc++.h>  
 
using namespace std;
 
#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

#define MAX 200000
int N;
bool prime[MAX];

int main() {
	memset(prime, true, sizeof(prime));
	prime[0] = false;
	for(int i = 1; i < sqrt(MAX); ++i) {
		if(prime[i]) {
			for(int j = (i + 1); (i + 1) * j <= MAX; ++j) {
				prime[(i + 1) * j - 1] = false;
			}
		}
	}
	while(scanf("%d", &N), N) {
		int cnt = 0;
		ll ans = 0;
		for(int i = 1; i < MAX; ++i) {
			if(prime[i]) {
				ans += i + 1;
				++cnt;
				if(cnt == N) break;
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}