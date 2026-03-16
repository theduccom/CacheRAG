#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#include<algorithm>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int dp[1005][1005];

int main(){
    int n,m;
    while(cin >> n >> m){
        rep(i,1005){
            rep(j, 1005){
                dp[i][j] = 2 << 24;
            }
        }
        rep(i,m){
            int a, b, c ,d;
            scanf("%d%*c%d%*c%d%*c%d",&a, &b, &c, &d);
            dp[a][b] = c;
            dp[b][a] = d;
        }
        int st, ed, in, out;
        scanf("%d%*c%d%*c%d%*c%d",&st, &ed, &in, &out);
        rep(k,n + 1){
            rep(i,n + 1){
                rep(j,n + 1){
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
                }
            }
        }
        cout << in - out - dp[st][ed] - dp[ed][st] << endl;
    }
}