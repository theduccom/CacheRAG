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
  int a, b, c;
  eratosu(100000);
  while (cin >> a && a) {
    b=a-1; c=a+1;
    while (!isPrime[b]) b--;
    while (!isPrime[c]) c++;
    cout << b << " " << c << endl;
  }
  return 0;
}