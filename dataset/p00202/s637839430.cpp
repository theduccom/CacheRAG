// 0202_AtBosssExpense.cpp
//
#include <bits/stdc++.h>
using namespace std;
const int MAX_X = 1000001;
const int MAX_N =30;
bool prime[MAX_X], dp[MAX_X];
int v[MAX_N];
int n, x;
void table() {
  fill(prime,prime+MAX_X,1);

  for(int i=2;i*i<MAX_X;++i)
    if(prime[i])
      for(int j=i*i;j<MAX_X;j+=i)
        prime[j]=0;
}
void solve() {
  fill(dp,dp+MAX_X,0);
  dp[0]=1;
  for(int i=0;i<=x;++i)
    for(int j=0;j<n;++j)
      if(v[j]<=i&&dp[i-v[j]]) dp[i]=1;

  for(int i=x;i>0;--i) {
    if(prime[i]&&dp[i]) {
      cout << i << endl;
      return;
    }
  }
  cout << "NA" << endl;
}
int main() {
  table();
  while(cin >> n >> x && n && x) {
    for(int i=0;i<n;++i) cin >> v[i];
    solve();
  }
  return 0;
}

