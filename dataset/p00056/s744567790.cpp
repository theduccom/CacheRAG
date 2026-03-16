#include <iostream>
using namespace std;

bool is_prime[50001];

void sieve() {
  for(int i=0;i<50001;i++) {
    is_prime[i] = true;
  }

  is_prime[0] = is_prime[1] = false;

  for(int i=2;i<50001;i++) {
    if(is_prime[i]) {
      for(int j=2*i;j<50001;j+=i) {
        is_prime[j] = false;
      }
    }
  }
}

int main() {
  int n;
  sieve();
  while(cin >> n) {
    if(n==0)break;
    int ans = 0;
    for(int i=2;i<=n/2;i++) {
      if(is_prime[i]) {
        if(is_prime[n-i]) {
          ans++;
        }
      }
    }
    cout << ans << endl;
  }
}