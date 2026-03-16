#include<iostream>
#include<cstdio>
#include <cstring>
using namespace std;

int dp[1005];

int main() {
    int n,w,t=1;
    while(scanf("%d", &w), w) {
        memset(dp, -1, sizeof(dp));
        scanf("%d", &n);
        dp[0] = 0;

        int v,x;
        for(int i=0; i<n; ++i) {
            scanf("%d,%d", &v,&x);
            for(int j=w; j>=0; --j) {
                if(dp[j] == -1 || j+x > w) continue;
                dp[j+x] = max(dp[j+x],dp[j]+v);
            }
        }

        int ans = 0,ai = 0;
        for(int j=0; j<=w; ++j) {
            if(ans < dp[j]) ai = j;
            ans = max(ans, dp[j]);
        }
        printf("Case %d:\n%d\n%d\n", t++, ans, ai);
    }
}