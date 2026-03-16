#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t;
  while (cin >> n, n) {
    int c[10] = {};
    while (n--) {
      cin >> t;
      c[t]++;
    }
    for (int i = 0; i < 10; i++) {
      if (c[i]) {
        string s(c[i], '*');
        cout << s << "\n";
      } else {
        cout << "-\n";
      }
    }
  }
}

