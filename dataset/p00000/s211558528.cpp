#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main() {
  for (int i = 0; i < (int)9; ++i) for (int j = 0; j < (int)9; ++j) printf("%dx%d=%d\n", i + 1, j + 1, (i + 1) * (j + 1));
  return 0;
}

