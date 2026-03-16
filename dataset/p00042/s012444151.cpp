#include <cstdio>
#include <cstring>
#define max(a,b) a>b?a:b
#define N_MAX 1000
int main() {
    int w, n, cnt = 1;
    int val[N_MAX],g[N_MAX],dp[N_MAX+1];

    while (scanf("%d%d", &w, &n), w){
        for (int i = 0; i < n; i++) {
            scanf("%d,%d", val+i, g+i);
        }
        memset(dp, -1, sizeof(dp));
        dp[0] = 0;
        for (int i = 0; i < n; i++){
            for (int j = w-g[i]; j>= 0; j--)
                if (dp[j]>=0) dp[j+g[i]] = max(dp[j+g[i]], dp[j]+val[i]);
        }
        int p = 0, q = 0;
        for (int i = 0; i <= w; i++) {
            if (dp[i]>p) {
                p = dp[i];
                q = i;
            }
        }

        printf("Case %d:\n%d\n%d\n", cnt++, p, q);
    }
    return 0;
}