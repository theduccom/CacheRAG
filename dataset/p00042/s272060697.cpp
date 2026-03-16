#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAX_N 1000
#define MAX_W 1000

int main(void){
  int W, N, cnt = 0;
  while(cin >> W && W && cin >> N){
    cnt++;
    int dp[MAX_W+1][MAX_N+1] = {0};
    for(int i = 0; i < N; i++){
      int v, w;
      scanf("%d,%d", &v, &w);
      for(int j = 0; j < W+1; j++){
        dp[j][i+1] = max(dp[j][i], (j-w >= 0 ? dp[j-w][i] + v : 0));
      }
    }
    cout << "Case " << cnt << ":" << endl;
    for(int j = 0; j < W + 1; j++){
      if(dp[j][N] == dp[W][N]){
        cout << dp[j][N] << endl << j << endl;
        break;
      }
    }
  }
  return 0;
}