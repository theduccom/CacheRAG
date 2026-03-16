#include<bits/stdc++.h>
using namespace std;

int main(){
  int W,N;
  int dp[1001];
  int num = 1;
  while(scanf("%d",&W),W){
    scanf("%d",&N);
    memset(dp,0,sizeof(dp));
    
    for(int i=0;i<N;i++){
      int v,w;
      scanf("%d,%d",&v,&w);
      for(int j=W;j>=0;j--){
	if(j+w <= W)dp[j+w] = max(dp[j+w], dp[j]+v);
      }
    }
    cout << "Case " << num++ << ":\n"; 
    cout << dp[W] << endl << (lower_bound(dp,dp+W+1,dp[W])-dp) << endl;
  }
}