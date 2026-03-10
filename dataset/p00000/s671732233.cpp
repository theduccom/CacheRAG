#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 1000000000;
using namespace std;
int main() {
  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      cout << i << 'x' << j << '=' << i * j << endl;
    }
  }
  return 0;
}