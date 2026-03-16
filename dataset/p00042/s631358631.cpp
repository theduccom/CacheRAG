#include <bits/stdc++.h>

#define ll long long
#define INF INT_MAX

using namespace std;

int main() {
    int ww;
    int index = 1;
    while(scanf("%d",&ww) && ww){
        int n;
        cin >> n;
        int v[n],w[n];
        int dp[n+1][2000];
        bool go[n+1][2000];
        memset(dp,0,sizeof(dp));
        memset(go,false,sizeof(go));
        for(int i = 0;i < n;i++){
            scanf("%d,%d",&v[i],&w[i]);
        }
        for(int i = n-1;i >= 0;i--){
            for(int j = 0;j <= ww;j++){
                if(j < w[i]){
                    dp[i][j] = dp[i+1][j];
                    go[i][j] = false;
                }else{
                    if(dp[i+1][j] < dp[i+1][j-w[i]]+v[i]){
                        dp[i][j] = dp[i+1][j-w[i]]+v[i];
                        go[i][j] = true;
                    }else{
                        dp[i][j] = dp[i+1][j];
                        go[i][j] = false;
                    }
                }
            }
        }
        cout << "Case " << index++ << ":" << endl;
        cout << dp[0][ww] << endl;
        int sumweight = 0;
        for(int i = 0;i < n;i++){
            if(go[i][ww]){
                sumweight += w[i];
                ww -= w[i];
            }
        }
        cout << sumweight << endl;
 
        // for(int j = 0;j <= n;j++){
        //     for(int i = 0;i <= ww ;i++){
        //         printf("%3d ",dp[j][i]);
        //     }
        //     cout << endl;
        // }
    }
	return 0;
}        