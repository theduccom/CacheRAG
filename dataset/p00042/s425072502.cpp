#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>

#define pb(a) push_back(a)

using namespace std;

int main(){
  int max_w, n;
  int count = 1;

  while(true){
    scanf("%d", &max_w);
    if(max_w == 0){
      break;
    }

    scanf("%d", &n);
    vector<int> v, w;
    for(int i = 0; i < n; ++i){
      int t1, t2;
      scanf("%d,%d", &t1, &t2);
      v.pb(t1); w.pb(t2);
    }

    int dp[1011][1011] = {};
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < max_w + 1; ++j){
        if(j - w[i] >= 0){
          dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
        }else{
          dp[i + 1][j] = dp[i][j];
        }

      }
    }

    int ans = 0, index = -1;
    for(int i = 0; i < 1001; ++i){
      if(ans < dp[n][i]){
        ans = dp[n][i];
        index = i;
      }
    }
    printf("Case %d:\n%d\n%d\n", count, ans, index);
    count++;
  }
  return 0;
}


