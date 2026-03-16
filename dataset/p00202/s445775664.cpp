#include <cstdio>
#include <algorithm>
using namespace std;
#define REP(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) REP(i, 0, n)
#define M 1000001
bool p[M];
int dish[31];
int dp[M];
int n, x;
int main()
{
	rep(i, M) p[i] = true;
	p[0] = p[1] = false;
	for (int i = 2; i * i < M; ++i)
		for (int j = 2 * i; j < M; j += i)
			if (p[j]) p[j] = false;

	while (true) {
		scanf("%d%d", &n, &x);
		if ((n | x) == 0) break;
		rep(i, n) scanf("%d", dish + i);
		
		rep(j, x+1) dp[j] = -1;
		dp[0] = (1<<20);

		int k = 1;
		rep(i, n) REP(j, 1, x+1) {
			if (dp[j] >= 0)
				dp[j] = (1<<20);
			else if (j < dish[i] || dp[j-dish[i]] <= 0)
				dp[j] = -1;
			else
				dp[j] = dp[j-dish[i]] - 1;
		}
		int res = 0;
		rep(j, x+1) if (p[j] && dp[j] >= 0) res = j;
		if (res > 0)
			printf("%d\n", res);
		else
			puts("NA");
	}
	return 0;
}