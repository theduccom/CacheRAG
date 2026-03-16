#include<bits/stdc++.h>
#include<string>
#include<cctype>
#include<cmath>
#include<queue>
#include<stack> 
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
const int MAX_V=105;
int INF = 1000000000;
  
int main(){
  int n=1;
  int W,N,i,j;
  while(cin >> W ,W){
    cin >> N;
    int dp[N+1][W+1];
    rep(i,N+1){
      rep(j,W+1){
        dp[i][j]=0;
      }
    }

    rep(i,N){
      int v,w;
      char c;
      cin >> v >> c >> w;
      rep(j,W+1){
        dp[i+1][j]=max(dp[i][j],dp[i+1][j]);
        if(j+w<W+1){
        dp[i+1][j+w]=max(dp[i][j]+v,dp[i+1][j+w]);
        }
      }
    }
    int value1=0;
    int weight=0;
/*    rep(j,W+1){
      if(dp[N][j]>value1){
        value1=dp[N][j];        
      }
}*/
    rep(j,W+1){
      if(dp[N][j]==dp[N][W]){
        weight=j;
        break;
      }
    }
    
    cout << "Case" << ' ' << n++ << ":" << endl;
    cout << dp[N][W]<< endl;
    cout << weight << endl;  
    
  }
    return 0;
}
 