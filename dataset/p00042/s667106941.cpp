#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

/*
int cost,n;
int V[3000],C[3000];
int dp[1100][1100];
int therock=0;
int tt=0;


int rec(int a,int b){
  int res=0;
  if(a == n){
 if(tt<=res){
      cout << "tt  = " << b+C[a] << endl;
therock=b+C[a];
      tt=res;
    }


return 0;
}
  if(dp[a][b] != -1){
 if(tt<=res){
      cout << "tt  = " << b+C[a] << endl;
therock=b+C[a];
      tt=res;
    }

return dp[a][b];
  }
  
  // cout << "rest =" << therock << endl;
  if(cost<b+C[a]){
 if(tt<=res){
      cout << "tt  = " << b+C[a] << endl;
therock=b+C[a];
      tt=res;
    }

    return 0;
  }
  else{
    res = max(rec(a+1,b),rec(a+1,b+C[a])+V[a]);
    if(tt<=res){
      cout << "tt  = " << b+C[a] << endl;
therock=b+C[a];
      tt=res;
    }
  }
  
  return dp[a][b]= res;

}



int main(){
  int g=1;

  while(1){
    cin >> cost;
    if(cost == 0)break;
    cin >> n;

    for(int i=0;i<n;i++){
      scanf("%d,%d",&V[i],&C[i]);
    }
    memset(dp,-1,sizeof(dp));
    cout << "Case " << g << ":" << endl;
    cout << rec(0,0) << endl;
       
    for(int i=0;i<n;i++){
      for(int j=0;j<cost;j++){
	cout << dp[i][j] << " ";
      }
      cout << endl;
    }

      cout << therock << endl;
    g++;
    therock=0;
  }




}
*/
int n,m;
int V[1100],C[1100];
int dp[1100][1100];
int cc=0;
void solve(){
  for(int i=0;i<m;i++){
    for(int j=0;j<=n;j++){
      if(j<C[i]){
	dp[i+1][j]=dp[i][j];
      }else{
	dp[i+1][j]=max(dp[i][j],dp[i][j-C[i]]+V[i]);
      }
    }
  }
  cout << dp[m][n] << endl;
  for(int i=0;i<=n;i++){
    if(dp[m][i] == dp[m][n]){
      cout << i << endl;
      break;
    }
  }
  


}


int main(){

  int ghc=1;
  while(1){
    cin >> n ;
    if(n == 0)break;
    cin >> m;

    for(int i=0;i<m;i++)scanf("%d,%d",&V[i],&C[i]);
    memset(dp,0,sizeof(dp));
    cout << "Case " << ghc << ":" << endl;
    solve();
    ghc++;
  }


}