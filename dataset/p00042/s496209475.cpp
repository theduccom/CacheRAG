#include <iostream>
#include <cstdio>
#define MAX_N 1000
#define MAX_W 1000
using namespace std;
int dp[MAX_N+1][MAX_W+1];
int N,W;
int v[MAX_N+1],w[MAX_N+1];

void solve() {
  for(int i=0;i<=1000;i++) {
    dp[0][i] = 0;
  }
  for(int i=1;i<=N;i++) {
    for(int j=0;j<=1000;j++) {
      if(j-w[i] >= 0) {
        dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
      }
      else {
        dp[i][j] = dp[i-1][j];
      }
    }
  }
}

int main() {
  int vt,wt,p=0,minW;
  while(cin >> W) {
    if(W==0)break;
    cin >> N;
    for(int i=1;i<=N;i++) {
      scanf("%d,%d",&vt,&wt);
      v[i] = vt; w[i] = wt;
    }
    solve();
    p++;
    printf("Case %d:\n",p);
    int top = dp[N][W];
    for(int i=0;i<W;i++) {
      if(top == dp[N][W-i]) {
        minW = W-i;
        continue;
      }
      break;
    }
    printf("%d\n%d\n",dp[N][W],minW);
  }
}