#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10001;
bool isPrime[MAXN];

int main() {
  fill(isPrime, isPrime+MAXN, true);
  isPrime[0] = isPrime[1] = false;
  for(int i = 2; i < MAXN; ++i) {
    if(isPrime[i])
      for(int j = i*2; j < MAXN; j += i) isPrime[j] = false;
  }

  int n;
  while(cin >> n && n) {
    int p, q;
    for(int x = 3; x+2 <= n; ++x) {
      if(isPrime[x] && isPrime[x+2]) {
        p = x;
        q = x+2;
      }
    }
    cout << p << " " << q << endl;
  }
  return 0;
}