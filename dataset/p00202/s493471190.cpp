#include <iostream>
using namespace std;
int n,budget,price[30];
int dp[1000001];
bool is_prime[1000001];

void sieve() {
  for(int i=0;i<1000001;i++) {
    is_prime[i] = true;
  }
  is_prime[0] = is_prime[1] = false;

  for(int i=0;i*i<1000001;i++) {
    if(is_prime[i]) {
      for(int j=2*i;j<1000001;j+=i) {
        is_prime[j] = false;
      }
    }
  }
}

void solve() {
  for(int j=0;j<=budget;j++) {
    dp[j] = 0;
  }

  for(int i=0;i<n;i++) {
    for(int j=0;j<=budget;j++) {
      if(j-price[i]>=0) {
        dp[j] = max(dp[j], dp[j-price[i]] + price[i]);
      }
      else {
        dp[j] = dp[j];
      }
    }
  }
  for(int i=0;i<budget;i++) {
    if(is_prime[dp[budget-i]]) {
      cout << dp[budget-i] << endl;
      return;
    }
  }
  cout << "NA" << endl;
  return;
}

int main() {
  sieve();
  while(cin >> n >> budget) {
    if(n==0&&budget==0) break;
    for(int i=0;i<n;i++) {
      cin >> price[i];
    }
    solve();
  }
}