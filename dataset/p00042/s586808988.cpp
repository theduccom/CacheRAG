#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int W,N,v,w,i,j;
  int cnt=0,maxv,maxw;
  vector< vector<int> > dp;
  while(cin>>W>>N,W){
    vector< vector<int> > dp(N+2,vector<int>(W+1));
    for(i=1;i<=N;i++){
      scanf("%d,%d",&v,&w);
      for(j=0;j<=W;j++){
	if(j>=w && dp[i-1][j] < dp[i-1][j-w]+v)dp[i][j]=dp[i-1][j-w]+v;
	else dp[i][j]=dp[i-1][j];
      }
    }
    maxv=maxw=0;
    for(j=0;j<=W;j++){
      if(maxv<dp[N][j]){maxv=dp[N][j];maxw=j;}
    }
    printf("Case %d:\n%d\n%d\n",++cnt,maxv,maxw);
  }
}