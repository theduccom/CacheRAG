#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define onen(i,n) for(int i=1;i<n+1;i++)

const int MAXW = 1001, MAXN = 1001;
int dp[MAXN][MAXW], w[MAXN], v[MAXN];
int n, maxw;

int main()
{
    int setnum = 1;
    while(cin >> maxw && maxw)
    {
        memset(dp, 0, sizeof(dp));
        char t;
        
        cin >> n;
        REP(n)cin >> v[i] >> t >> w[i];

        rep(i,n)onen(j,maxw)
        {
            dp[i+1][j] = max(dp[i][j], dp[i+1][j-1]);
            if(j>=w[i] ){ dp[i+1][j] = max(dp[i+1][j] , dp[i][j - w[i] ] + v[i]); }
        }

        int maxv = -1, weight = 0;
        onen(j,maxw)if(dp[n][j] > maxv ) { maxv = dp[n][j]; weight = j;}
        
        cout << "Case " << setnum << ":" << endl;
        cout << maxv << endl;
        cout << weight << endl;
        setnum++;
    }

    return 0;

}