#include <iostream>
#include <vector>
#include <algorithm>
#define PRIME_MAX 50000
using namespace std;

vector<int> prime;
bool isprime[PRIME_MAX+1];

void sieve() {
  fill(isprime, (bool*)isprime+PRIME_MAX+1, true);
  isprime[0] = isprime[1] = false;
  for(int i = 2; i <= PRIME_MAX; i++) {
    if(!isprime[i]) continue;
    prime.push_back(i);
    for(int j = i*2; j <= PRIME_MAX; j += i) {
      isprime[j] = false;
    }
  }
}

main() {
  sieve();
  while(1) {
    int n;
    cin >> n;
    if(n == 0) break;
    int cnt = 0;
    for(int i = 0; i < prime.size(); i++) {
      if(prime[i] > n/2) break;
      if(isprime[n-prime[i]]) cnt++;
    }
    cout << cnt << endl;
  }
}