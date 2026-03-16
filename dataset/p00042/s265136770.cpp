#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
  int W, N, cs=0;
  int cost[1001], weight[1001];
  int dp[1001];
  
  while(cin >> W, W){
    cin >> N;
    for(int i = 0 ; i < N ; i++){
      scanf("%d,%d", &cost[i], &weight[i]);
    }
    fill(dp, dp+1001, -1);
    dp[0] = 0;

    for(int i = 0 ; i < N ; i++){
      for(int j = W-weight[i] ; j >= 0 ; j--){
	if(dp[j] >= 0) dp[j+weight[i]] = max(dp[j+weight[i]], dp[j]+cost[i]);
      }
    }

    int Cost = 0, Weight = 0;
    
    for(int i = 0 ; i <= W ; i++){
      if(dp[i] > Cost){
	Cost = dp[i];
	Weight = i;
      }
    }
    printf("Case %d:\n%d\n%d\n", ++cs, Cost, Weight);
  }
  return 0;
}