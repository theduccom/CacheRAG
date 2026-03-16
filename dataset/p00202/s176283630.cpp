#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 1000001

bool is_prime[MAX];

void Erathos() {
  fill(is_prime, is_prime + MAX, true);
  
  is_prime[0] = is_prime[1] = true;
  
  for(int i=2; i*i<=MAX; i++) {
    if(is_prime[i]) {
      for(int j=i*i; j<=MAX; j+=i) {
	is_prime[j] = false;
      }
    }
  }
}

bool dp[MAX];
int price[30];

int main() {
  
  Erathos();
  
  int n, x;
  
  while(cin >> n >> x && n+x) {
    fill(dp, dp + MAX, 0);
    
    for(int i=0; i<n; i++) {
      cin >> price[i];
    }
    
    dp[0] = 1;
    for(int i=1; i<=x; i++) {
      for(int j=0; j<n; j++) {
	if(i - price[j] >= 0) {
	  dp[i] = dp[i] | dp[i-price[j]];
	}
      }
    }
    
    int ans = 0;
    for(int i=0; i<=x; i++) {
      if(dp[i] && is_prime[i]) {
	ans = max(ans, i);
      }
    }
    
    if(ans) cout << ans << endl;
    else cout << "NA" << endl;
  }
    
  return 0;
}