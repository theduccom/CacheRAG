#include <bits/stdc++.h>

using namespace std;

int cnt,W,N,v[1000],w[1000],dp[1001][1001],ca;

int main(){
  while(1){
    scanf("%d",&W);
    if(W==0) break;
    cnt++;
    scanf("%d",&N);
    
    for(int i = 0;i <N;i++){
      int a,b;
      scanf("%d,%d",&b,&a);
      v[i] = b;
      w[i] = a;
    }


    for(int i=0;i<N;i++){
      for(int j=0;j<=W;j++){
        if(w[i]>j){
          dp[i+1][j]=dp[i][j];
        }else{
          dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
        }
      }
    }
    int ans_v=dp[N][W],ans_w=W;
    for(int i=W;i>=0;i--){
      if(dp[N][i]<ans_v) break;
      else{
        ans_w=i;
      }
    }

    printf("Case %d:\n%d\n%d\n",cnt,ans_v,ans_w);

    for(int i=0;i<1000;i++){
      w[i]=v[i]=0;
    }
    memset(dp,0,sizeof(dp));
  }
  return 0;
}