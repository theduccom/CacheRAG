#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define REP(i,n) for(int i=0;i<n;i++)
#define PP(m) REP(i, m.size()) cout << m[i] << endl;

vector<bool> isPrime;
ll primed = 0;

void eratosu(ll max){
  if (max < primed) return;
  else primed = max;

  if (max+1 > isPrime.size()) {
    isPrime.resize(max+1,true);
  }
  isPrime[0] = false;
  isPrime[1] = false;

  for(ll i = 2; i * i <= max; ++i) {
    if (isPrime[i]) {
      for(ll j = 2; i * j <= max; ++j) {
        isPrime[i*j] = false;
      }
    }
  }
}

int main() {
  int N;

  while (cin >> N && N) {
    eratosu(N);
    int c=0;
    REP(i, N/2+1) {
      if (isPrime[i] && isPrime[N-i]) {
        c++;
      }
    }
    cout << c << endl;
  }
  return 0;
}