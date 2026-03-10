#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  for (ll i = 1; i <= 9; ++i) {
    for (ll j = 1; j <= 9; ++j) {
      cout << i << "x" << j << "=" << i*j << endl;
    }
  }
  return 0;
}
