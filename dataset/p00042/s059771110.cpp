#include <cstdio>
#include <algorithm>
using namespace std;

int cnt, W, N, w[1000], v[1000], dp[1001][1001];

void solve(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= W; j++){
            dp[i+1][j] = 0;
        }
    }
    for(int i = 0; i < N; i++){
        dp[i+1][w[i]] = v[i];
        for(int j = 0; j <= W; j++){
            if( j < w[i] ) dp[i+1][j] = dp[i][j];
            else dp[i+1][j] = max(dp[i][j], dp[i][j-w[i]] + v[i]);
        }
    }
    int c,v = 0;
    for(int i = 0; i <= W; i++){
        if( dp[N][i] > v ){
            v = dp[N][i];
            c = i;
        }
    }
    printf("Case %d:\n%d\n%d\n", cnt, v, c);
}

int main(){
    cnt = 0;
    while( true ){
        cnt++;
        scanf("%d", &W);
        if( !W ) break;
        scanf("%d", &N);
        for(int i = 0; i < N; i++){
            scanf("%d,%d", v+i, w+i);
        }
        solve();
    }
    return 0;
}