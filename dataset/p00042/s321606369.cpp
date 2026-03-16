#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;
int inf = 1000000000;
// dp[i][j] = i ???????????§??§?????? j ??§?????????
// dp[i][j] = dp[i][j-?] + v[i];

int dp[1001][1001];

int main(){

  int W, N, l;
  l = 1;
  while(cin >> W){
    if( W == 0 ) break;
    cin >> N;
    vector<int> v(N);
    vector<int> w(N);
    for(int i=0; i<N; i++) scanf("%d,%d", &v[i], &w[i]);

    for(int i=0; i<1001; i++) for(int j=0; j<1001; j++) dp[i][j] = 0;

    for(int i=0; i<N; i++){
      for(int j=0; j<=W; j++){
        if( j - w[i] >= 0 ) dp[i+1][j] = max(dp[i][j], dp[i][ j - w[i] ] + v[i]);
        else dp[i+1][j] = dp[i][j];
        // dp[i+1][j] = max(dp[i][j], dp[i+1][j]);
      }
    }

    int answ = 1;
    for(int i=1; i<=W; i++){
      if( dp[N][answ] < dp[N][i] ){
        answ = i;
      }
    }

    cout << "Case " << l << ":" << endl;
    cout << dp[N][W] << endl;
    cout << answ << endl;

    l++;
  }




  return 0;
}