#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

#define MAX_N 1001
#define MAX_W 10001

int dp[MAX_W][MAX_N], W, N, value[MAX_N], w[MAX_N];

int main(){
    int Case = 0;
    
    while(true){
        for(int i = 0; i < MAX_N; ++i)
            memset(dp[i], 0, MAX_W);
        //initialize
        
        ++Case;
        scanf("%d%d", &W, &N);
        if(!W)
            break;
        for(int i = 0; i < N; ++i)
            scanf("%d,%d", &value[i], &w[i]);
        //input
        
        for(int i = 0; i < N; ++i){
            for(int j = 0; j <= W; ++j){
                if(j < w[i])
                    dp[i + 1][j] = dp[i][j];
                else
                    dp[i + 1][j] = std::max(dp[i][j - w[i]] + value[i], dp[i][j]);
            }
        }
        //solve
        
        int ans = dp[N][W];
        
        printf("Case %d:\n%d\n", Case, ans);
        
        int i = 0;
        while(true){
            if(ans != dp[N][W - i]){
                printf("%d\n", W - i + 1);
                break;
            }
            ++i;
        }
    }
    return 0;
}