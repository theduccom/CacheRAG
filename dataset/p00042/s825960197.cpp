#include <bits/stdc++.h>

#define FOR(i, n, m) for(int i = (n);i < (m);i++)
#define REP(i, n) for(int i = 0;i < (n);i++)
#define PII pair<int, int>

typedef long long int lli;

using namespace std;

int n, W;
int v[1000], w[1000];

int main(void){
    int cs = 1;
    while(cin >> W && W){
        int dp[1000+1][1000+1] = {};
        cin >> n;
        REP(i, n){
            int a, b;
            scanf("%d, %d", &a, &b);
            v[i] = a;
            w[i] = b;
        }

        REP(i, n){
            REP(j, W+1){
                if(j < w[i]){
                    dp[i+1][j] = dp[i][j];
                }else{
                    dp[i+1][j] = max(dp[i][j], dp[i][j-w[i]] + v[i]);
                }
            }
        }

        cout << "Case " << cs << ":" << endl;
        cout << dp[n][W] << endl;
        int min_w = 100000000;
        REP(j, W+1){
            if(dp[n][j] == dp[n][W])
                min_w = min(min_w, j);
        }
        cout << min_w << endl;
        cs++;
    }
    return 0;
}