#include <bits/stdc++.h>  

using namespace std;

#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; -i)
#define INF (1 << 20)
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

int N, M, K;
int a, b, Cost, Time;
int tTime[101][101];
int tCost[101][101];

int main() {
	while(scanf("%d %d", &N, &M), N||M) {
		FOR(i, 1, M + 1) FOR(j, 1, M + 1) {
			tTime[i][j] = 1000000;
			tCost[i][j] = 1000000;
		}
		rep(i, N) {
			scanf("%d %d %d %d", &a, &b, &Cost, &Time);
			tTime[a][b] = tTime[b][a] = Time;
			tCost[a][b] = tCost[b][a] = Cost;
		}
		FOR(i, 1, M + 1) FOR(j, 1, M + 1) FOR(k, 1, M + 1) {
			tTime[j][k] = min(tTime[j][k], tTime[j][i] + tTime[i][k]);
			tCost[j][k] = min(tCost[j][k], tCost[j][i] + tCost[i][k]);
		}
		scanf("%d", &K);
		rep(i, K) {
			int p, q, r;
			scanf("%d %d %d", &p, &q, &r);
			printf("%d\n", (r) ? tTime[p][q] : tCost[p][q]);
		}
	}
	return 0;
}