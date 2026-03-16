#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1000;

int w, n;
int weight[N];
int value[N];
int dp[N+1][N+1];

void solve(){
   fill(dp[0], dp[N+1], -1);
   for(int i=0;i<N+1;i++){
      dp[0][i] = 0;
   }
   for(int i=0;i<n;++i){
      for(int j=0;j<=w;++j){
         if(j < weight[i]){
            dp[i+1][j] = dp[i][j];
         }else{
            dp[i+1][j] = max(dp[i][j], dp[i][j-weight[i]] + value[i]);
         }
      }
   }
   for(int i=w-1;i>=0;--i){
      if(dp[n][i] != dp[n][w]){
         cout << dp[n][w] << endl << i+1 << endl;
         return;
      }
   }
}

main(){
   for(int t=1;cin >> w && w;++t){
      cin >> n;
      for(int i=0;i<n;++i){
         char c;
         cin >> value[i] >> c >> weight[i];
      }
      cout << "Case " << t << ":" << endl;
      solve();
   }
   return 0;
}