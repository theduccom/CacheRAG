#include<functional>
#include<algorithm>
#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
using namespace std;
const double INF=100000000;

int main(){
  int n,m;
  cin>>n>>m;
  int dp[n][n];

  rep(i,n){
    rep(j,n){
      dp[i][j]=i==j?0:INF;
    }
  }
  rep(i,m){
    int a,b,c,d;
    char e;
    cin>>a>>e>>b>>e>>c>>e>>d;
    dp[a-1][b-1]=c;
    dp[b-1][a-1]=d;
  }
  int s,g,V,P;
  char e;
  cin>>s>>e>>g>>e>>V>>e>>P;

  rep(k,n){
    rep(i,n){
      rep(j,n){
	dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
      }
    }
  }
  
  
  cout<<V-P-dp[s-1][g-1]-dp[g-1][s-1]<<endl;
  
  
  return 0;
}
     