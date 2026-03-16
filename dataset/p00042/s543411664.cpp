#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
  int dp[1001][1001];
  int n,W;
  int v[1000],w[1000];
  int num=0;
  char c;
  int cnt=0;
  while(1){
    cin>> W;
    if(W==0) break;
    cin>> n;
    cnt++;
    for(int i=0;i<=n;i++){
      for(int j=0;j<=W;j++){
	dp[i][j]=0;
      }
    }
    for(int i=1;i<=n;i++){
      scanf("%d,%d",&v[i],&w[i]);
    }

    for(int i=1;i<=n;i++){
      for(int j=1;j<=W;j++){
	if(j<w[i]){
	  dp[i][j]=dp[i-1][j];
	} else {
	  dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
	}
      }
    }

    int ansv=0,answ=0;
    for(int i=1;i<=W;i++){
      if(ansv<dp[n][i]){
	ansv=dp[n][i]; answ=i;
      }
    }
    printf("Case %d:\n%d\n%d\n",cnt,ansv,answ);
  }
}