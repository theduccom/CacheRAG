#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int W,n;
int dno=0;
int v[1000],w[1000];
int dp[1001][1001];
int r(int i,int j){
  int rv;
  if(dp[i][j]>=0) return dp[i][j];
  if(i==n) rv=0;
  else if(j<w[i]) rv=r(i+1,j);
  else  rv=max(r(i+1,j),r(i+1,j-w[i])+v[i]);
  dp[i][j]=rv;
  return rv;
}
int main(){
  while(1){
    dno++;
    cin>>W;
    if(W==0) break;
    cin>>n;
    for(int i=0;i<n;i++) scanf("%d,%d",&v[i],&w[i]);
    memset(dp,-1,sizeof(dp));
    cout<<"Case "<<dno<<":"<<endl;
    int aw=0;
    for(int i=W;i>0;W--){
      if(aw>r(0,W)) break;
      aw=r(0,W);
    }
    cout<<aw<<endl;
    cout<<W+1<<endl;
  }
  return 0;
}