#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
  int w;
  int t=0;
  while(cin >> w && w){
    int n,dp[2][1001],wait[1000],value[1000];
    cin >> n;
    for(int i=0;i<n;i++) scanf("%d,%d",&value[i],&wait[i]);

    fill(dp[0],dp[2],0);
    for(int i=0;i<n;i++){
      for(int j=wait[i];j<=w;j++) dp[1][j] = max(dp[1][j], dp[0][j-wait[i]]+value[i]);
      for(int j=0;j<=w;j++) dp[0][j] = dp[1][j];
    }

    int ans = 0, answ;
    for(int i=0;i<=w;i++){
      if(ans < dp[0][i]){
        ans = dp[0][i];
        answ = i;
      }
    }

    cout << "Case " << ++t << ':' << endl;
    cout << ans << endl;
    cout << answ << endl;
  }
}