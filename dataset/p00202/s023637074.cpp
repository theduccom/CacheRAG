#include<iostream>
#include<vector>
#include<stack>
#include<cmath>

using namespace std;

#define NUM 1000000
int money, n;
int prime[NUM];
int dp[NUM+1] = {};

int cal(int cost[]) {
  int i, j;
  int ans;
  for(i = 0; i <= money; i++) {
    dp[i] = 0;
  }
  
  dp[0] = 1;
  // for(i = 0; i < n; i++) {
  //   dp[cost[i]] = 1;
  // }

  for(i = 1; i <= money; i++) {
    for(j = 0; j < n; j++) {
      if(i - cost[j] >= 0 && dp[i - cost[j]] == 1) {
	dp[i] = 1;
      }
    }
  }

  // for(i = 0; i <= 1000; i++) {
  //   cout << i << ' ' << dp[i] << endl; 
  // }
  
  for(ans = money; ans > 0; ans--) {
    if(dp[ans] == 1 && prime[ans] == 1) {
      cout << ans << endl;
      return 0;
    }
  }
  
  cout << "NA" << endl;
  return 1;
}
  
int main() {
  int i, j;
  int sq_num = (int)sqrt((double)NUM);

  for (i = 0; i < NUM; i++)
    prime[i] = 1;  
  prime[0] =  prime[1] = 0;    
  
  for (i = 1; i < sq_num; i++) {
    if (prime[i] == 1)         
      for (j = 2; i * j <= NUM; j++) {
	prime[j*i] = 0;
      }
  }
  
  while(cin >> n >> money, n != 0 || money != 0) {
    int cost[n + 1] = {};
    for(i = 0; i < n; i++) {
      cin >> cost[i];
    }
    
    cal(cost); 
  }
  
  return 0;
}
    
	    