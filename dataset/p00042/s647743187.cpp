#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define N 1000
#define W 1000
int dp[N+1][W+1];
int value[N+1], weight[N+1];
int main()
{
    for (int I=1; ; ++I) {
        memset(dp, 0, sizeof(dp));
        int w; scanf("%d", &w); if (!w) break;
        int n; scanf("%d", &n);
        for (int i=0; i<n; ++i) scanf("%d,%d", value+i, weight+i);

        for (int i=1; i<=n; ++i) {
            for (int j=1; j<=w; ++j) {
                if (j >= weight[i-1] )
                    dp[i][j]
                        = max(dp[i-1][j], dp[i-1][j-weight[i-1]] + value[i-1]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        int resv = 0, resw;
        for (int i=w; i>=1; --i)
            if (resv <= dp[n][i]) { resv = dp[n][i], resw = i; }
        printf("Case %d:\n%d\n%d\n", I, resv, resw);
    }
    return 0;
}