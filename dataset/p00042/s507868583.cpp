#include<iostream>
#include<cstdio>
#include<deque>
#include<algorithm>
#include<functional>
using namespace std;
int n,w;
pair<int,int> tre[1005];

int dp[1005][1005];//現在調べてる宝ID,重さの総和
int solve(){

  for(int i=0;i<n;i++){
    for(int j=0;j<=w;j++){
      if(j<tre[i].second) dp[i+1][j]=dp[i][j];
      else dp[i+1][j]= max(dp[i][j],dp[i][j-tre[i].second] + tre[i].first);
    }
  }

  int temp=dp[n][w];
  int ret=w;
  for(int i=w;i>0;i--){
    if(temp <= dp[n][i]) ret=i;
    else break;
  }
  return ret;

}

main(){
  int cas=1;
  while(1){
    cin >> w;
    if(!w) break;
    cin >> n;
    for(int i=0;i<n;i++) scanf("%d,%d",&tre[i].first,&tre[i].second);
    int res=solve();
    printf("Case %d:\n",cas);
    printf("%d\n%d\n",dp[n][w],res);
    cas++;
  }

}