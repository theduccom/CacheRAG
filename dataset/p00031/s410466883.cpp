#include <bits/stdc++.h>
using namespace std;

const vector<int> v = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

int main() {
  int n;
  vector<int> sum(1024, 0);
  for (int i = 0; i <= 1024; ++i) {
    for (int j = 0; j < 10; ++j) {
      if ((i >> j) & 1) sum[i] += v[j];
    }
  }
  while (cin >> n) {
    int pos = 0;
    for (int i = 0; i <= 1024; ++i) {
      pos = i;
      if (sum[i] == n) break;
    }
    bool ok = false;
    for (int i = 0; i <= 10; ++i) {
      if ((sum[pos] >> i) & 1) {
        if (ok) {
          cout << ' ';
        } else {
          ok = true;
        }
        cout << (1 << i);
      }
    }
    cout << endl;
  }
  return 0;
}

