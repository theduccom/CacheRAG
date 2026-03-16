#include<bits/stdc++.h>
using namespace std;
int MOD = 1000000007;
int main(){
    int w, n;
    int ct = 1;
    while(cin >> w >> n, w){
    int va[n], we[n];
    for(int i = 0; i < n; i++)  scanf("%d, %d",&va[i], &we[i]);
    int dp[1010][1010];
    for(int i = 0; i < 1010; i++)
        for(int j = 0; j < 1010; j++)
            dp[i][j] = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j <= w; j++){
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
            if(j + we[i] <= w)
                dp[i + 1][j + we[i]] = max(dp[i + 1][j + we[i]], dp[i][j] + va[i]);
        }
    int macs = 0, sumwe = 1010;
    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= w; j++)
            if(dp[i][j] == dp[n][w])
                sumwe = min(j, sumwe);
    cout << "Case " << ct << ":" << endl << dp[n][w] << endl << sumwe << endl;
    ct++;
    }
    return 0;
}