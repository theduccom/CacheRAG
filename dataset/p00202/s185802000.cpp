#include <iostream>
#include <cstring>
using namespace std;

#define REP(i,n,m) for(int i=n;i<m;i++)
#define rep(i,n) REP(i,0,n)

int n,x;
int t[1000000];
bool dp[32][1000002];

bool p[1000002];

void solve(){
  memset(dp,0,sizeof(dp));
  dp[0][0] = true;

  rep(i,n){
    rep(j,x+1){
      if(j < t[i]){
        dp[i+1][j] = dp[i][j];
      }
      else{
        dp[i+1][j] = dp[i][j] || dp[i+1][j-t[i]];
      }
    }
  }

  int i;
  for(i=x;i>0;i--){
    if(p[i] && dp[n][i]){
      break;
    }
  }

  if(i != 0){
    cout<<i<<endl;
  }
  else{
    cout<<"NA\n";
  }
}

int main(){
  memset(p,true,sizeof(p));
  p[0] = p[1] = false;

  for(int i=2;i*i<=1000000;i++){
    if(p[i]){
      for(int j=i+i;j<=1000000;j+=i){
        p[j] = false;
      }
    }
  }

  while(cin>>n>>x,n||x){
    rep(i,n){
      cin>>t[i];
    }
    solve();
  }
}