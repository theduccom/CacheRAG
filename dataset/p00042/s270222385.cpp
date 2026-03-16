/*#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	
	return 0;
}*/
/*
1
y eazqyp pnop pngtg ye obmpngt xmybp mr lygw
*/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
 
#define rep(i,n) for(int i=0; i<n; i++)
int dp[1001][1001];
 
int main(){
    int W, cnt=1;
    while( cin >> W, W ){
        int n, v[1000], w[1000];
        memset( dp, 0, sizeof(dp) );
        cin >> n;
        rep(i,n){
            scanf("%d,%d", &v[i], &w[i]);
        }
        dp[0][0] = 0;
    	
        
    	rep(i,n){
            rep(j,W+1){
                if( j<w[i] )
                    dp[i+1][j] = dp[i][j];
                else
                    dp[i+1][j] = max( dp[i][j], dp[i][j-w[i]]+v[i] );
            }
        }
        int mw = 0;
        rep(i,W+1){
            if( dp[n][i]>dp[n][mw] ) mw = i;
        }
    	
    	/*for(int i = 0;i < n;i++){
    		for(int j = 0;j < W+1;j++){
    			cout << dp[i][j] << " ";
    		}
    		cout << endl;
    	}*/
    	
        cout << "Case " << cnt << ":" << endl;
        cnt++;
        cout << dp[n][mw] << endl;
        cout << mw << endl;
    }
	return 0;
}
/*
20
5
60,5
100,10
120,15
210,20
10,2
*/