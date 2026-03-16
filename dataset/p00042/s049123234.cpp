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

int main(){
    int W,N,Case = 1;
    while(cin >> W, W){
        int dp[1005][1005] = {0};
        cin >> N;
        range(i,1,N+1){
            int w, v;
            scanf("%d%*c%d", &v, &w);
            range(j,1,W+1){
                if(j - w >= 0)
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w] + v);
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        range(i,1,W+1){
            if(dp[N][i] == dp[N][W]){
                cout << "Case " << Case << ':' << endl << dp[N][W] << endl << i << endl;;
                break;
            }
        }
        Case++;
    }
}