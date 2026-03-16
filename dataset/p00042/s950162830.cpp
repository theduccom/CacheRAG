#include<bits/stdc++.h>
#define MAX_N 1001
#define MAX_W 1001
using namespace std;


int dp[MAX_N][MAX_W];
int n,W;
int w[MAX_N];
int v[MAX_N];

void solve(int k){
  memset(dp,0,sizeof(dp));
  cout<<"Case "<<k<<":"<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<=W;j++){
      if(j>=w[i]){
	dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
      }else{
	dp[i+1][j]=dp[i][j];
      }
    }
  }
  int tmp=0;
  int weight;
  for(int i=0;i<=W;i++){
    if(dp[n][i]>tmp){
      tmp=dp[n][i];
      weight=i;
    }
  }
  cout << tmp << endl;
  cout << weight << endl;
}

int main(){
  int cnt=0;
  while(cin>>W,W){
    cnt++;
    cin>>n;
    for(int i=0;i<n;i++){
      scanf("%d,%d",&v[i],&w[i]);
    }
    solve(cnt);
  }

  return 0;
}