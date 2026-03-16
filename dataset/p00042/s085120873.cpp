#include <bits/stdc++.h>
using namespace std;

#define  req(i,r,k) for(int i=k;i<r;i++)
#define  rep(i,r) req(i,r,0)

const long long int INF = 100000000000000;

long long int dp[1002][1002];

int main() {

    for(int a=1;1;a++){
        int w,n;
        scanf(" %d",&w);
        if(w==0) break;
        scanf(" %d",&n);
        pair<int,int> t[n];
        char c;
        rep(i,n){
            scanf(" %d%c%d",&t[i].first,&c,&t[i].second);
        }

        rep(i,w){
            dp[0][i] = 0;
            dp[i][0] = 0;
        }

        dp[0][0] = 0;
        rep(i,n+1) {
            rep(j,w+1) {
                if(j >= t[i].second) {
                    dp[i+1][j] = max(dp[i][j], dp[i][j - t[i].second] + t[i].first);
                }
                else{
                    dp[i+1][j] = dp[i][j];
                }
            }
        }
        long long int maxvalue=0,thenweight=0;

        rep(i,w+1){
            //cout << dp[i] << " " << i << " " << thenweight << endl;
            if(maxvalue < dp[n][i]){
                maxvalue = dp[n][i];
                thenweight = i;
            }
        }

        //printf("Case %d:\n%lld\n%lld\n",a,maxvalue,thenweight);
        cout << "Case " << a << ':' << endl;
        cout << maxvalue << endl;
        cout << thenweight << endl;
    }
    return 0;
}