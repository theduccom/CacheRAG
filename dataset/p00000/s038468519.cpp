#include<iostream>

using namespace std;

#define rep(i, n) for (int i = 0; i < int(n); ++i)

int main() {
  rep (i, 9) rep (j, 9) cout << i + 1 << "x" << j + 1 << "=" << (i + 1) * (j + 1) << endl;
  return 0;
}