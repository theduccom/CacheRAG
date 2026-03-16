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
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int dp[105][105][2], n, m;

int main(){
    int l;
    int a, b, c, d;
    int st, en, de;

    while(cin >> n >> m, n||m){
        rep(i, 105){
            rep(j, 105){
                rep(k, 2){
                    dp[i][j][k] = 2 << 24;
                }
            }
        }

        rep(i, n){
            cin >> a >> b >> c >> d;
            dp[a][b][0] = dp[b][a][0] = c;
            dp[a][b][1] = dp[b][a][1] = d;
        }

        rep(k, m+1){
            rep(i, m+1){
                rep(j, m+1){
                    dp[i][j][0] = min(dp[i][k][0] + dp[k][j][0], dp[i][j][0]);
                    dp[i][j][1] = min(dp[i][k][1] + dp[k][j][1], dp[i][j][1]);
                }
            }
        }

        cin >> l;
        rep(i, l){
            cin >> st >> en >> de;
            cout << dp[st][en][de] << endl;
        }
    }
}